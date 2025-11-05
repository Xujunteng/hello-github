#include<iostream>
#include<string>
using namespace std;

struct teacher {
    string tName;
    struct student {
        string sName;
        int score;
    } sArray[5];
}tArray[3];;

void allocateSpace(struct teacher tArray[], int len) {

string nameseed = "ABCDE";
for (int i = 0; i < len; i++){
	tArray[i].tName = "Teacher"; 
	tArray[i].tName += nameseed[i];
	

		for (int j = 0; j < 5; j++){
			tArray[i].sArray[j].sName = "Student";
			tArray[i].sArray[j].sName += nameseed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;

		}
	
	}
}

void printInfo(struct teacher tArray[], int len) {

	for (int i = 0; i < len; i++) {

		cout << "老师姓名: " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {

			cout << "\t学生姓名：" << tArray[i].sArray[j].sName <<
				"考试分数：" << tArray[i].sArray[j].score << endl;

		}
	}

}
int main() {

    srand((unsigned int)time(NULL));
	
	
	int	len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printInfo(tArray, len);

	return 0;
}
