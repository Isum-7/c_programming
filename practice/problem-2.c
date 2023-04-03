#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int add1 = a+b;
    int minus1= a-b;
    int multi1= a*b;
    float dvd1= a*1.00/b;
    printf("%d \n", add1);
    printf("%d \n", minus1);
    printf("%d \n", multi1);
    printf("%0.02f \n\n", dvd1);
    int c,d;
    scanf("%d %d",&c,&d);
    int add2 = c+d;
    int minus2 = c-d;
    int multi2 = c*d;
    float dvd2= c*1.00/d;
    printf("%d \n", add2);
    printf("%d \n", minus2);
    printf("%d \n", multi2);
    printf("%0.02f \n", dvd2);
    return 0;
}