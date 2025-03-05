#include<stdio.h>
void ls_rec(int a[] ,int n,int k)
{
	int f=0;
	if(k==a[n])
	{
		printf("the element is %d found at the loacation %d",k,n+1);
		f=1;
	}else {
		if(n==0 && f==0)
		{
			printf("the element is not found");
			
			}else{
			
			ls_rec(a,n-1,k);
		}
	}
}
int main()
{
	int i,n,k;
	printf("enter the size of the aray");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be search");
	scanf("%d ",&k);
	ls_rec(a,n,k);
}