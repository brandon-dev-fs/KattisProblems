#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(){
    char input[100];
    int len = 0;
    
    while(scanf("%s", input) > 0) {
        len = strlen(input);
        unsigned long fac = 1;
        for(int i = 1; i <= len; i++)
            fac *= (unsigned long)i;
        printf("%lu\n", fac);
    }

    return 0;
}