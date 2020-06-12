/* Calculation od distance in different units */


# include<stdio.h>
int main ()
{
    float km, m, ft, inch, cm;
    printf("Distance in km is ");
    scanf("%f", & km);
    /*Calculation of distance in meter*/
    m = km*1e3;
    /* Calcu;ation of distance in foot*/
    ft = km*328084e-2;
    /*Calculation of distance in inch*/
    inch = km*393701e-1;
    /*Calculation of distance in centimeter*/
    cm = km*1e5;
    printf("Distance in meter = %f\nDistance in foot = %f\nDistance in inch = %f\nDistance in centimeter = %f\n", m, ft, inch, cm);
    return 0;
}