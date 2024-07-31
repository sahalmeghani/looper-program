#include <stdio.h>

int main() {
    char ch = 'a'; 
    
    do {
        printf("%c\n", ch); 
        ch +=5;           
    } while (ch <= 'z');  

    return 0;
}
    