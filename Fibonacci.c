#include <stdio.h>

int main(void){
    int num= 0, nuevo, sum;
    
    
        for (nuevo= 1; nuevo <= 10000;){ 
            printf("%d\n", nuevo);
            sum= nuevo + num;
            num= nuevo;
            nuevo= sum;
            
        }
    
    
}