#include <stdio.h>
int main(void){
    int n;
    printf("Enter the value \n");
    scanf("%d", &n);
    for (int i =0 ; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j >= n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
           
        }
        printf("\n");
    }
    
     return 0;
}