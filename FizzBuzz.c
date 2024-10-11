#include <stdio.h>
#include <string.h> 
#include <time.h> 
int i, usr; 
char one[50], two[50], three[50]; 

void delay(int sec){
    int milli = 1000*sec;
    clock_t start = clock(); 

    while(clock()< start+milli); 
}


int main(){
    printf("Give me a number: \n"); 
    scanf("%d", &usr); 
    printf("Give me a word: \n"); 
    scanf("%s", one);
    printf("Give me a another word: \n"); 
    scanf("%s", two);\
    strcat(three, one); 
    strcat(three, two); 
    for(i=1;i<=usr;i++){
    if(i%3==0 && i%5==0){
        printf("%s\n", three); 
    }else if (i%3==0){
        printf("%s\n", one); 
    }else if (i%5==0){
        printf("%s\n", two);
    }else{
        printf("%d\n", i);
            }
            delay(10000); 
        }
    return 0; 
} 
