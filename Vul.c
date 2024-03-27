#include <stdio.h>
#include <string.h>

void vulnerable_function(const char *input) {
    char buffer[10];
    strcpy(buffer, input);  // Vulnerable strcpy function
    printf("Buffer content: %s\n", buffer);
}

int main() {
    char input[20];
    printf("Enter your input: ");
    scanf("%s", input);
    vulnerable_function(input);
    return 0;
}
