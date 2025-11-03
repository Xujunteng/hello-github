#include<iostream>
using namespace std;
double CFtr(double F) {
	double C = (F - 32) * 5 / 9;
	return C;
}
int main() {
	double F = 0;
	cin >> F;
	cout << CFtr(F);
	return 0;
}