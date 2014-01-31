dazzled
=======

`dazzled` arduino code project

This project implements the code to handle LEDs and network communication traffic from our First Robotics Competition Robot.

This project is being used on an [Arduino Ethernet][arduino] board.  A to-be-named robot code project will communicate with `dazzled` and provide it with the information from the robot game.

This project will implement several LED light patterns for fun and several patterns to act as a driver station heads-up display.

Our Hardware
============

* [Arduino Ethernet] [arduino]
* [RGB-123] [rgb123] brand [1x8 LEDs] [rgb123-1x8] (using WS2812 LEDs)
* WS2811 LEDs
* [NeoPixel Ring] [ring] (WS2812 LEDs)
* [PixyCam] [pixycam] (CMUCam5) waiting for this to be released


[arduino]: http://arduino.cc/en/Main/ArduinoBoardEthernet "Arduino Ethernet"
[pixycam]: http://www.kickstarter.com/projects/254449872/pixy-cmucam5-a-fast-easy-to-use-vision-sensor?ref=category "PixyCam"
[rgb123]: http://rgb-123.com/ "RGB-123"
[rgb123-1x8]: http://rgb-123.com/product/18-1x8-rgb-led-matrix/
[ring]: http://www.adafruit.com/products/1463
