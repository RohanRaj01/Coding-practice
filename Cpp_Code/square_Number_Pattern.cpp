#include<iostream>
using namespace std;


int main(){
	int num, i = 0;

    cout << "Enter the number :-  ";
    cin >> num;
    while (i < num){
        int j = 0;
        while (j < num){
            cout << num;
            j++;
        }
        cout << endl;
        i++;
    }
}