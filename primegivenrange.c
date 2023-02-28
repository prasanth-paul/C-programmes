//to print count of prime numbers in the given range
#include<stdio.h>
int main()
{
    int n1,n2,i,num,x,y,count=0;
    printf("Enter the value of n1 and n2 \n");
    scanf("%d %d",&n1,&n2);
    if(n2<2)
    printf("Prime numbers are \n");
    x=n1;
    if(n1%1==0)
    n1++;
    for(i=n1;i<n2;i++)
     {
        y=0;
        for(num=2;num<=i/2;num++)
        {
            if(i%num==0)
            {
               y=1;
               break;
            }
        }
        if(y==0)
        {
          printf("\n%d",i);
          count++;
        }
    }
    printf("\n\nPrime Numbers between %d & %d = %d",x,n2,count);
    return 0;
}
