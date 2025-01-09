/*
* project   : https://github.com/Robin005cr/Layered-Communication
* file name : commonData.hpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
struct TempSensor
{
	int sensorID;
	int voltageData;

};

void copyDatatoLayer1(TempSensor* ptr);
void copyDatatoLayer2(TempSensor* ptr);
void copyDatatoLayer3(TempSensor* ptr);