#pragma once
#include "cls_unit.h"

class Ground : public Unit {
public:
	Ground(size_t distance);

	float get_time() override;
protected:
	float TimeToSleep{};
	float SleepTime[3]{};
};