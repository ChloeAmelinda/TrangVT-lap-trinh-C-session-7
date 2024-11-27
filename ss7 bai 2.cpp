#include<stdio.h>
int main()
{
	int n,a[5];
	printf("nhap n :");
	scanf("%d",&n);
	for(int i=0;i<n ; i++)
	{
		printf("Nhap a[%d] : ",i);
		scanf("%d",&a[i]);
	}
printf("mang vua nhap : ");
for(int i=0;i<n;i++)
{
	printf(" %d ",a[i]);
}
	return 0;
}
