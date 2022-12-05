

#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include "index.h"

// Set the AP
const char *ssid = "HOMO";
const char *password = "1145141919"; // Homo is everywhwere
const char *Data = "";
WiFiServer server(80);

void setup()
{

  Serial.begin(115200);
  Serial.println();
  Serial.println("Configuring access point...");

  // You can remove the password parameter if you want the AP to be open.
  WiFi.softAP(ssid, password);
  IPAddress IPaddr = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IPaddr);
  server.begin();

  // Serial.println("Server started");
  // esp_websocket_client_init();
}
using namespace std;
void loop()
{
  WiFiClient client = server.available(); // cilent listning
  if (client)
  {
    String currentLine = "";
    char c;
    Serial.println("connected");
    while (client.connected())
    {

      if (client.available())
      {
        c = client.read();
        // Serial.write(c);

        if (c == '\n')
        {
          if (currentLine.length() == 40)
          {
            // GET /rocker?var=rocker&val=$05$05$ HTTP/1.1
            // GET /rocker?var=rocker&val=$F$ HTTP/1.1

            Serial.println(currentLine);
            Serial.println(currentLine.substring(28, 30));
          }

          // end the http request
          if (currentLine.length() == 0)
          {
            // HTTP headers always start with a response code (HTTP/1.1 200 OK)
            // and a content-type so the client knows what's coming, then a blank line:
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();

            // esp32 respond the html file
            client.print(index_html);
            client.println();
            // break out of the while loop:
            break;
          }
          else
          { // clear the currentLine,before a new line saved
            currentLine = "";
          }
        }
        else if (c != '\r')
        {                   // if you got anything else but a carriage return character,
          currentLine += c; // add it to the end of the currentLine
        }
      }
    }
  }
  // close the connection:
  client.stop();
  // Serial.println("Client Disconnected.");
}
