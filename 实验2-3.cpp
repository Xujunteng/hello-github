#include<iostream>
#include<string>
using namespace std;
class Date {
public:
	int year;
	int month;
	int day;
	Date(int a, int b, int c) :year(a), month(b), day(c) {
		cout << "birthday的构造函数" << endl;
	}
	~Date() {
		cout << "birthday的析构函数" << endl;
	}
	void show() {
		cout << year << "_" << month << "_" << day << "_" << endl;
	}
};


	class People {
	public:
		int number;
		string sex;
		Date& birthday;
		unsigned long long id;
		People(int a, unsigned long long b, string c, Date& birth)
			: number(a), id(b), sex(c), birthday(birth) {
			cout << "people的构造函数" << endl;
		}
		People(People& p)
			: number(p.number), id(p.id), sex(p.sex), birthday(p.birthday) {
			cout << "people的拷贝构造函数" << endl;
		}
		~People() {
			cout << "people的析构函数" << endl;
		}
		void show() {
			birthday.show();
			cout << number << " " << sex << " " << id << endl;
		}
	};


    int main() {
					int a = 0;
					unsigned long long b = 0;
					int e = 0, f = 0, g = 0;
					string c = "unknown";
					cout << "请录入员工信息,按照编号，身份证号，性别，出生日期的顺序" << endl;
					cin >> a >> b >> c >> e >> f >> g;
					Date birthday(e, f, g);
					People p1(a, b, c, birthday); 
					p1.show();
					return 0;
    }
	





