/* Calculation of sum of two integers */

# include<stdio.h>
int main()
{
    int n1, n2, sum;
    printf("Enter the 1st number\n");
    scanf("%d", & n1);
    printf("Enter the 2nd number\n");
    scanf("%d", & n2);
    sum = n1 + n2;
    printf("The sum of %d and %d is %d\n", n1, n2, sum);
    return 0;
}