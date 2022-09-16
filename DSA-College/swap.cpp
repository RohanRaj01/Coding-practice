#include <iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b; 
    b = temp;
    cout << "Inside the funtion : " << "a : " << a << " , " << "b : " << b << endl;
}

int main(){
    int a, b;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;

    cout << "Before swap : " << "a : " << a << "  ,  " << "b : " << b << endl;
    swap(a,b);
    cout << "After swap : " << "a : " << a << "  ,  " << "b : " << b << endl;
}

