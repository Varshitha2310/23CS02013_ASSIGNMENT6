#include<stdio.h>

 int reverse(int a[],int start,int end)
    {
        int temp;
        if(start>=end)
        
            return 0 ;
        
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            reverse(a,start+1,end-1);
    }

int main()
{
    int a[10],n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the numbers of the original  array:");
    for(int i=0;i<n;i++)
    {
scanf("%d",&a[i]); 
}
printf("\n");

reverse(a,0,n-1);
printf("reversed array : ");
    
for(int i=0;i<n;i++)
{
    printf("%d \t", a[i]);

}
printf("\n");

return 0;

   }


    