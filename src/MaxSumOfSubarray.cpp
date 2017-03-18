#include <iostream>
using namespace std;

int main() {

	int array[8] = {1, -2, 3, 10, -4, 7, 2, -5};

	int maxSum = 0, currentSum = 0, maxElement = array[0];
	for (int i = 0; i < 8; i++) {
		if (maxElement < array[i]) {
			maxElement = array[i];
		}

		currentSum += array[i];
		if (currentSum < 0) {
			currentSum = 0;
		}

		if(currentSum > maxSum){
			maxSum = currentSum;
		}
	}

	if(maxElement < 0){
		maxSum = maxElement;
	}

	cout << "max sum:" << maxSum << endl; // prints !!!Hello World!!!
	return 0;
}
