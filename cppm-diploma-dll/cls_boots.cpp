#include "cls_boots.h"

Boots::Boots(size_t distance) : Ground(distance)
{
	name = "Allroad Boots";
	speed = 6;
	TimeToSleep = 60;
	SleepTime[0] = 10;
	SleepTime[2] = 5;

}
