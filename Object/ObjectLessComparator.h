#pragma once

#include "Object.h"

namespace Knapsack {

	class ObjectLessComparator {

	public:
		bool operator()(const Object*, const Object*) const;

	};

}