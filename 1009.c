#include<stdio.h>
int main()
{
    char JOGO[10];
    // char JOGO;
    float salary;
    double sell, Total;
    gets(JOGO);
    scanf("%f %lf",&salary, &sell);
    //while(scanf("%s %lf %lf",&JOGO,&salary,&sell)!=EOF)
    {
        Total = salary+((sell*15)/100);
    }
    printf("TOTAL = R$ %.2lf\n",Total);

    return 0;
}
