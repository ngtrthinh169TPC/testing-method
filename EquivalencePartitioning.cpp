#include <iostream>
#include "sum.cpp"
using namespace std;

// partitions: negatives, zero, positives
const int NEGATIVE_X = -142857;
const int ZERO_X = 0;
const int POSITIVE_X = 42;
const int NEGATIVE_Y = -14;
const int ZERO_Y = 0;
const int POSITIVE_Y = 10102022;

void negXAndNegY() {
	long long result = sum(NEGATIVE_X, NEGATIVE_Y);
	cout << "negativeX + negativeY = " << result << "\n";
	
	if (result == -142871) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void negXAndZeroY() {
	long long result = sum(NEGATIVE_X, ZERO_Y);
	cout << "negativeX + zeroY = " << result << "\n";
	
	if (result == -142857) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void negXAndPosY() {
	long long result = sum(NEGATIVE_X, POSITIVE_Y);
	cout << "negativeX + positiveY = " << result << "\n";
	
	if (result == 9959165) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void zeroXAndNegY() {
	long long result = sum(ZERO_X, NEGATIVE_Y);
	cout << "zeroX + negativeY = " << result << "\n";
	
	if (result == -14) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void zeroXAndZeroY() {
	long long result = sum(ZERO_X, ZERO_Y);
	cout << "zeroX + zeroY = " << result << "\n";
	
	if (result == 0) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void zeroXAndPositiveY() {
	long long result = sum(ZERO_X, POSITIVE_Y);
	cout << "zeroX + positiveY = " << result << "\n";
	
	if (result == 10102022) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void positiveXAndNegY() {
	long long result = sum(POSITIVE_X, NEGATIVE_Y);
	cout << "positiveX + negativeY = " << result << "\n";
	
	if (result == 28) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void positiveXAndZeroY() {
	long long result = sum(POSITIVE_X, ZERO_Y);
	cout << "positiveX + zeroY = " << result << "\n";
	
	if (result == 42) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

void positiveXAndPositiveY() {
	long long result = sum(POSITIVE_X, POSITIVE_Y);
	cout << "positiveX + positiveY = " << result << "\n";
	
	if (result == 10102064) {
		cout << "===== AS EXPECTED =====\n\n";
	} else {
		cout << "===== ERROR =====\n\n";
	}
}

int main() {
	cout << "NEGATIVE_X = -142857\n" << "ZERO_X = 0\n" << "POSITIVE_X = 42\n" << "NEGATIVE_Y = -14\n" << "ZERO_Y = 0\n" << "POSITIVE_Y = 10102022\n" << "\n\n";
	negXAndNegY();
	negXAndZeroY();
	negXAndPosY();
	zeroXAndNegY();
	zeroXAndZeroY();
	zeroXAndPositiveY();
	positiveXAndNegY();
	positiveXAndZeroY();
	positiveXAndPositiveY();
	return 0;
}
