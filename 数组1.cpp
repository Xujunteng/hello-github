#include<iostream>
using namespace std;
void select_sort(int* p, int n) {
	int i, j, k, t;		
	for(i=0;i<n-1;i++){		
		k=i;		
		for(j=i+1;j<n;j++)			
			if(*(p+j)<*(p+k)) k=j;		
		t = *(p+k);        // 暂存未排序部分的最小值
		*(p+k) = *(p+i);   // 将第 i 个元素放到最小值原来的位置，保证数据不丢失
		*(p+i) = t;        // 把最小值放到第 i 个位置，实现交换
	}
}
int main() {
	int a[10], i;
	for (i = 0; i < 10; i++)
		cin >> a[i];
	cout << endl;
	select_sort(a, 10);
	for (i = 0; i < 10; i++) {
		cout << a[i] << " ";
		cout << endl;
	}
		return 0;
	
}