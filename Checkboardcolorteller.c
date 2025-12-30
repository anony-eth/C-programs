#include <stdio.h>
#include <string.h>
const char* determine_color(const char* s) {
    int a = s[0];
    if (s[1]%2==0)a++;
    if(a%2==0)
        return "White";
    else
        return "Black";
}
void main() {
    char s[256];
    scanf("%s", &s);
    const char* result = determine_color(s);
    printf("%s\n", result);
}
