#include <iostream>
#include <cmath>
using namespace std;
int n,i,j,a[2000];
bool t;              //定义变量
int main()
{
	cin >>n;
	for (i=1;i<=n;i++)
		cin >>a[i];       //输入
	for (i=1;i<=n;i++)
	{
		t=1;
		for (j=n;j>i;j--)
			if (a[j]<a[j-1])        //从后面往前两两判断
			{
				swap(a[j],a[j-1]);     //交换
				t=0;
			}
		if (t)
			break;    //如一次循环中没有交换，说明已经排好序了，退出循环  
	}
	for (i=1;i<=n;i++)
		cout <<a[i] <<" ";        //输出
	return 0;        //华丽结束
}