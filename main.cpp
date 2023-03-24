#include <iostream>
#include "counter.h"

int main(int argc, char** argv) {
	const int size = 9;
	int arr[size]{ 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	int pnt = 32;

	std::cout << counter(arr, size, pnt) << std::endl;

	return 0;
}