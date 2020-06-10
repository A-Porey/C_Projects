/*Converting temperature Farenhite to centigrade*/
# include<stdio.h>
# include<conio.h>
int main()
{
    float F, C;
    printf("The value of temperature in Farenhite, F = ");
    scanf("%f", & F);
    /* Formula to convert temperature from farenhite to centigrade */
    C = (5*(F-32))/9;
    printf("The value of temperature in centrigate, C = %f", C);
    getch();
    return 0;
}