#include <fstream>
#include <vector>
#include <queue>
#include "Object.h"
#include "ObjectLessComparator.h"

using std::ios;
using std::endl;
using std::ifstream;
using std::ostream;
using std::ofstream;
using std::vector;
using std::priority_queue;
using Knapsack::Object;
using Knapsack::ObjectLessComparator;

typedef priority_queue<Object*, vector<Object*>, ObjectLessComparator> ObjectsPriorityQueue;

void readData(ObjectsPriorityQueue&, double&);
void processAndWrite(ObjectsPriorityQueue&, double);
ostream& operator<<(ostream&, const Object&);

int main(int argc, char *argv[]) {
	ObjectsPriorityQueue objQueue;
	double maxCapacity;

	readData(objQueue, maxCapacity);
	processAndWrite(objQueue, maxCapacity);

	system("pause");
	
	return 0;
}

void readData(ObjectsPriorityQueue& objQueue, double& maxCapacity) {
	ifstream input("objects.in", ios::in);
	double weight;
	double value;

	if (input.good()) {
		input >> maxCapacity;
	}

	while (input.good()) {
		input >> weight >> value;
		objQueue.push(new Object(weight, value));
	}

	input.close();
}

void processAndWrite(ObjectsPriorityQueue& objQueue, double maxCapacity) {
	ofstream output("objects.out", ios::out);

	while (!objQueue.empty()) {
		Object *pObj = objQueue.top();
		
		if (maxCapacity > 0) {
			double weight = pObj->getWeight();
			maxCapacity -= weight;
			output << *pObj;

			if (maxCapacity >= 0) {
				output << " - Complete" << endl;
			}
			else {
				output << " - " << (maxCapacity + weight) << "kg" << endl;
			}
		}

		objQueue.pop();
		delete pObj;
	}

	output.close();
}

ostream& operator<<(ostream& output, const Object& obj) {
	output << "Object " << obj.getIndex() << ": (" << obj.getWeight() << ", " << obj.getValue() << ")";

	return output;
}