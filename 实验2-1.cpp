#include <iostream>
using namespace std;
class CPU {
public:
	enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
	int frequency;
	double voltage;
	void run() {}
	void stop() {}
CPU():frequency(0),voltage(0){
		cout << "构造函数" << endl;
	}
	~CPU(){
		cout << "析构函数" << endl;
	}
};

int main() {

	CPU cpu;
	
	return 0;
}