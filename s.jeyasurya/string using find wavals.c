#include <stdio.h>

int main() {
    char s[] = "hello"; 
    int i = 0, count = 0;
    while (s[i]!='\0') {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            count++;
        }
        i++;
    }

    printf("%d\n", count);
    return 0; 
}
