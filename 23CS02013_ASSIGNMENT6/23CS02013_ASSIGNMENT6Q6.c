#include <stdio.h>
void avg(int a[][7], int cities)
{

    for (int i = 0; i < cities; i++)
    {
        float avg = 0;
        for (int j = 0; j < 7; j++)
        {
            avg += a[i][j];
        }
        avg = avg / 7;
        printf("avg for city %d is %.2f\n", i, avg);
    }
}
int main()
{
    int num_cities;
    printf("\n Enter the number of cities:");
    scanf("%d",&num_cities);
int a[num_cities][7];
    for(int i = 0 ; i < num_cities ; i++)
    {
        printf("For city %d \n",i+1);
        for(int j = 0 ; j < 7 ; j++)
        {
            printf("Temp %d: \n",j+1);
            scanf("%d",&a[i][j]);
        }
    }
    avg(a, num_cities);
    return 0;
}