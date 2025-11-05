#include<iostream>
using namespace std;

// 用结构体组织每个整数的信息
struct NumCount {
    int num;        // 整数值
    int count;      // 出现次数
    int firstIndex; // 首次出现位置
};

int main() {
    int n;
    cout << "请输入所要输入的整数个数" << endl;
    cin >> n;

    // 用动态数组存储输入的整数
    int* arr = new int[n];
    cout << "请输入一组整数" << endl;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // 用动态数组存储结构体
    NumCount* stat = new NumCount[n];
    int size = 0;

    // 统计每个不同整数的出现次数和首次出现位置
    for (int i = 0; i < n; ++i) {
        int j;
        for (j = 0; j < size; ++j)
            if (stat[j].num == arr[i]) {
                stat[j].count++;
                break;
            }
        if (j == size) {
            stat[size].num = arr[i];
            stat[size].count = 1;
            stat[size].firstIndex = i;
            size++;
        }
    }

    // 按出现次数从多到少排序，次数相同则按输入顺序
    for (int i = 0; i < size - 1; ++i)
        for (int j = i + 1; j < size; ++j)
            if (stat[i].count < stat[j].count ||
                (stat[i].count == stat[j].count && stat[i].firstIndex > stat[j].firstIndex)) {
                NumCount temp = stat[i];
                stat[i] = stat[j];
                stat[j] = temp;
            }

    // 输出结果
    for (int i = 0; i < size; ++i)
        cout << stat[i].num << ": " << stat[i].count << endl;

    // 释放动态数组内存
    delete[] arr;
    delete[] stat;

    return 0;
}