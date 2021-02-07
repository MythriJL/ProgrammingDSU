#include<stdio.h>
int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}
int longest(int *array, int n, int a, int b){
    // edge case if the array is less than or equal to 0 return 0
    if (n <= 0){
        return 0;
    }
    int count = 0;
    // im sorting the function has we need to find the subsequence where the order doesnt matter 
    // if it was a subarray or substring the order would be important to maintain

    qsort(array, n, sizeof(int), comparator);
    
    // this loop checks for the element in the interval [a,b]
    for(int i = 0; i < n; i++){
        if (array[i] >= a && array[i] <= b){
            // if the element in the interval then we check if we can find the consecutive subsequence
            // pointer to previous value to check if the current value is prev + 1 so that it is consecutive
            int prev = array[i];
            // temp count variable to have the count value of the current iteration
            int tempCount = 1;

            for(int j = i+1; j<n && array[j] <= b; j++){
                if ( prev + 1 == array[j]){
                    // change the reference of prev as the current val will be the prev for the next element
                    prev = array[j];
                    tempCount ++;
                }
                // if the current element is not prev + 1 it means it is not consecutive
                // if the current element is not consecutive we need not check for the next elements as the array is sorted so break
                else{
                    break;
                }
            }
            // count will be the max of tempCount and count itself so i have used a ternary to check the max 
            count = (tempCount>count) ? tempCount : count;
        }
    }

    return count;
}
int main(){
    int n, a, b;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements\n");
    for (int i = 0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    int count = longest(array, n, a, b);
    printf("Count: %d\n",count);
    return 0;

}