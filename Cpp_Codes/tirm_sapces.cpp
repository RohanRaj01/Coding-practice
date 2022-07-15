#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    int i = 0, j = 0;
    while (input[i])
    {
        if (input[i] != ' '){
        	input[j] = input[i];
            j++;
        }
        i++;
    }
    input[j] = '\0';
    
}

int main() {
    char input[1000000];
    cout << "Enter the string : " << endl;
    cin.getline(input, 1000000);
    cout << "The  string without spaces :- " << endl;
    trimSpaces(input);
    cout << input << endl;
}


