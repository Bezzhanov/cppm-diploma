#include "cls_camel.h"

Camel::Camel(size_t distance) : Ground(distance) {
	name = "Camel";
	speed = 10;
	TimeToSleep = 30;
	SleepTime[0] = 5;
	SleepTime[2] = 8;
}