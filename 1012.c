#include<stdio.h>
int main()
{
    float A,B,C;
    double pi,tri,cr,trap,sq,rect;
    pi=3.14159;
    scanf("%f %f %f",&A,&B,&C);
    tri = .5*A*C;
    cr = pi*(C*C);
    trap = (A+B)/2*C;
    sq = B*B;
    rect = A*B;

    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cr);
    printf("TRAPEZIO: %.3lf\n",trap);
    printf("QUADRADO: %.3lf\n",sq);
    printf("RETANGULO: %.3lf\n",rect);


    return 0;
}
