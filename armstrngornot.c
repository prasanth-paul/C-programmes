#include<stdio.h>
void main()
{
	int orinum,n,rem,result=0;
	printf("enter a 3 digit value=");
	scanf("%d",&n);
	orinum=n;
	while(orinum!=0)
	{
		rem=orinum%10;
		result+=rem*rem*rem;
		orinum=orinum/10;
	}
	if(result==n)
	printf("%d is ARMSTRONG NUMBER",n);
	else
	printf("%d is NOT an ARMSTRONG NUMBER",n);
}
