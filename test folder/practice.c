#include <stdio.h>

int grade = 88; 

int main(){
    printf("What is your grade percent?\n"); 
    scanf("%d", &grade); 

    if (grade >= 90){ 
        printf("You have an A!\n"); 
    }else if (grade >= 80){
        printf("You have a B!\n"); 
    }else if (grade >= 70){
        printf("You have a C...OOF\n");
    }else if (grade >= 60){
        printf("You have a D...OOF\n");
    }else{
        printf("You have an F...OOF\n"); 
    }
    return 0; 
} 