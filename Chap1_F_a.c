/* Calculation of Gross Salary */
# include<stdio.h>
# include<conio.h>
int main()
{
    int BS, DA, HRA, GS ;
    printf("Basic salary of Ramesh is ");
    scanf("%d", & BS);
    /* Calculation of dearness allowence DA */
    DA = BS*40/100;
    /* Calculation of house rent allowence, HRA */
    HRA = BS*20/100;
    /* Calculation of gross calary, GS */
    GS = BS+DA+HRA;
    printf("The gross salary of Ramesh is %d ", GS);
    getch();
    return 0;
}