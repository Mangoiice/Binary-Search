#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int f(int arr[], int x, int len)
{
	int lp = 0;//��ָ��
	int rp = len - 1;//��ָ��
	int mid = (lp + rp) / 2;//�м�ָ��
	int flag = 0;//����Ƿ��ҵ�
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
		printf("�ҵ��ˣ��±�Ϊ%d", mid);
	}
	else
	{
		printf("��Ǹ��û���ҵ�");
	}
}	

int main()
{
	int arr[] = { 2,3,4,5,7,9,13,15,17,18,23,26,27 };
	int len = sizeof(arr) / sizeof(arr[0]);
	f(arr, 29, len);
	return 0;
}
