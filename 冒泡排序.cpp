#include <iostream>

using namespace std;

/*
// 冒泡排序 -- 升序
void bubbleSortLM(int arr[], int len)
{
	for (int j = 0; j < len; j++)
	{
		for (int i = 1; i < len-j; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				int temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
			}
		}
	}

}

// 冒泡排序 -- 降序
void bubbleSortML(int arr[], int len)
{
	for (int j = 0; j < len; j++)
	{
		for (int i = 1; i < len - j; i++)
		{
			if (arr[i] > arr[i - 1])
			{
				int temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
			}
		}
	}
}
*/
// 冒泡排序优化----加入标记，判断是否排好序，如果排好序则退出 减少循环次数
// 冒泡排序 -- 升序
void bubbleSortLM(int arr[], int len)
{
	int flag = 1; // 表示没有排好序 
	for (int j = 0; j < len && flag; j++)
	{
		flag = 0; // 表示排好序
		for (int i = 1; i < len - j; i++)
		{
			// 如果这一次排序过程中没有发生交换，这说明已经排好序了，不需要后续循环了
			if (arr[i] < arr[i - 1])
			{
				int temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
				flag = 1;
			}
		}
	}

}

// 冒泡排序 -- 降序
void bubbleSortML(int arr[], int len)
{
	int flag = 1; // 表示没有排好序 
	for (int j = 0; j < len && flag; j++)
	{
		flag = 0;
		for (int i = 1; i < len - j; i++)
		{
			if (arr[i] > arr[i - 1])
			{
				int temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
				flag = 1;
			}
		}
	}
}

//int main()
//{
//	int arr[10] = { 1,3,2,7,4,8,9,0,6,5 };
//	int len = 10;
//
//	bubbleSortLM(arr, len);
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//
//	bubbleSortML(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	return 0;
//}