
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, flag = 1;

    printf("Enter a string: ");
    scanf("%s", s);

    n = strlen(s);

    if (n % 2 != 0)
        flag = 0;
    else {
        for (i = 0; i < n / 2; i++) {
            if (s[i] != '0' || s[n / 2 + i] != '1') {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("String is accepted");
    else
        printf("String is rejected");

    return 0;
}
