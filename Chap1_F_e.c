/*Calculation of area and perimeter of a rectangle and area and circumference of a circle*/
# include<stdio.h>
# include<conio.h>
int main()
{
    float length, breadth, area, perimeter,radius, A, C;
    /*Calculation of the area and perimeter of the rectangle*/
    printf("Calculation of the area and perimeter of the rectangle\nThe length of the lenghth and breadth of the rectangle respectiviely is ");
    scanf("%f%f", & length, & breadth);
    area = length*breadth;
    perimeter = 2*(length + breadth);
    printf("The area of the rectangle is %f\nThe perimeter of the rectangle is %f\n", area, perimeter);
    /*Calculation of the area and the perimeter of the circle*/
    printf("--------------\nCalculation of the area and circumference of the circle\nThe radius of the circle is ");
    scanf("%f", & radius);
    A = 3.14*(radius*radius);
    C = 2*3.14*radius;
    printf("The area of the circle is %f\nThe circumference of the circle is %f\n", A, C);
    getch();
    return 0;
}