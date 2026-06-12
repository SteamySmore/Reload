#include "Classes.h"
#include <iostream>
#include <string>
#include <cmath>

// WARNING: MINDLESSLY MESSING WITH THIS CODE CAN BREAK RELOAD! PLEASE ONLY MESS WITH IT IF YOU KNOW WHAT YOUR DOING!

void Reload::print(std::string message) {
	std::cout << message << std::endl;
}

void Reload::math(double num1, char op, double num2) {
	double res = 0;

	switch (op) {
	case '+':
		res = num1 + num2;
		break;
	case '-':
		res = num1 - num2;
		break;
	case '*':
		res = num1 * num2;
		break;
	case '/':
		res = num1 / num2;
		break;
	}

	std::cout << res << std::endl;
}