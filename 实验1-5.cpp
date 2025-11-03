#include<iostream>
using namespace std;
int MAX1(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
int MAX1(int a, int b, int c) {
	if (a >= b) {
		if (a >= c)
			return a;
		else
			return c;
	}
	else {
		if (b >= c)
			return b;
		else
			return c;
	}
}
double MAX1(double a, double b) {
	if (a >= b)
		return a;
	else
		return b;
}


int main() {





	return 0;
}