//#include<stdio.h>
//#include<time.h>
//int main()
//{
//	int n=100000000;
//	int i = 0;
//	int begin = clock();//��ȡ�������е���λ�õ�ʱ�䣬��λ�Ǻ���
//	for (i = 0; i < n; ++i)
//	{
//
//	}
//	int end = clock();
//		printf("%d\n", end - begin);
//	return 0;
//} 
////strchar:�����ַ����е�һ��ֵ
////Ĭ��ʱ�临�Ӷȿ�������
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 9,6,4,2,3,5,7,0,1};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (j = 1; j < n; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i]< arr[i + 1])
//			{
//				int t = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = t;
//			}
//		}
//	}
//	for (int b = 0; b < n; b++)
//	{
//		if (arr[b] - 1 != arr[b + 1])
//		{
//			printf("%d\n", arr[b] - 1);
//			break;
//		}
//	}
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 0 };
//	
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int tep = 0;
//	int sum = 0;
//	for (i = 0; i < n + 1; i++)
//	{
//		sum += i;
//	}
//	for (i = 0; i < n; i++)
//	{
//		tep = tep + arr[i];
//	}
//	printf("%d\n", sum - tep);
//	return 0;
//}
//˼·��������Ҫ����˳��
#include<stdio.h>
int missingNumber(int* nums, int numsSize)
{
	int x = 0;
	for (int i = 0; i < numsSize+1; i++)
	{
		x ^= i;
	}
	for (int j = 0; j < numsSize; j++)
	{
		x ^= nums[j];
	}
	return x;
}
int main()
{
	int arr[] = { 9, 6, 8, 4, 5, 2, 3, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	missingNumber(arr, n);
	printf("%d\n", n);
	return 0;
}