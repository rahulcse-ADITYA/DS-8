#include<stdio.h>
int n,0t,r,sum=0;
int main()

{
	int n,t,r,sum=0;
	printf("enter value of n:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(t==sum)
	{
		printf("the number is amstrong");
	}
		else
		{
			printf("not amstrong");
		}
return 0;
} 
