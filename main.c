#include <stdio.h>
int main(void){
    int num , sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    // for(int i=0; i <= num; i++){
    // sum += i ;
    // }
    sum = (num*num + num)/2;
    printf("Sum of first %d natural numbers is %d\n", num, sum);
     return 0;
}