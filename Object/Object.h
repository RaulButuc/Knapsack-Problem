#pragma once

namespace Knapsack {

	class Object {

	public:
		static short count;

		Object(double, double);
		short getIndex() const;
		double getWeight() const;
		double getValue() const;
		bool operator<(const Object&) const;
		~Object();

	private:
		short index;
		double weight;
		double value;

	};

}