#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 0,b = 1, count = 2, n;
    cout << "Enter the nth term : - ";
    cin >> n;
    while (count <= n){
        int temp = b;
        b += a;
        a = temp;
        count++;
    }
    cout << b;
}