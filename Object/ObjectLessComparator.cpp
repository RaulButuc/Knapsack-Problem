#include "ObjectLessComparator.h"

namespace Knapsack {

	ObjectLessComparator::ObjectLessComparator() {}

	bool ObjectLessComparator::operator()(const Object* pLeft, const Object* pRight) const {
		return (*pLeft) < (*pRight);
	}

	ObjectLessComparator::~ObjectLessComparator() {}

}