#include<stdio.h>
int main()
{
	int a[5];
	printf("nhap phan tu \n");
	for(int i=0;i<5; i++)
	{
		printf("Nhap a[%d] : ",i);
		scanf("%d",&a[i]);
	}
printf("mang vua nhap a[5]: ");
for(int i=0;i<5;i++)
{
	printf(" %d ",a[i]);
}
	return 0;
}
