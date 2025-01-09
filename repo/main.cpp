/*
* project   : https://github.com/Robin005cr/Layered-Communication
* file name : main.cpp
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
#include "layer2.hpp"
#include "layer3.hpp"
using namespace std;

int main()
{
	TempSensor* ptr;
	TempSensor TO1;
	ptr = &TO1;
	ptr->sensorID = 1331;
	ptr->voltageData = 56;

	copyDatatoLayer1(ptr);
	copyDatatoLayer2(ptr);
	copyDatatoLayer3(ptr);

	Layer1_init();
	Layer2_init();
	Layer3_init();
	
	return 0;
}