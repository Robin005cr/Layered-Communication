/*
* project   : https://github.com/Robin005cr/Layered-Communication
* file name : layer1.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include<iostream>
#include "commonData.hpp"
#include "layer1.hpp"
using namespace std;

TempSensor copiedLayer1;

float Layer1_init()
{
	cout << "Layer1 started " << endl;
	float temperature = voltageToValue(&copiedLayer1);
	return temperature;

}
void copyDatatoLayer1(TempSensor* ptr)
{
	copiedLayer1.sensorID = ptr->sensorID;  // Copy sensorID
	copiedLayer1.voltageData = ptr->voltageData;  // Copy voltageData
}
float voltageToValue(TempSensor* ptr)
{
	return ptr->voltageData * 100.0f;
}