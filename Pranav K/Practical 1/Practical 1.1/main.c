#include <stdio.h>
#include <stdlib.h>

int main()
{
  float num1, num2;

    printf("Enter principle amount: \n");
    scanf("%f" , &P);

    printf ("Enter Rate of interest: \n");
    scanf("%f" , &R);

    printf("Enter period of time (in year) : \n");
    scanf ("%f" , &T);

    SI= (P*R*T)/ 100;

    printf("simple interest = %.2f  \n ", SI);
    return 0;
}
