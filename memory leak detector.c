#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch = 1;
	int *ptr;
	while(ch<50)
	{
		printf("memory leak detector\n");
		ptr=(int*)malloc(40000*sizeof(int));
		
		printf("press 1 to continue");
		scanf("%d", &ch);
		free(ptr);
	}
}
