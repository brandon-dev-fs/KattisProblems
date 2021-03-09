#include <iostream>

using namespace std;

int main(){
    string greeting, newgreeting;
    
    getline(cin, greeting);

    for(int i = 0; i < greeting.length(); i++){
        if(greeting[i] == 'e'){
            newgreeting += "ee";
        }else{
            newgreeting += greeting[i];
        }
    }

    cout << newgreeting;
}