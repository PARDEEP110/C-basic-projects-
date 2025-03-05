#include <stdio.h>
int findmax(int arr[], int n){
    int max = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(void){
   
    
    int arr[] = {5, 10, 15, 2054654654, 25, 333};
printf("The largest element in the array is %d\n", findmax(arr, 6));
     return 0;
}