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
	printf("������ ax^2 + bx + c = 0 �е�a.b.c:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(0 == a)
	{
		printf("�ⲻ�Ƕ�Ԫһ�η���!\n");
	}
	else 
	{		
		printf("b*b-4*a*c =%lf\n",b*b-4*a*c );
		if(0 == (b*b-4*a*c ))
		{
			p = b/(-2*a);
			printf("�÷�����������ȵ�ʵ��:x1 = %lf, x2 = %lf\n",p,p);
		}
		else if((q = b*b-4*a*c )> 0)
		{
			p = b/(-2*a);
			q = sqrt(q)/(2*a);
			printf("�÷������������ȵ�ʵ��:x1 = %lf, x2 = %lf\n",p+q,p-q);
		}
		else
		{	
			q = b*b-4*a*c;
			p = b/(-2*a);
			q = sqrt(-q)/(2*a);
			printf(" p = %lf , q = %lf \n",p,q);
			printf("�÷������������ȵ����:x1 = %lf+%lfi, x2 = %lf-%lfi\n",p,q,p,q);
		}
	}
}
