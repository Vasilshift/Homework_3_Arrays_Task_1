#include <iostream>
#include <ctime>
using namespace std;

int main(int args, char* argv[]) {

	srand(time(NULL));

	const int n = 5;

	int array[n], i;
	


	for (i = 0; i < n; i++) {
	
		int x = rand() % n;

		cout << x << " ";

		if (array[x] > array[i + 1]) {
			cout << x << " ";

		}


	}
	










	
	/*
	for (i = 0; i < 4; i++) {
		
		cin >> array[i];

	}

	for (i = 0; i < 4; i++) {

		cout << array[i] << " ";

	}
	*/










	return 0;
}