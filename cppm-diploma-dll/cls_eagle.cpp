#include "cls_eagle.h"

Eagle::Eagle(size_t distance) : Air(distance)
{
	name = "Eagle";
	speed = 8;
	coeff_reduce_distance = 0.06f;
}
