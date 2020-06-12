/*Calculation of area and perimeter of a rectangle and area and circumference of a circle*/
# include<stdio.h>
int main()
{
    float l, b, a_rec, p_rec, r, a_cir, c_cir;
    /*Calculation of the area and perimeter of the rectangle*/
    printf("Calculation of the area and perimeter of the rectangle\nThe lenghth and breadth of the rectangle are respectively ");
    scanf("%f%f", & l, & b);
    a_rec = l*b;
    p_rec = 2*(l + b);
    printf("The area of the rectangle is %f\nThe perimeter of the rectangle is %f\n", a_rec, p_rec);
    /*Calculation of the area and the perimeter of the circle*/
    printf("--------------\nCalculation of the area and circumference of the circle\nThe radius of the circle is ");
    scanf("%f", & r);
    a_cir = 3.14*r*r;
    c_cir = 2*3.14*r;
    printf("The area of the circle is %f\nThe circumference of the circle is %f\n", a_cir, c_cir);
    return 0;
}