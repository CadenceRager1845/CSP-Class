#include <stdio.h>


int hour; 


int main (){
    size_t now; 
    struct tm*now_tm; 
    
    now = time(NULL);
    now_tm = localtime(&now);
    hour = now_tm->tm_hour; 
    printf("%d", hour);  

    if (hour <= 12){
        printf("Good morning! :)\n");
    }else if (hour <= 18){
        printf("Good afternoon! :)\n");
    }else if (hour <= 20){
        printf("Good evening :)!\n");
    }else{
        printf("Good NIGHT!\n GO TO BED!");
    }

    return 0; 
}