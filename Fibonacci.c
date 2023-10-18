#include <stdio.h>

int main(void){
    int num= 0, nuevo, sum;
    
    printf("%d\n", num);
        for (nuevo= 1; nuevo <= 11000;){ 
            printf("%d\n", nuevo);
            sum= nuevo + num;
            num= nuevo;
            nuevo= sum;
            
        }
    
    
}