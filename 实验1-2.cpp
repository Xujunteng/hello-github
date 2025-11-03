#include<iostream>
using namespace std;
struct clock {
	int N,Y,R,h,m,s;
};

int main() {
	struct clock p1 = { 0,0,0,0,0,0, };
	cout << "请分别输入年月日小时分秒的值" << endl;
	cin >> p1.N >> p1.Y >> p1.R >> p1.h >> p1.m >> p1.s;
	cout << "当前时间为" << p1.N << "年" << p1.Y << "月" << p1.R << "日" << p1.h << "时" << p1.m << "分" << p1.s<<"秒";




	return 0;
}