#include <stdio.h>

int main(void){
    int num1, pareja=0;
    for (num1= 0; num1 < 10; num1++){
        
        if (num1 % 2 !=0){
            pareja++;
        }
    printf("%d %d\n", num1, pareja);
    }
    

}