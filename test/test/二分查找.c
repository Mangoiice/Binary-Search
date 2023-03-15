#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int f(int arr[], int x, int len)
{
	int lp = 0;//左指针
	int rp = len - 1;//右指针
	int mid = (lp + rp) / 2;//中间指针
	int flag = 0;//标记是否找到
	while (lp <= rp)
	{
		if (arr[mid] == x)
		{
			flag = 1;
			break;
		}
		else if (arr[mid] < x )
		{
			lp = mid + 1;
			mid = (lp + rp) / 2;
		}
		else if (arr[mid] > x)
		{
			rp = mid - 1;
			mid = (lp + rp) / 2;
		}
	}
	if (1 == flag)
	{
		printf("找到了，下标为%d", mid);
	}
	else
	{
		printf("抱歉，没有找到");
	}
}	

int main()
{
	int arr[] = { 2,3,4,5,7,9,13,15,17,18,23,26,27 };
	int len = sizeof(arr) / sizeof(arr[0]);
	f(arr, 29, len);
	return 0;
}
