/*
* author:haohaosong
* date:2016/6/7
*/

#pragma once

#include<stdio.h>
unsigned count_one_bits(unsigned value)
{	
	unsigned count = 0;
	while( value != 0 )
	{
		if(value%2 == 1)
			count++;
		value /= 2;
	}
	return count; 
}