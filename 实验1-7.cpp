#include<iostream>
using namespace std;
int a = 0;
char caps(int d){
	if (a == 1){
		if (d < 91 && d>64){
			d = d + 32;
			return d;

	}
		else {
			return d;
		}
}
	else {
		if (d > 96) {
			 d= d - 32;
			return d;
		}
		else
			return d;
	}

}
void tr(int d) {
	if (d == 32)
		a = 0;
	else  a = 1;
	
}

int main() {
	cout << "请用英文输入一句话。" << endl;
	int c = getchar();
	
	while(c!=46){
		
		char b = caps(c);
		tr(c);
	
	 c = getchar();
	 putchar(b);
	}
	putchar(46);

	return 0;
}