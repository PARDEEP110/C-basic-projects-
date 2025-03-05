#include <stdio.h>
int factorial(int n);
int factorial(int n){ // this is for itrative
    int val=1;
    if (n==0 || n== 1)
    {
        printf("wrong");
    }
for (int i = n; i > 1; i--)
{
         val *= i ;
    
}
    return val;


}
int fac(int n);
int fac(int n){ // this is for recursive 
    if (n==0 || n==1)
    {
        return 1;
    }
    else{
        return n *fac(n-1);
    }
    
}
int main(void){
    int n = 5;
   printf(" here iss the factorial itrative %d \n ",fac(n));
    printf(" here iss the factorial recursive %d \n ",factorial(n));
     return 0;
}