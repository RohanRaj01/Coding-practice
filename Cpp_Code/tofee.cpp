#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int n = 4, x = 8, count = 112;
    // cin >> x; 
    // cin >> n;
    // cin >> count;
    while (x != 0){
        if(n!=0){
            count++;
            x--;
            n--;
            
        }
        else
            break;
    }
    cout << "the roll no at which tofee finish " << count << endl;
    return 0;
}