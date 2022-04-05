#include<iostream>
using namespace std;

void sum(double* px, double* py) {
	cout << "Среднее арифметическое этих чисел " << (*px + *py) / 2;
}


int main() {
	
	double x, y;
	cout << "Введите 2 числа:\n";
	cin >> x >> y;
	sum(&x, &y);
	cout << endl;






	return 0;
}