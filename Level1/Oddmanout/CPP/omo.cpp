#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int g, k = 0;
        cin >> g;
        string tickets , newnum = "";
        int ticketnumbers[1000] = {};
        cin.ignore();
        getline(cin, tickets);
        for(int j = 0; j < tickets.length(); j++){
            if(tickets[j] != ' '){
                newnum += tickets[j];
            }
            else{
                ticketnumbers[k] = stoi(newnum);
                k++;
                newnum = "";
            }
        }
        ticketnumbers[k] = stoi(newnum);
        k++;
        newnum = "";
        int answer = -1;
        for(int x = 0; x < g; x++){
            answer = ticketnumbers[x];
            for (int y = 0; y < g; y++){
                if(answer == ticketnumbers[y] && x != y){
                    answer = -1;
                    break;
                }
            }
            if(answer > -1)
                break;
        }
        cout << "Case #"<<i+1<<": " << answer << endl;
    }

    return 0;
}