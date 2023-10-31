#include <stdio.h>
int main(){
    char sentence[1000];
    printf("Enter a Sentence : ");
    gets(sentence);
    int i=0;
    while(sentence[i]!= '\0'){
        if(sentence[i]>='a' && sentence[i]<='z'){
            sentence[i]=sentence[i]-32;
        } else if(sentence[i]>='A' && sentence[i]<='Z'){
            sentence[i]=sentence[i]+32;
        }
        i++;
    }
    printf("Modified Sentence is: %s\n",sentence);
    return 0;
}