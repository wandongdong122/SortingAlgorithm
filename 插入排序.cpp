#include <iostream>

using namespace std;



// 插入排序 从小到大
void insertSortLM(int arr[],int len)
{
	for (int i = 1; i < len; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			int temp = arr[i];
			int j = i - 1;
			for (; j >= 0 && temp <= arr[j]; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

// 插入排序 从大到小
void insertSortML(int arr[],int len)
{
	for (int i = 1; i < len; i++)
	{
		if (arr[i - 1] < arr[i])
		{
			int temp = arr[i];
			int j = i - 1;
			for (; j >= 0 && temp > arr[j]; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}



//int main()
//{
//	int arr[10] = { 1,3,2,7,4,8,9,0,6,5 };
//	int len = 10;
//
//	insertSortLM(arr,len);
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	
//	insertSortML(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	return 0;
//}
