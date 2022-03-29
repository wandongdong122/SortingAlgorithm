#include <iostream>

using namespace std;

// �������� ------ ����


void mergeArray(int a[], int first, int mid, int last, int temp[])
{
	int leftStart = first;
	int leftend = mid;
	int rightStart = mid + 1;
	int rightEnd = last;
	int length = 0;
	int i = leftStart, j = rightStart;

	while (i <= leftend && j <= rightEnd)
	{
		// ����С�����˳����뵽temp��
		if (a[i] <= a[j])
		{
			temp[length++] = a[i++];
		}
		else
		{
			temp[length++] = a[j++];
		}
	}
	// ��������ʣ�࣬�����temp��
	while (i <= leftend)
	{
		temp[length++] = a[i++];
	}
	// ����ұ���ʣ�࣬�����temp��
	while (j <= rightEnd)
	{
		temp[length++] = a[j++];
	}
	// ��temp���ź�������п�����a��
	for (int i = 0; i < length; i++)
	{
		a[leftStart + i] = temp[i];
	}
}

void mergeSort(int a[],int first,int last,int temp[])
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		
		mergeSort(a, first, mid, temp);
		mergeSort(a, mid + 1, last, temp);
		mergeArray(a, first, mid, last, temp);
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
//	int temp[10];
//
//	mergeSort(arr, 0, len-1,temp);
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//
//	mergeSort(arr, 0, len-1,temp);
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//
//	return 0;
//}