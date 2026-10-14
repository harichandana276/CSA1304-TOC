
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n;

    printf("Enter a string: ");
    scanf("%s", s);

    n = strlen(s);

    if (n >= 2 && s[0] == '0' && s[n-1] == '1') {
        for (i = 1; i < n-1; i++) {
            if (s[i] != '0' && s[i] != '1')
                break;
        }

        if (i == n-1)
            printf("String is accepted");
        else
            printf("String is rejected");
    } else {
        printf("String is rejected");
    }

    return 0;
}
