#include<stdio.h>
int main()
{
	int arr[5]={12,4,7,2,1};
	
	
	printf("mang ban dau la : ");
	for(int i=0;i<=5;i++)
	{
		printf(" %d ",arr[i]);
		if(arr[i]% 2== 0)
		{
			arr[i] +=3;
			
		}
	    else 
		{
			arr[i] += 2;
		}
	}
	printf("\n mang moi la : ");
	for(int i=0; i<5;i++)
	{
		printf(" %d ",arr[i]);
	}



	return 0;
}
