#include <stdio.h>
 
void main()
{
    int number;
    float side, base, length, breadth, area, radius, perimeter, circumference;
 
    printf("-------------------------\n");
    printf("Press 1 for Circle\n");
    printf("Press 2 for Rectangle\n");
    printf("Press 3 for Square\n");
    printf("-------------------------\n");
    printf("Enter the option\n");
    scanf("%d", &number);
    switch(number)
    {
    case 1:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        perimeter = 2 * 3.142 * radius;
        printf("Area of a circle = %f\n", area);
        printf("Circumference of a circle = %f\n", circumference);
        break;
    case 2:
        printf("Enter the length\n");
        scanf("%f", &length);
        printf("Enter the breadth\n");
        scanf("%f", &breadth);
        area = length * breadth;
        perimeter = 2 * (length * breadth);
        printf("Area of a Reactangle = %f\n", area);
        printf("Perimeter of a rectangle = %f\n", perimeter);
        break;
    
    case 3:
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
        printf("Area of a Square=%f\n", area);
        printf("Perimeter of a square = %f\n", perimeter);
        break;
    default:
        printf("Error in option\n");
        break;
    }
