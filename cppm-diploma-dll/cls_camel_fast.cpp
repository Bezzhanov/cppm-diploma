#include "cls_camel_fast.h"

Camel_fast::Camel_fast(size_t distance) : Camel(distance)
{
	name = "Camel SpeedRunner";
	speed = 40;
	TimeToSleep = 10;
	SleepTime[0] = 5;
	SleepTime[1] = 6.5;
	SleepTime[2] = 8;
}
