//factors of the given number
#include<stdio.h>
void main()
{
	int n,i,cnt=0;
	printf("enter any number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		cnt++;
	}
	printf("factors of n=%d",cnt);
}
