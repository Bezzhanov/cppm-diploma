#include "cls_air.h"

Air::Air(size_t distance) : Unit(distance)
{
	type = Unit::AIR;
}
float Air::get_time() { return get_distance() / speed; };
float Air::get_distance() { return distance_ * (1 - coeff_reduce_distance); };

