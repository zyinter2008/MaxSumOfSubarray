#include <iostream>
using namespace std;

int calcMaxSumOfSubarray(int *array, int size);

int main() {

	int array[8] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int maxSum = calcMaxSumOfSubarray(array, 8);
	cout << "max sum:" << maxSum << endl;
	return 0;
}

int calcMaxSumOfSubarray(int *array, int size) {
	int maxSum = 0, currentSum = 0, maxElement = array[0];
	for (int i = 0; i < size; i++) {
		if (maxElement < array[i]) {
			maxElement = array[i];
		}

		currentSum += array[i];
		if (currentSum < 0) {
			currentSum = 0;
		}

		if (currentSum > maxSum) {
			maxSum = currentSum;
		}
	}

	if (maxElement < 0) {
		maxSum = maxElement;
	}
	return maxSum;
}
