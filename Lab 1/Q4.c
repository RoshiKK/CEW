#include <stdio.h>

    void DecimalToBinary(int decimalNumber){
        if(decimalNumber > 0){
            DecimalToBinary(decimalNumber /2);
            printf("%d",decimalNumber %2);
        }
    }
    int main(){
        int decimalNumber;
        printf("Enter Decial Number : ");
        scanf("%d",&decimalNumber);
        if (decimalNumber<0){
            printf("Enter Positive Number");
        } else if(decimalNumber==0){
            printf("Binary Equivalent : 0 ");
        } else{
            printf("Binary Equivalent : ");
            DecimalToBinary(decimalNumber);
            printf("\n");
        }
        return 0;
        }

