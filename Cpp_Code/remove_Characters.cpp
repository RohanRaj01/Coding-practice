#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
    
    int j, n = strlen(input); 
    for (int i=j=0; i<n; i++){
       if (input[i] != c){
          input[j] = input[i];
           j++;
       }
    }
    input[j] = '\0';
    
}

int main() {
    int size = 1e6;
    char str[size];
    cout << "Enter the string : " << endl; 
    cin.getline(str, size);
    char c;
    cout << endl; 
    cout << "Enter the chracter to remove from the string :  ";
    cin >> c;
    cout << endl;
    cout << "String after removing " << c << " character from the string :" << endl; 
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}