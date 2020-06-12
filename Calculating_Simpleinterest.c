/* Calculation of simple interest */

# include<stdio.h>
int main()
{
    float p, r, i;
    int t;
    printf("Enter the principle  = ");
    scanf("%f", & p);
    printf("Enter the rate of interest = ");
    scanf("%f", & r);
    printf("Enter the time = ");
    scanf("%d", & t);
    /* Formula for calculating simple interest*/
    i=(p*t*r)/100;
    printf("Interest is %f", i);
    return 0;
}