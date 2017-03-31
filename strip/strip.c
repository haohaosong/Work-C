#include<stdio.h>
#include<unistd.h>
#include"color.h"

#define M 100

int main()
{
	char ch = '#';
	char str[M] = {0};
	int i = 0;
	char symbol[4] = {'|','/','-','\\'};
	for(i = 0; i<M; ++i)
	{
		int c = i%5;
		switch(c)
		{
			case 0:
				printf(RED);
				break;
			case 1:
				printf(GREEN);
				break;
			case 2:
				printf(BLUE);
				break;
			case 3:
				printf(YELLOW);
				break;
			case 4:
				printf(BROWN);
				break;
		}

		str[i] = '#';
		printf("[%-100s][%%%d][%c]",str,i,symbol[i%4]);
		fflush(stdout);
		usleep(100000);
		printf("\n");
		system("clear");
	}
	printf("\033[0m");
	return 0;
}
