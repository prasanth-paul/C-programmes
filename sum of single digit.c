//sum of single digit
#include<stdio.h>
main(){
	// to print 1 2 3 4 5
	int n,i,sum=0,r;
	scanf("%d",&n);   // 123,   12,   1  , 0
	i=1;
	for(i=1;i<=2;i++)
     {
		sum=0;
		while(n>0) 
		{
			r=n%10;
			sum=sum+r;  // 0+3
			n=n/10;
		}
		n=sum;
	}
	printf("\n%d",sum);		
}
