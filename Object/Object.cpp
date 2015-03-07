#include "Object.h"

namespace Knapsack {

	short Object::count = 0;

	Object::Object(double _weight, double _value) :
		index(++count), weight(_weight), value(_value) {}

	short Object::getIndex() const {
		return index;
	}

	double Object::getWeight() const {
		return weight;
	}

	double Object::getValue() const {
		return value;
	}

	bool Object::operator<(const Object& other) const {
		return (value / weight) < (other.getValue() / other.getWeight());
	}

	Object::~Object() {}

}