#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
    int c;
    int state = OUT;
    while((c = getchar()) != EOF ){
        if((c == '\n') || (c == '\t') || (c == ' ')){
            if(state == IN){
                putchar('\n');
                state = OUT;
            }
        }
        else{
            state = IN;
            putchar(c);
        }
    }
    return 0;
}