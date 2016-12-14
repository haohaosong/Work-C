/*
* author:haohaosong
* date:2016/6/28
*/ 

#pragme once
#include<stdio.h>

#define N 10
void print(int a[][N])
{	
	for(size_t i=0; i<10 ;i++)
	{	
		for(size_t j=0; j<=i ;j++)
		{
			printf("%3d ",a[i][j]);.
		}
		printf("\n");
	}
}

void Triangle()
{
	int a[N][N] = {0};
	for(size_t i=0; i<N ;i++)
	{	
		a[i][0] = 1;
		for(size_t j=1; j<i ;j++)
		{
			a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
		a[i][i] = 1;
	}
	print(a);
}

void Test()
{	 
	Triangle();
}
