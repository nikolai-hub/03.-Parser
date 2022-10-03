#ifndef PRINT_UTILS_H
#define PRINT_UTILS_H

#include <vector>
#include <sstream>
#include <string>
#include <iostream>

template<typename T>

void printVector(const std::vector<T>& vec) {
	for (T& element : vec) {
		std::cout << element << " ";
	}
}


#endif // !PrintUtils.h
