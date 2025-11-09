#include<iostream>
using namespace std;

class CPU {
public:
	enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
	int frequency;
	double voltage;
	void show() {
		cout << P2 <<" "<< frequency << "MHz" << voltage << "V" << endl;
	}
	CPU() :frequency(1000), voltage(1.6) {
		cout << "cpu的构造函数" << endl;
	}
	~CPU() {
		cout << "cpu的析构函数" << endl;
	}
}cpu;
class RAM {
public:
	enum RAM_rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
	int space;
	int frequency;
	void show() {
		cout << P3 << " " << space << "G" << frequency << "MHz" << endl;
	}
	RAM() :space(32), frequency(700) {
		cout << "ram的构造函数" << endl;
	}
	~RAM() {
		cout << "ram的析构函数" << endl;
	}
}ram;
class CDROM {
public:
	enum CDROM_rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
	int speed;
	void show() {
		cout << P5 << " " << speed << "KB/s" << endl; 
	}
	CDROM() :speed(1800) {
		cout << "cdrom的构造函数" << endl;
	}
	~CDROM() {
		cout << "cdrom的析构函数" << endl;
	}
}cdrom;
class Computer {
public:
	Computer(CPU cpu1) {
		cpu = cpu1;
	}
	void run() {
		cpu.show();
		ram.show();
		cdrom.show();
	}
	void stop() {
	}
private:
	CPU cpu;

}computer;

int main() {
	
	computer.run();

	return 0;

}