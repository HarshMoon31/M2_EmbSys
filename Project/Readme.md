# Embedded C Programming 

## Heat Control System 
The Vehicle Seat Heat Monitoring System is capable of maintaining of heat in the vehicles seats. In European countries, the temperature is very low and any electronic designer should make sure that his equipment should work efficiently in that whether. In our project, the sensor will sense is the driver has been seated or not and if the driver seated then he need to set the temperature accordingly. Based on that our controller will set the heater to required temperature. The Heater will generate the heat and a LCD display will show requested the temperature.In our project we have used ATmega328 microcontroller along with temperature sensor, Push button, Heat generator, LED and LCD diplay,etc.


### Theory

The heat control system is basically used to control the temperature inside a car. Whenever the user or driver gets seated inside the car, the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor monitors the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are performed on the microcontroller, ***Atmega328***.


### FEATURES 
It is capable to determining wheather person is sitting or not by using sensors and check the heater. after that if passanger was present in the vechicle it will gives the indication. after the indication is done it will check the heat. after the indication passanger can modify the temparature by seeing the display.

### Function

* When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized using ADC.
* The digitized temperature input is visualized using Pulse Width Modulation.
* The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.

### CI and Code Quality
![code_quality_score](https://api.codiga.io/project/31666/score/svg)
![code_quality_status](https://api.codiga.io/project/31666/status/svg)
