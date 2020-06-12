/* Calculation of Gross Salary */


# include<stdio.h>
int main()
{
    int bs, da, hra, gs ;
    printf("Basic salary of Ramesh is ");
    scanf("%d", & bs);
    /* Calculation of dearness allowence */
    da = bs*40/100;
    /* Calculation of house rent allowence */
    hra = bs*20/100;
    /* Calculation of gross salary */
    gs = bs + da + hra;
    printf("The gross salary of Ramesh is %d ", gs);
    return 0;
}
