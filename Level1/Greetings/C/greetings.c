#include <stdio.h>
#include <string.h>

int main() {
    
    char c[1000];
    while(scanf("%s", c) > 0){
        int x = strlen(c);
        x = ((x - 2) * 2) + 2;
        char nc[2000];

        for(int i = 0; i < x; i++){
            
            if(i == 0){
                nc[i] = 'h';
            }
            else if(i == (x - 1)){
                nc[i]='y';
            }
            else{
                nc[i] = 'e';
            }
        }

        nc[x] = '\0';

        printf("%s", nc);
    }

    return 0;
}