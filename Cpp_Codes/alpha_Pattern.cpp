#include<iostream>
using namespace std;


int main(){
	int N, i = 1;
    cout << "Enter a number : " ;
    cin >> N;
    cout << endl;
    while (i <= N){
        int j = 1;
        while (j <= i){
            char ch = 'A' + i - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}