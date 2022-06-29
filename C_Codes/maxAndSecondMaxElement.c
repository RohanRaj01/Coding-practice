#include<stdio.h>
#include <limits.h>
// c program to find the maximum and second maximum number

int main(){
    int arr[] = {23,34,12,56,19,73,47,7,89,78};
    int first_max = INT_MIN, second_max = INT_MIN;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        if (arr[i] >= first_max){
            second_max = first_max;
            first_max = arr[i];
        }else{
            if (arr[i] > second_max){
                second_max = arr[i];
            }
        }
    }
    printf("The maximum element in the array is :-  %d\n", first_max);
    printf("The second maximum element in the array is :-  %d", second_max);

}