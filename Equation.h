/*
* author:haohaosong
* date:2016/6/14
*/ 

#include<stdio.h>//ax^2+bx+c
#include<math.h>
void equation()
{ 
	double a = 0;
	double b = 0;
	double c = 0;
	double q = 0;
	double p = 0;
	printf("请输入 ax^2 + bx + c = 0 中的a.b.c:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(0 == a)
	{
		printf("这不是二元一次方程!\n");
	}
	else 
	{		
		printf("b*b-4*a*c =%lf\n",b*b-4*a*c );
		if(0 == (b*b-4*a*c ))
		{
			p = b/(-2*a);
			printf("该方程有两个相等的实根:x1 = %lf, x2 = %lf\n",p,p);
		}
		else if((q = b*b-4*a*c )> 0)
		{
			p = b/(-2*a);
			q = sqrt(q)/(2*a);
			printf("该方程有两个不等的实根:x1 = %lf, x2 = %lf\n",p+q,p-q);
		}
		else
		{	
			q = b*b-4*a*c;
			p = b/(-2*a);
			q = sqrt(-q)/(2*a);
			printf(" p = %lf , q = %lf \n",p,q);
			printf("该方程有两个不等的虚根:x1 = %lf+%lfi, x2 = %lf-%lfi\n",p,q,p,q);
		}
	}
}
