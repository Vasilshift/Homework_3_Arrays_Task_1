#include <iostream>
#include <ctime>
#include <random>
#include <time.h>
using namespace std;

int main() {

	srand(time(NULL));

	const int n = 8;

	int array[n];
	int i;

	for (i = 0; i < n; i++) {

		array[i] = rand() % 10;
		cout << array[i] << " ";
	}
	
	int max = array[0];
	int min = array[1];

	for (i = 0; i < n; i++) {

		if (array[i] > max) {

			max = array[i];
		}

		if (array[i] < min) {

			min = array[i];
		}

	}

	
	cout << " " << endl;
	cout << "max= " << max << endl;
	cout << "min= " << min << endl;


	return 0;
}