#include <stdio.h>

int main(){
    int n, t, a, b, c;

    a = 0;
    n = 0;
    t = 0;
    b = 0;

    while((c = getchar()) != EOF){
        if(c != '\n' && (c != '\t') && (c != ' ')){      
        ++a;
        }
    
        if(c == '\n'){
            ++n;
        }
        if(c == '\t'){
            ++t;
        }
        if(c == ' '){
            ++b;
        }
    }
    printf("characters = "); 
    printf("%.0d\n", a);
    printf("newline = ");
    printf("%d\n", n);
    printf("tab = ");
    printf("%d\n", t);
    printf("blank = ");
    printf("%d\n", b);
    return 0;
}