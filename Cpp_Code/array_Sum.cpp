#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cout << "Entre the number of elements of the array :-  ";
    cin >> n;
    int arr[n];
    
    cout << endl;
    cout << "Enter the array each element divided by space : " << endl;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << endl;
    cout << "The SUM of the elements of the array :-  ";
    cout << sum;
    
}