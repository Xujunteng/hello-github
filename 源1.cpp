#include<iostream>
using namespace std;
int main()
{
	char A= 'A';
	char N='N',Y='Y';
	cout << "Is it raining now?" << endl;
	cout << "Please enter N or Y." << endl;
	cin >> A;

	if (A == N)
		cout << "It is mot raining now." << endl;
	else if (A == Y)
		cout << "It is raning now." << endl;
	else
		cout << "Is it raning now?" << endl;







	system("pause");

	return 0;

}
