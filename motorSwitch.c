#pragma config(Sensor, in1,    pwrExp,         sensorAnalog)
#pragma config(Sensor, dgtl1,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  limit,          sensorTouch)
#pragma config(Sensor, dgtl4,  bump,           sensorTouch)
#pragma config(Sensor, dgtl5,  ledgreen,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl6,  ledyellow,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  ledred,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  jumper,         sensorTouch)
#pragma config(Motor,  port5,           drive1,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           drive2,        tmotorVex393_MC29, openLoop, reversed)

task main {
	while (true) {
		if (SensorValue[bump] == true) {
			motor[drive1] = 127;
			motor[drive2] = 127;
	  }
		else {
			motor[drive1] = 0;
			motor[drive2] = 0;
		}
	}

}
