#include <stdio.h>

int main(){
    float Height;
    printf("Enter your Height : ");
    scanf("%f",&Height);
    if(Height<150.0){
        printf("Dwarf");
    } else if(Height>=150.0 && Height<165.0){
        printf("Average");
    } else {
        printf("Tall");
    }
    return 0;

}