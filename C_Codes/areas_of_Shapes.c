#include<stdio.h>

int main(){
    int shape;
    printf( "1 - Square \n"
            "2 - Rectangle \n"
            "3 - Circle \n"
            "4 - Triangle \n"
            "Enter ( 1, 2, 3, 4) :  ");
    scanf("%d", &shape);
    if (shape == 1){
        float length;
        printf("Enter the Length of the Square : ");
        scanf("%f", &length);
        float square_area = length * length;
        printf("Area of Square is : %f",square_area);
    }
    else if (shape == 2){
        float length, width;
        printf("Enter the Length and Width of the Rectangle : ");
        scanf("%f   %f", &length , &width);
        float rectangle_area = length * width;
        printf("Area of Rectangle is : %f",rectangle_area);
    }
    else if(shape == 3){
        float radius;
        printf("Enter the radius of the Circle : ");
        scanf("%f", &radius);
        float circle_area = 3.14 * radius * radius;
        printf("Area of Circle is : %f", circle_area);
    }
    else if (shape == 4){
        float height , base;
        printf("Enter the height and base of the Triangle : ");
        scanf("%f   %f", &height, &base);
        float triangle_area = (height * base) / 2;
        printf("Area of Triangle is : %f", triangle_area);
    }
    return 0;
    
}