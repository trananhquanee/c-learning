#include <stdio.h>
#include <string.h>

int main(void){
    int c;
    c = getchar();
    while(c != EOF){
        putchar(c);
        c = getchar();
    }
    return 0;
}