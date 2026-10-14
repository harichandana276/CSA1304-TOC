
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, flag = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    for (i = 0; s[i + 3] != '\0'; i++) {
        if (s[i] == '1' && s[i + 1] == '0' &&
            s[i + 2] == '1') {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("String is accepted");
    else
        printf("String is rejected");

    return 0;
}
