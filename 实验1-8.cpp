#include<iostream>
using namespace std;
int A(int a, int b) {
	int i = 0;
	if (a % 10 == b % 10)
		i++;
	if (a / 10 % 10 == b / 10 % 10)
		i++;
	if (a / 100 % 10 == b / 100 % 10)
		i++;
	if (a / 1000 == b / 1000)
		i++;
	return i;

}
int B(int a, int b) {
	int i = 0;
	int c = b % 10, d = b / 10 % 10, e = b / 100 % 10, f = b / 1000;
	int l = a % 10, m = a / 10 % 10, n = a / 100 % 10, o = a / 1000;
	if (l == d || l == e || l == f)
		i++;
	if (m == c || m == e || m == f)
		i++;
	if (n == c || n == d || n == f)
		i++;
	if (o == d || o == e || o == f)
		i++;
	return i;
}
int main() {
	int const a = 1145;
	int b = 0, d = 0;
	while (A(a, b) != 4) {
		cin >> b;
		cout << A(a, b) << "A" << B(a, b) << "B" << endl;
		d++;
	}
	cout << d;
	return 0;
}