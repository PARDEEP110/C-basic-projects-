#include <stdio.h>
int reverse(int n );

int reverse(int n  ){
    int rev = 0;
    int rem = 0;
     while (n != 0)
    {
        rem = n % 10;

        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("%d", rev);
return rev;
}
int main(void)
{
    int num = 232323;
    
   reverse(num);
    return 0;
}