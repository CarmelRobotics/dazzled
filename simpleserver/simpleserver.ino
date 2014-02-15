#include <SPI.h>
#include <Ethernet.h>

int currentLEDpattern = 0;

// Enter a MAC address and IP address for your controller below.
// The IP address will be dependent on your local network:
byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress ip(10,20,35,12);

// Initialize the Ethernet server library
// with the IP address and port you want to use
EthernetServer server(1140);

void setup() {
 // Open serial communications and wait for port to open:
  Serial.begin(9600);
   while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }


  // start the Ethernet connection and the server:
  Ethernet.begin(mac, ip);
  server.begin();
  Serial.print("server is at ");
  Serial.println(Ethernet.localIP());
}

int counterloop = 0;

void loop() {
  // listen for incoming clients
  EthernetClient client = server.available();
  if (client) {
    counterloop = 0;
    Serial.println("new client");

    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c); // this prints it out on the serial monitor
        if (counterloop++ > 40) {
          Serial.write('\n');
          counterloop = 0;
        }
        //client.write(c);
        if (c == '0') {
	    // do nothing
        } else if (c == '1') {
	    currentLEDpattern = 1;
	    pattern1();
	} else if (c == '2') {
	    currentLEDpattern = 2;
	    pattern2();
	}

      }
    }
    // give the web browser time to receive the data
    delay(1);
    // close the connection:
    client.stop();
    Serial.println("client disconnected");
  }
}

void pattern1() {
    Serial.println("Pattern 1");
}

void pattern2() {
    Serial.println("Pattern 2");
}
