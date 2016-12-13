/*
* author:haohaosong
* date:2016/5/26
*/
#pragme once  
#include<stdio.h>
size_t Can(size_t money)
{	 
	size_t empty = money;
	size_t count = money;  
	
	while(empty>1)
	{	
		count += empty/2;
		empty = empty/2+empty%2;
	}
	return count;
}
