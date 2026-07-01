#include <stdio.h>

int main() {
    int c;
    int last_c = EOF;

    while ((c = getchar()) != EOF) {
        int current_is_blank = (c == ' ' || c == '\t' || c == '\n');
        int last_is_blank = (last_c == ' ' || last_c == '\t' || last_c == '\n');

        if (!(current_is_blank && last_is_blank)) {
            
            if (current_is_blank) {
                putchar(' ');
            } else {
                putchar(c);
            }
            
        }

        last_c = c; 
    }
    return 0;
}