#include<stdio.h>
#include<math.h>
int main()
{
   float x1, y1, x2, y2, x, y, dist;

   printf("Enter coordinates of first point:\n ");
   scanf("%f %f",&x1, &y1);

   printf("Enter coordinates of second point:\n ");
   scanf("%f %f",&x2, &y2);

   x = (x2-x1);
   y = (y2-y1);

   dist = sqrt(x*x + y*y);

   printf("Distance = %f", dist);

   return 0;
}
