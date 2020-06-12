/*Converting temperature from Fahrenheit degrees  to Centigrade degrees*/


# include<stdio.h>
int main()
{
    float F, C;
    printf("The value of temperature in Fahrenheit = ");
    scanf("%f", & F);
    /* Formula to convert temperature from Fahrenheit degrees  to Centigrade degrees*/
    C = (5*(F-32))/9;
    printf("The value of temperature in Centrigate = %f", C);
    return 0;
}