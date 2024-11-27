#include<stdio.h>
int main()
{
	int size;
	int a[6]={ 1,2,3,4,5,6};
	size=sizeof(a)/sizeof(int);
	printf("do dai cua mang la : %d\n",size);
	for(int i=0 ;i<7; i++)
	{
		printf(" %d ",a[i]);
		
	}
	
	return 0;
}
