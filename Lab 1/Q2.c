#include <stdio.h>
int main(){
    float Area,Perimeter,Height,Width;
    printf("Enter The Height of Rectangle : ");
    scanf("%f",&Height);
    printf("Enter the Width of Rectangle : ");
    scanf("%f",&Width);
    Area=Height*Width;
    Perimeter=2*(Height+Width);
    printf("Area of Rectange is : %.2f\n",Area);
    printf("Perimeter of Rectangle is : %.2f\n",Perimeter);
    return 0;
}