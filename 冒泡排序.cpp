#include <iostream>

using namespace std;

/*
// ð������ -- ����
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

// ð������ -- ����
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
// ð�������Ż�----�����ǣ��ж��Ƿ��ź�������ź������˳� ����ѭ������
// ð������ -- ����
void bubbleSortLM(int arr[], int len)
{
	int flag = 1; // ��ʾû���ź��� 
	for (int j = 0; j < len && flag; j++)
	{
		flag = 0; // ��ʾ�ź���
		for (int i = 1; i < len - j; i++)
		{
			// �����һ�����������û�з�����������˵���Ѿ��ź����ˣ�����Ҫ����ѭ����
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

// ð������ -- ����
void bubbleSortML(int arr[], int len)
{
	int flag = 1; // ��ʾû���ź��� 
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