#pragma once
#include <iostream>

class Unit {
public:
	enum TYPE {GROUND = 1,AIR};

	Unit(size_t distance);
	virtual Unit::TYPE get_type();
	virtual std::string get_name();
	virtual float get_time();

protected:
	size_t distance_;
	Unit::TYPE type;
	std::string name;
	float time{};
	int speed{};
};