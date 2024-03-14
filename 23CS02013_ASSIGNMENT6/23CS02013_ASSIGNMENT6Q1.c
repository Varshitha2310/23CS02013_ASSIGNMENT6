#include <stdio.h>
#include <math.h>
int IsPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
   if (n % i == 0)
   {
  return 0;  
       }
    }
return 1;
}

int display_prime(int start,int end)
{
    printf("the numbers for range are %d and %d",start,end);
    for(int num=start; num<=end;num++)
    {
        if(IsPrime( num))
        printf("%d", num);
    }
    printf("\n");
}

int main(){
    int range1,range2;
    printf("enter the starting value of the range");
    scanf("%d",range1);

    printf("enter the ending value of the range");
    scanf("%d",range2);

    display_prime(range1,range2);
    return 0;
}