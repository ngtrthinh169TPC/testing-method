#include <iostream>
#include "sum.cpp"
using namespace std;

const int MAX_X = 2147483647;
const int MIN_X = -2147483647 - 1;
const int NORM_X = 42;
const int MAX_Y = 2147483647;
const int MIN_Y = -2147483647 - 1;
const int NORM_Y = 14;

void normAndMax() {
	long long result = sum(NORM_X, MAX_Y);
	cout << "normX + maxY = " << result << "\n";
	
	if (result == 2147483689) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void normAndMaxMinus() {
	long long result = sum(NORM_X, MAX_Y - 1);
	cout << "normX + maxY- = " << result << "\n";
	
	if (result == 2147483688) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void normAndNorm() {
	long long result = sum(NORM_X, NORM_Y);
	cout << "normX + normY = " << result << "\n";
	
	if (result == 56) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void normAndMinPlus() {
	long long result = sum(NORM_X, MIN_Y + 1);
	cout << "normX + minY+ = " << result << "\n";
	
	if (result == -2147483605) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void normAndMin() {
	long long result = sum(NORM_X, MIN_Y);
	cout << "normX + minY = " << result << "\n";
	
	if (result == -2147483606) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void maxAndNorm() {
	long long result = sum(MAX_X, NORM_Y);
	cout << "maxX + normY = " << result << "\n";
	
	if (result == 2147483661) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void maxMinusAndNorm() {
	long long result = sum(MAX_X - 1, NORM_Y);
	cout << "maxX- + normY = " << result << "\n";
	
	if (result == 2147483660) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void minPlusAndNorm() {
	long long result = sum(MIN_X + 1, NORM_Y);
	cout << "minX+ + normY = " << result << "\n";
	
	if (result == -2147483633) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void minAndNorm() {
	long long result = sum(MIN_X, NORM_Y);
	cout << "minX + normY = " << result << "\n";
	
	if (result == -2147483634) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

int main() {
	cout << "MAX_X = 2147483647\n" << "MIN_X = -2147483647 - 1\n" << "NORM_X = 42\n" << "MAX_Y = 2147483647\n" << "MIN_Y = -2147483647 - 1\n" << "NORM_Y = 14\n" << "\n\n";
	normAndMax();
	normAndMaxMinus();
	normAndNorm();
	normAndMinPlus();
	normAndMin();
	maxAndNorm();
	maxMinusAndNorm();
	minPlusAndNorm();
	minAndNorm();
	return 0;
}
