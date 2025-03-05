#include <stdio.h>
int main(void){
    int n = 37;
    int isprime = 1;
    for(int i =0; i*i <= n; i++){
        if(n%i == 0){
            isprime=0;
        }
        if(isprime == 1){
            printf("The number is prime\n");
        }
        else{
            printf("The number is not prime\n");
        }
    }

     return 0;
}