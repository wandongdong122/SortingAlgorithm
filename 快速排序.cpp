#include <iostream>

using namespace std;

void quickSortLM(int arr[], int l,int r)
{
	if (l < r)
	{
		 
		int i = l, j = r;
		// �ó���һ��Ԫ�أ����浽x�У���һ��λ�ó�Ϊһ����
		int x = arr[l];
		while (i < j)
		{
			// ����������С��x����
			while (i < j && arr[j] >=x)
			{
				// ���ƣ�ֱ������С�ڵ���x����
				j--;
			}
			if (i < j)
			{
				// ���Ҳ��ҵ���С��x��Ԫ�ط��������У��Ҳ����һ����
				// ���Ԫ����������
				arr[i++] = arr[j];

			}

			// ���������Ҵ��ڵ���x����
			while (i < j && arr[i] < x)
			{
				// ���ƣ�ֱ����������x����
				i++;
			}
			if (i < j)
			{
				// ������ҵ���Ԫ�ط����Ҳ���У�������һ����
				// �Ҳ�Ԫ��������ǰ�ƶ�
				arr[j--] = arr[i];
			}
		}
		// ��ʱ i= j ����������x�е����������
		arr[i] = x;
		quickSortLM(arr, l, i - 1); // ��i��Ԫ���������м�ֵ�����ٲ�������
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
			// ���������Ҵ���x����
			while (j > i && arr[j] < x)
			{
				j--;
			}
			if (i < j)
			{
				// ����ҵ�����arr[j],���뵽arr[i]�У�����i++
				arr[i++] = arr[j];
			}
			// ����������С��x����
			while (j > i && arr[i] > x)
			{
				i++;
			}
			if (i < j)
			{
				// ����ҵ�����arr[i]�����뵽arr[j]�У�����j--
				arr[j--] = arr[i];
			}
		}
		// ��ʱ i= j ����������x�е����������
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