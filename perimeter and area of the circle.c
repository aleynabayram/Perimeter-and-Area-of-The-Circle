/*The code calculates perimeter and area of the circle */

#include <stdio.h>
#define PI 3.14

	int main () {

	float radius;
	float perimeter;
	float area;

	printf("Please enter the radius of the circle:");
	scanf("%f" , &radius);

	perimeter = 2*PI*radius;
	area = PI*(radius*radius);


	printf("The perimeter of the circle is %.3f\n" ,perimeter);
	printf("The area of the circle is %.3f" ,area);
	
	return 0;
}
