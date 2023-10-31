#include <stdio.h>

int fibonacci(int n){
    if(n<=1){
        return n;
    } else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
void printfibonacci(int n){
    for(int i=0;i<n;i++){
        printf("%d ",fibonacci(i));     
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    if(n<0){
        printf("Please Enter Positive Number \n");
    } else{
        printf("Fibonacci Series of %d Number is : \n", n);
        printfibonacci(n);
    }   
    return 0;
}