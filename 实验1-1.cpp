#include<iostream>
#include<string>
using namespace std;
int main() {
	string a="a";
	cout << "请输入图形类型" << endl;
	cin >> a;
	if (a == "圆形") {
		double r = 0,S=0;
		const double PI = 3.14;
		cout << "请输入半径" << endl;
		cin >> r;
		S =PI* r * r;
		cout << "圆形的面积为" << S << endl;
	}
	else if (a == "长方形") {
		double a = 0, b = 0, S = 0;
		cout << "请输入长和宽" << endl;
		cin >> a >> b;
		S = a * b;
		cout << "长方形的面积为" << S << endl;
	}
	else if (a == "正方形") {
		double a = 0,S=0;
		cout << "请输入边长" << endl;
		cin >> a;
		S = a * a;
		cout << "正方形的面积为" << S << endl;
	}
	return 0;
}