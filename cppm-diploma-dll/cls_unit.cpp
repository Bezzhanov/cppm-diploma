#include "cls_unit.h"

Unit::Unit(size_t distance) : distance_(distance)
{
	type = GROUND;
}
Unit::TYPE Unit::get_type() {
	return type;
}
std::string Unit::get_name() {
	return name;
}
float Unit::get_time() {
	return time;
}