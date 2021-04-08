#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    int len = 0;
    
    while((cin >> input)) {
        len = input.length();
        unsigned long long fac = 1;
        for(int i = 1; i <= len; i++)
            fac *= (unsigned long)i;
        cout << fac << endl;
    }

    return 0;
}