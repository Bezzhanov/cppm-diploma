#include "cls_centaur.h"

Centaur::Centaur(size_t distance) : Ground(distance)
{
	name = "Centaur";
	speed = 15;
	TimeToSleep = 8;
	SleepTime[2] = 2;
}
