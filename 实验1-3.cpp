#include<iostream>
using namespace std;
int main() {
	for (int i = 1; i <10; i++) {
		for (int j = i; j < 10; j++) {
			int k = i * j;
			cout << i << "*" << j << "=" << k<<"\t";
		}
		cout << endl;
	}





	return 0;
}