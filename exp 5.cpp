
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0, j, n, flag = 1;

    printf("Enter a string: ");
    scanf("%s", s);

    n = strlen(s);
    j = n - 1;

    while (i < j && s[i] == '0' && s[j] == '0') {
        i++;
        j--;
    }

    while (i <= j) {
        if (s[i] != '1') {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
        printf("String is accepted");
    else
        printf("String is rejected");

    return 0;
}
