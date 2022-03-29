#include <iostream>

using namespace std;

void quickSortLM(int arr[], int l,int r)
{
	if (l < r)
	{
		 
		int i = l, j = r;
		// 拿出第一个元素，保存到x中，第一个位置成为一个坑
		int x = arr[l];
		while (i < j)
		{
			// 从右向左找小于x的数
			while (i < j && arr[j] >=x)
			{
				// 左移，直到遇到小于等于x的数
				j--;
			}
			if (i < j)
			{
				// 将右侧找到的小于x的元素放入左侧坑中，右侧出现一个坑
				// 左侧元素索引后移
				arr[i++] = arr[j];

			}

			// 从左向右找大于等于x的数
			while (i < j && arr[i] < x)
			{
				// 右移，直到遇到大于x的数
				i++;
			}
			if (i < j)
			{
				// 将左侧找到的元素放入右侧坑中，左侧出现一个坑
				// 右侧元素索引向前移动
				arr[j--] = arr[i];
			}
		}
		// 此时 i= j ，将保存在x中的数填入坑中
		arr[i] = x;
		quickSortLM(arr, l, i - 1); // 第i个元素在属于中间值，不再参与排序
		quickSortLM(arr, i + 1, r);

	}

}

void quickSortML(int arr[], int l,int r)
{		
	if (l < r)
	{
		int i = l, j = r;
		int x = arr[l];

		while (i < j)
		{
			// 从右向左找大于x的数
			while (j > i && arr[j] < x)
			{
				j--;
			}
			if (i < j)
			{
				// 如果找到，则将arr[j],放入到arr[i]中，并且i++
				arr[i++] = arr[j];
			}
			// 从左向右找小于x的数
			while (j > i && arr[i] > x)
			{
				i++;
			}
			if (i < j)
			{
				// 如果找到，则将arr[i]，放入到arr[j]中，并且j--
				arr[j--] = arr[i];
			}
		}
		// 此时 i= j ，将保存在x中的数填入坑中
		arr[i] = x;
		quickSortML(arr, l, i - 1);
		quickSortML(arr, i + 1, r);
	}
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
//	quickSortLM(arr,0, len-1);
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//
//	quickSortML(arr, 0,len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	return 0;
//}