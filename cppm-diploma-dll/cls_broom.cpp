#include "cls_broom.h"

Broom::Broom(size_t distance) : Air(distance)
{
	name = "Broom";
	speed = 20;
	
	int distanceInt = static_cast<int>(distance);
	int i = static_cast<int>(distanceInt / 1000);
	if (i > 0) {
		for (size_t j = 0; j < i; j++) {
			if (coeff_reduce_distance < 0.9)
			{
				coeff_reduce_distance += 0.01f;
			}
		}
	}
}
