#pragma once

//���ֲ��ҵĵݹ���ʽ 
int BinaryResearch(int* arr, int left, int right, int& key)
{
	if (right < left)
		return -1;

	//��ƽ��ֵ����ͬλ���ϲ�ͬλ��һ����������һ�� 
	int mid = (left&right) + ((left^right) >> 1);
	if (arr[mid] > key)
	{
		return BinaryResearch(arr, left, mid - 1, key);
	}
	else if (arr[mid] < key)
	{
		return BinaryResearch(arr, mid + 1, right, key);
	}
	else
	{
		return mid;
	}
	//û���ҵ�������-1 
	return -1;
}

//���ֲ��ҵķǵݹ���ʽ 
int BinaryResearchNonR(int *arr,int left, int right, int key)
{ 
	while (left <= right)
	{
		int mid = left&right + ((left ^ right) >> 1);
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	//û���ҵ�������-1 
	return -1;
}

void TestBinartResearch()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key = 9;
	int ret = BinaryResearch(arr, 0, 9, key);
	cout << ret << endl;
} 
