#include <stdio.h>

int custom_strcmp(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        }
        i++;
    }

    return (unsigned char)str1[i] - (unsigned char)str2[i];
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    if (scanf("%99s", str1) != 1) return 1;

    printf("Enter the second string: ");
    if (scanf("%99s", str2) != 1) return 1;

    int result = custom_strcmp(str1, str2);

    if (result < 0) {
        printf("\"%s\" comes BEFORE \"%s\" in alphabetical order.\n", str1, str2);
    } else if (result > 0) {
        printf("\"%s\" comes AFTER \"%s\" in alphabetical order.\n", str1, str2);
    } else {
        printf("Both strings are identical.\n");
    }

    return 0;
}