//print armstrong numbers
#include<stdio.h>
int main()
{
	int n,rem,sum,temp;
	int a,b;
	printf("Enter a & b range values=");
	scanf("%d%d",&a,&b);
	printf("Armstrong numbers in the given range are:-\n");
	for(n=a;n<=b;n++)
	{
		temp=n;
		sum=0;
		while(temp!=0)
	{
		rem=temp%10;
		temp=temp/10;
		sum=sum+(rem*rem*rem);
	}
	if(sum==n)
	     printf("%d \n",n);
	}
	printf("\n");
    return 0;
}
