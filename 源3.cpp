#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double n = 0;
	int i = 0;
	double j = 1.0/ (2 * i + 1);
	do{ 
		if (i % 2 == 0)
			n += j;
		else
			n -= j;
		i++;
			j=1.0/(2*i+1);
	} while (j > 0.0000001);
	double N = 4 * n;
	cout << fixed << setprecision(6) << N << endl;
	return 0;
}