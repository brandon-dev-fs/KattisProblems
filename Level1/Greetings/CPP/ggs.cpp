#include <iostream>
#include <string>

using namespace std;

int main(){
    string greeting, newgreeting;
    
    getline(cin, greeting);

    int greetlength = greeting.length();

    for(int i = 0; i < greetlength; i++){
        if(greeting[i] == 'e'){
            newgreeting += "ee";
        }
        else{
            newgreeting += greeting[i];
        }
    }

    cout << newgreeting;

    return 0;
}