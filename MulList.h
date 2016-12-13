/*
* author:haohaosong
* date:2016/6/7
*/ 
#pragma once 

#include<stdio.h>
void Print_MulList()
{
	for(size_t i = 1 ; i<=9; i++)
	{
		for(size_t j = 1; j<=i; j++)
			printf("%2d*%2d=%2d ",i,j,i*j);
		printf("\n");
	}	
}
