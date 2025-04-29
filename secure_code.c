#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];
    char correct_username[] = "admin";
    char correct_password[] = "1234";

    printf("Enter username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("Login successful\n");
    } else {
        printf("Invalid credentials\n");
    }

    return 0;
}
