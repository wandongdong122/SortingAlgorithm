#include <iostream>

using namespace std;

// 希尔排序（缩小增量排序） -- 升序
void shellSortLM(int arr[],int len)
{
	int i, j;
	int gap = len;
	int temp = -1;

	do
	{
		// 业界平均最优情况
		gap = gap / 3 + 1;
		for (i = gap; i < len; i += gap)
		{
			if (arr[i] < arr[i - gap])
			{
				temp = arr[i];
				// 分组插入排序
				for (j = i - gap; j >= 0 && (arr[j] > temp); j -= gap)
				{
					arr[j + gap] = arr[j];
					//k = j;
				}
				// 将元素插入到有序序列的合适位置
				arr[j + gap] = temp;
			}
		}

	} while (gap > 1);
}

// 希尔排序（缩小增量排序） --- 降序
void shellSortML(int arr[], int len)
{
	int i, j;
	int gap = len;
	int temp = -1;

	do
	{
		// 业界平均最优情况
		gap = gap / 3 + 1;
		for (i = gap; i < len; i += gap)
		{
			if (arr[i] > arr[i - gap])
			{
				temp = arr[i];
				// 分组插入排序
				for (j = i - gap; j >= 0 && (arr[j] < temp); j -= gap)
				{
					arr[j + gap] = arr[j];
					//k = j;
				}
				// 将元素插入到有序序列的合适位置
				arr[j+gap] = temp;
			}
		}

	} while (gap > 1);
}

//int main()
//{
//	int arr[10] = { 1,3,2,7,4,8,9,0,6,5 };
//	int len = 10;
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	shellSortLM(arr, len);
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//
//	shellSortML(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	return 0;
//}