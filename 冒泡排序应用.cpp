#include<iostream>
using namespace std;
void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void bubblesort(int* arr, int len) {
    for(int i=0;i<len-1;i++)
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }

}
int main() {
    int a = 0, b = 0;
    cout << "请输入两组整数的个数" << endl;
    cin >> a >> b;
    int* arrc = new int[a + b];
    int* arr1 = new int[a];
    for (int i = 0; i < a; i++)
        cin >> arr1[i];
    int* arr2 = new int[b];
    for (int i = 0; i < b; i++)
        cin >> arr2[i];

    for (int i = 0; i < a; i++) 
        arrc[i] = arr1[i];
    for (int i = 0; i < b; i++)
        arrc[a + i] = arr2[i];
    bubblesort(arrc, a + b);
   
        for (int i = 0; i < a + b; i++) {
            // 修正：避免越界访问 arrc[i + 1]，并修正赋值为比较
            if (i < a + b - 1 && arrc[i] == arrc[i + 1])
                continue;
            else
                cout << arrc[i];
        }
    
    delete[] arrc;
    delete[] arr1;
    delete[] arr2;
    

    return 0;

}

