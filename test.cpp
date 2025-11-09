#include"client.h"
#include<iostream>
#include<string>
using namespace std;
int main() {
	CLIENT c1("服务器1");
	string c = "服务器";
	cin >> c;
	c1.changeServerName(c);
	CLIENT c2("服务器2");
	cout << c2.clientNum << endl;
	return 0;
}