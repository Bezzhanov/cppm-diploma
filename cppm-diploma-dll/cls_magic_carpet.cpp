#include "cls_magic_carpet.h"

MagicCarpet::MagicCarpet(size_t distance) : Air(distance)
{
	name = "MagicCarpet";
	speed = 10;
	
    if (distance < 1000)
    {
        coeff_reduce_distance = 1;
    }
    else if (distance < 5000)
    {
        coeff_reduce_distance = 0.03f;
    }
    else if (distance < 10000)
    {
        coeff_reduce_distance = 0.1f;
    }
    else if (distance >= 10000)
    {
        coeff_reduce_distance = 0.05f;
    }
}
