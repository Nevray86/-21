#include<iostream>
using namespace std;

void sum(double* px, double* py) {
	cout << "������� �������������� ���� ����� " << (*px + *py) / 2;
}


int main() {
	
	double x, y;
	cout << "������� 2 �����:\n";
	cin >> x >> y;
	sum(&x, &y);
	cout << endl;






	return 0;
}