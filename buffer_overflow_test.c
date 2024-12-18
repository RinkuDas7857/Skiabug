#include <stdio.h>
#include <string.h>

// Include the vulnerable function code here
void vulnerable_function(const char *input) {
    char buffer[10];
    strcpy(buffer, input);  // Vulnerable strcpy function
    printf("Buffer content: %s\n", buffer);
}

// Test for buffer overflow
void test_buffer_overflow() {
    char malicious_input[20] = "AAAAAAAAAAAAAAAAAAA";  // Oversized input
    printf("Testing buffer overflow with input: %s\n", malicious_input);

    // Call the vulnerable function with oversized input
    vulnerable_function(malicious_input);
}

int main() {
    printf("Starting buffer overflow test...\n");
    test_buffer_overflow();
    printf("Test completed.\n");
    return 0;
}
