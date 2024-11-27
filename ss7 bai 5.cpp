#include<stdio.h>
int main()
{
	int arr[5]={15,6,8,20,6};
	int max=arr[0];
	int min=arr[0];
	printf("mang gom : ");
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
		
		if(arr[i] > max)
		{
			max=arr[i];
		}
		if(arr[i] < min)
		{
			min =arr[i];
		}
	}
	printf(" \n so lon nhat la: %d ",max);
	printf(" \n so nho nhat la: %d ",min);
	return 0;
}
