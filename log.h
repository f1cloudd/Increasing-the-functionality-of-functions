#pragma once

#ifndef _LOG_H_
#define _LOG_H_


#include <iostream>

using namespace std;

int input(int a, int b) {

	return a, b;
}



void inputLog(int a, int b) {

	int result = input(a, b);
	cout << "The entered numbers are: " << a << "," << b << endl;
}

void Log(const char* log) {

	cout << log << endl;
}


//
int Multiply(int a, int b) {

	return a * b;

}

void MultiplyAndLog(int a, int b) {

	int result = Multiply(a, b);
	cout << result << endl;

}

#endif 