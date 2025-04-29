#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    printf("Enter username: ");
    gets(username);  // Vulnerable

    printf("Enter password: ");
    gets(password);  // Vulnerable

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("Login successful\n");
    } else {
        printf("Invalid credentials\n");
    }

    return 0;
}
