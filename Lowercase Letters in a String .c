#include <stdio.h>
#include <ctype.h>

int main() {
    char s[10001];
    int count = 0;
    scanf("%s", s);
    for(int i = 0; s[i] != '\0'; i++) {
        if(islower(s[i])) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
