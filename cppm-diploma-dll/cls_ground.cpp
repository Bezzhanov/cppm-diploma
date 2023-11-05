#include "cls_ground.h"

Ground::Ground(size_t distance) : Unit(distance)
{
	type = Unit::GROUND;
}

float Ground::get_time() {

	float lock = static_cast<float>(distance_) / static_cast<float>(speed);

	float interval = speed * TimeToSleep;
	float i = distance_ / interval;
	size_t count = static_cast<size_t>(i);

	if (i == count)
	{
		count--;
	}

	double addTime = 0;
	if (count > 1 && SleepTime[0] > 0)
	{
		addTime += SleepTime[0];
		count--;
	}
	if (count > 1 && SleepTime[1] > 0)
	{
		addTime += SleepTime[1];
		count--;
	}
	if (count > 1 && SleepTime[2] > 0)
	{

		for (size_t i = 0; i < count; i++)
		{
			addTime += SleepTime[2];
		}
		count--;
	}

	lock += addTime;

	return lock;

}
