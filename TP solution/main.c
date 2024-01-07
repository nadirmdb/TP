#include <stdio.h>
#include <string.h>

int main() {
    char ch1[100], ch2[100], ch3[100];

    puts("Enter the first string of characters : ");
    gets(ch1);

    puts("Enter the second string of characters : ");
    gets(ch2);

    // Find the length of the string 1 and 2
    int len1 = strlen(ch1);
    int len2 = strlen(ch2);

    // Copy the first half of ch1 and ch2 to ch3
    strncpy(ch3, ch1, len1/2);
    strncpy(ch3 + len1/2, ch2, len2/2);
    ch3[len1/2 + len2/2] = '\0';

    puts("The result is : ");
    puts(ch3);

    return 0;
}
