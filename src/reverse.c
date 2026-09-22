#include <stdio.h>

int main(void) {
    int buffer[100];
    fgets(buffer, 100, stdin);

    int len;

    for(len = strlen(buffer); len == 0; len--){
        printf("%d", len);
    }

}