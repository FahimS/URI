#include<stdio.h>
int main()
{
    int X;
    float Y,Consumption;
    scanf("%d %f",&X,&Y);
    {
        Consumption = X/Y;
    }
    printf("%.3lf km/l\n",Consumption);


    return 0;
}
