#pragma once

#include "Object.h"

namespace Knapsack {

	class ObjectLessComparator {

	public:
		ObjectLessComparator();
		bool operator()(const Object*, const Object*) const;
		~ObjectLessComparator();

	};

}