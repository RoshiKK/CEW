#include <stdio.h>
// By using For loop
int main(){
    int n;
    int i,num=1;
    int sum=0;
    printf("Enter The Value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",num);
        sum+=num;
        num+=2;
    }
    printf("\nSum of n Odd Natural Number is : %d\n",sum);
    // By Using While Loop
    i=1;
    num=1;
    sum=0;
    while(i<=n){
        printf("%d ",num);
        sum+=num;
        num+=2;
        i++;
    }
    printf("\nSum of n Odd Natural Number is : %d\n",sum);
    //By using Do While Loop
    i=1;
    num=1;
    sum=0;
    do{
        printf("%d ",num);
        sum+=num;
        num+=2;
        i++;
    } while(i<=n);
        printf("\nSum of n Odd Natural Number is : %d\n",sum);
        return 0;
}