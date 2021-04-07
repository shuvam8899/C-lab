#include <stdio.h>
int main()
{
    float side, base, length, breadth, area, radius, perimeter, circumference;
    {
    
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        perimeter = 2 * 3.142 * radius;
        printf("Area of a circle = %f\n", area);
        printf("Circumference of a circle = %f\n", circumference);
        printf("------------------\n");
        printf("Enter the length\n");
        scanf("%f", &length);
        printf("Enter the breadth\n");
        scanf("%f", &breadth);
        area = length * breadth;
        perimeter = 2 * (length * breadth);
        printf("Area of a Reactangle = %f\n", area);
        printf("Perimeter of a rectangle = %f\n", perimeter);
        printf("------------------\n");
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
        printf("Area of a Square=%f\n", area);
        printf("Perimeter of a square = %f\n", perimeter);
        printf("------------------\n");
    }
}
