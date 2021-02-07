#include<stdio.h>
int increasing(int *array, int n){
// edge case if the array is less than or equal to 0 return -1
    if(n <= 0){
        return -1;
    }
    //prev variable references to the element before the current element
    int prev = array[0];

    for(int i = 1; i<n; i++){
        // if the prev element is less than or equal to the present element then we continue changing
        // the reference of the prev to the current element
       if(prev <= array[i]){
           prev = array[i];
       }
       // if the prev is greater than present element we return 0 which means it is not increasing
       else{
           return 0;
       }
    }
    // if the elements of the array successfuly completed the journey in the for loop then we return 1 denoting it is strictly increasing
    return 1;
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
    int bol = increasing(array, n);
    printf("Output: %d\n",bol);
    return 0;
}