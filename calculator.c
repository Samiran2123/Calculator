#include <stdio.h>

void calculateCircle();
void calculateRectangle();
void calculateTriangle();

int main (){

    int choice;

    printf("welcome to the Mensuration calculator...\n");
    printf("shapes from 1 to 3 are \n");
    printf(" 1 for circle \n");
    printf("2 for rectangle \n");
    printf("3 for triangle\n");
    printf("Enter the choice  from (1-3) :");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
        printf("circle");
            calculateCircle();
            break;
        case 2:
            calculateRectangle();
            break;
        case 3:
            calculateTriangle();
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;

}



void calculateCircle() {
    double radius, area, circumference;

   float  M_PI = 3.14 ;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = M_PI * radius * radius; // Area = πr²
    circumference = 2 * M_PI * radius; // Circumference = 2πr

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);
}


void calculateRectangle() {
    double length, width, area, perimeter;



    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    area = length * width; // Area = length * width
    perimeter = 2 * (length + width); // Perimeter = 2(length + width)

    printf("Area of the rectangle: %.2lf\n", area);
    printf("Perimeter of the rectangle: %.2lf\n", perimeter);
}


void calculateTriangle() {
    double base, height, side1, side2, side3, area, perimeter;
    

    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);
    printf("Enter the lengths of the other two sides of the triangle: \n");
    printf("Side 1: ");
    scanf("%lf", &side1);
    printf("Side 2: ");
    scanf("%lf", &side2);
    
    area = 0.5 * base * height; // Area = 0.5 * base * height
    perimeter = base + side1 + side2; // Perimeter = base + side1 + side2

    printf("Area of the triangle: %.2lf\n", area);
    printf("Perimeter of the triangle: %.2lf\n", perimeter);
    
}