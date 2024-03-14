#include <stdio.h>
void subset(int a, int b, int a1[], int b1[])
{
    int i, j, count = 0;


    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (a1[i] == b1[j])
            {
                count++;
            }
        }
    }
    if (count == b)
    {
        printf("\n array entered is a subset");
    }
}
void main()
{
    int a, b, c;
    printf("\n enter size of array1:");
    scanf("%d", &a);
    int arr[a];
    printf("\n enter elements:");
    for (c = 0; c < a; c++)
    {
        scanf("%d", &arr[c]);
    }

    printf("\n enter size of array2:");
    scanf("%d", &b);
    int ar[b];
    printf("\n enter elements of array 2:");
    for (c = 0; c < b; c++)
    {
        scanf("%d", &ar[c]);
    }
    if(b>a )
    {
        printf("Invalid choice");
    }
    subset(a, b, arr, ar);
}