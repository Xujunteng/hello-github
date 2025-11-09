#include"client.h"
#include<iostream>
#include<string>
using namespace std;

CLIENT::CLIENT(string a) :servername(a){
	cout << "CLIENT的构造函数" << endl;
	clientNum += 1;
}

void CLIENT::changeServerName(string c) {
        servername = c;
}
CLIENT::~CLIENT() {
	cout << "CLIENT的析构函数" << endl;
}
int CLIENT::clientNum = 0;
