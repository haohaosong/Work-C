#pragma once

//二分查找的递归形式 
int BinaryResearch(int* arr, int left, int right, int& key)
{
	if (right < left)
		return -1;

	//求平均值，相同位加上不同位的一半就是整体的一半 
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
	//没有找到，返回-1 
	return -1;
}

//二分查找的非递归形式 
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
	//没有找到，返回-1 
	return -1;
}

void TestBinartResearch()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key = 9;
	int ret = BinaryResearch(arr, 0, 9, key);
	cout << ret << endl;
} 
