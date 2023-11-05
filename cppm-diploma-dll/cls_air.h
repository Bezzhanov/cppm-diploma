#pragma once
#include "cls_unit.h"

class Air : public Unit {
public:
	Air(size_t distance);
	float get_time() override;
protected:
	float coeff_reduce_distance{};
	virtual float get_distance();
};
