#include "ObjectLessComparator.h"

namespace Knapsack {

	bool ObjectLessComparator::operator()(const Object* pLeft, const Object* pRight) const {
		return (*pLeft) < (*pRight);
	}

}