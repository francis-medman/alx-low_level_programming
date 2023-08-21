#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[PASSWORD_LENGTH + 1];
    
    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomIndex = rand() % (sizeof(charset) - 1);
        password[i] = charset[randomIndex];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}
