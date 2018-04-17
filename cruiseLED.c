#pragma config(Sensor, in4,    pot,            sensorPotentiometer)
#pragma config(Sensor, dgtl3,  limit,          sensorTouch)
#pragma config(Sensor, dgtl4,  bump,           sensorTouch)
#pragma config(Sensor, dgtl5,  ledGreen,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl6,  ledYellow,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  ledRed,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  jumper,         sensorTouch)
#pragma config(Sensor, dgtl11, ultrasonic,     sensorSONAR_mm)
#pragma config(Motor,  port2,           drive,         tmotorVex393_MC29, openLoop)

task main() {
	while (true){
	  int b = SensorValue[pot];
		motor[drive] = ((127 * b)/4096);


	  int a = ((127 * b)/4096);

	  if (a < 45) {
	  	SensorValue[ledRed] = 1;
	  	SensorValue[ledYellow] = 0;
	  	SensorValue[ledGreen] = 0;
		}
		if ( 45 < a && a < 90 ) {
			SensorValue[ledRed] = 0;
	  	SensorValue[ledYellow] = 1;
	  	SensorValue[ledGreen] = 0;
	  }
	  if ( 90 < a) {
			SensorValue[ledRed] = 0;
	  	SensorValue[ledYellow] = 0;
	  	SensorValue[ledGreen] = 1;
	  }


	}
}
