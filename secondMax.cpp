#include <iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[] = {12, 24, 43, 64, 65, 9, 87, 34, 1, 34, 76};
    int size = sizeof(arr)/sizeof(arr[0]);

    int first_max = INT_MIN, second_max = INT_MIN;
    
    for(int i = 0; i < size; i++){
        if (arr[i] > first_max){
            second_max = first_max;
            first_max = arr[i];
        }else{
            if (arr[i] > second_max && arr[i] != first_max){
                second_max = arr[i];
            }
        }
    }
    
    cout << "Second maximum : " << second_max;
    return 0;
}


