#include <SPI.h>
#include <Ethernet.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif

#define PIN 6

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(40, 1, 6,
2     + 0 +
NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
NEO_GRB            + NEO_KHZ800);

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


  matrix.begin();
  matrix.setBrightness(5);
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
          currentLEDpattern = 0;
          pattern0();
        } 
        else if (c == '1') {
          currentLEDpattern = 1;
          pattern1();
        } 
        else if (c == '2') {
          currentLEDpattern = 2;
          pattern2();
        }
        else if (c == '3') {
          currentLEDpattern = 3;
          pattern3();
        } 
        else if (c == '4') {
          currentLEDpattern = 4;
          pattern4();
        }
        else if (c == '5') {
          currentLEDpattern = 4;
          pattern5();
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

void pattern0() {
  Serial.println("Off");
  matrix.fillScreen(0);
  for (int x = 0; x < 40; x++) {
    matrix.drawPixel(x,0, matrix.Color(0,0,0));
  }

  matrix.show();
  delay(100);
}
void pattern1() {
  Serial.println("Pattern 1");
  matrix.fillScreen(0);
  for (int x = 0; x < 40; x++) {
    matrix.drawPixel(x,0, matrix.Color(255, 0, 0));
  }

  matrix.show();
  delay(100);
}

void pattern2() {
  Serial.println("Pattern 2");
  matrix.fillScreen(0);
  for (int x = 0; x < 40; x++) {
    matrix.drawPixel(x,0, matrix.Color(0, 0, 255));
  }

  matrix.show();
  delay(100);
}

void pattern3() {
  Serial.println("Pattern 3");
  matrix.fillScreen(0);
  for (int x = 0; x < 40; x++) {
    matrix.drawPixel(x,0, matrix.Color(0, 255, 0));
  }
  matrix.show();
  delay(100);
}

void pattern4() {
  Serial.println("Pattern 4");
  matrix.fillScreen(0);
    for (int x = 0; x < 8; x++) {
      matrix.drawPixel(x,0, matrix.Color(255, 0, 255));
      matrix.show();
    }
    for (int y = 8; y < 16; y++) {
      matrix.drawPixel(y,0, matrix.Color(0, 255, 255));
    }
    for (int z = 16; z < 24; z++) {
      matrix.drawPixel(z,0, matrix.Color(0, 255, 0));
    }
    for (int a = 24; a < 32; a++) {
      matrix.drawPixel(a,0, matrix.Color(255, 255, 0));
    }
    for (int b = 32; b < 40; b++) {
      matrix.drawPixel(b,0, matrix.Color(255, 0, 120));
    }
  matrix.show();
  delay(10);
}

void pattern5() {
 Serial.println("Pattern 5");
 matrix.fillScreen(0);
  for (int x = 0; x < 3; x++) {
   matrix.drawPixel(0,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(1,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(2,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(3,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(4,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(5,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(6,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(7,0, matrix.Color(128*x, 128*x, 0));
    matrix.drawPixel(8,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(9,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(10,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(11,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(12,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(13,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(14,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(15,0, matrix.Color(128*x, 128*x, 0));
    matrix.drawPixel(16,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(17,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(18,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(19,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(20,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(21,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(22,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(23,0, matrix.Color(128*x, 128*x, 0));
    matrix.drawPixel(24,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(25,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(26,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(27,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(28,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(29,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(30,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(31,0, matrix.Color(128*x, 128*x, 0));
    matrix.drawPixel(32,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(33,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(34,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(35,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(36,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(37,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(38,0, matrix.Color(128*x, 128*x, 0));
  matrix.drawPixel(39,0, matrix.Color(128*x, 128*x, 0));
  matrix.show();
 delay(500);
 
 }
 
}





