# include<stdio.h>
# include<conio.h>
int main()
{
    float p, r, i;
    int t;
    printf("Enter the principle , p = ");
    scanf("%f", & p);
    printf("Enter the rate of interest , r = ");
    scanf("%f", & r);
    printf("Enter the time, t = ");
    scanf("%d", & t);
    i=(p*t*r)/100;
    printf("Interest is %f", i);
    return 0;
}