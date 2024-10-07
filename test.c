#include <stdio.h> 
char siblings[8][20] = {"Judah", "Amanda", "Joshua", "William", "Jennifer", "Lady", "Margo", "Pepper"}; 
int i; 
int main (){
    while (i < 8){
        printf("%s Rager", siblings[i]); 
    }
    return 0; 
}