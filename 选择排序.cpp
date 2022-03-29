#include <iostream>

using namespace std;

// 选择排序 -- 升序
void selectSortLM(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		// 保存最小值位置
		int minIndex = i;
		for (int  j = i+1; j < len; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			// 交换两个元素
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}

// 选择排序 -- 降序
void selectSortML(int arr[], int len)
{
	int maxIndex = 0;
	for (int i = 0; i < len; i++)
	{
		maxIndex = i;
		for (int j = i+1; j < len; j++)
		{
			if (arr[j] > arr[maxIndex])
			{
				maxIndex = j;
			}
		}
		if (maxIndex != i)
		{
			// 交换两个元素
			int temp = arr[i];
			arr[i] = arr[maxIndex];
			arr[maxIndex] = temp;
		}

	}
}


//int main()
//{
//	int arr[10] = { 1,3,2,7,4,8,9,0,6,5 };
//	int len = 10;
//
//	selectSortLM(arr, len);
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//
//	selectSortML(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	return 0;
//}
