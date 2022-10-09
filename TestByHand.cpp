#include <iostream>
#include "sum.cpp"
using namespace std;

int main() {
	int firstNum, secondNum;
	cin >> firstNum >> secondNum;
	long long total = sum(firstNum, secondNum);
	cout << total;
	return 0;
}
