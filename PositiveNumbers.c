// this function gives the number of positive numbers divisible by 2 or 3

#include<stdio.h>
int count23(int *array, int n){
    int count = 0;
    for (int i = 0; i < n; i ++){
        //this checks if the element is  not divisible by both 2 and 3
        if( array[i]%2 == 0 && array[i]%3 == 0 ){ 
            continue;
        }
        if(array[i]%2 == 0 || array[i]%3 == 0){
            count ++;
        }
    }
    // if the array is null or size is 0 then for loop will not execute has i !< n so count remains 0
    return count; 
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements\n");
    for (int i = 0; i<n; i++){
        scanf("%d",&array[i]);
    }
    int count = count23(array,n);
    printf("Count: %d\n",count);
    return 0;
}