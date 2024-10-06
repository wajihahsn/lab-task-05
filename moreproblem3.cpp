#include <stdio.h>

char encrypt(char ch)
{
    return ~ch;
}

char decrypt(char ch) 
{
    return ~ch;
}

int main() 
{
    char original, encrypted, decrypted;
    
    printf("Enter a character to encrypt: ");
    scanf(" %c", &original);

    encrypted = encrypt(original);
    printf("Encrypted character: %d (ASCII value)\n", encrypted);

    decrypted = decrypt(encrypted);
    printf("Decrypted character: %c\n", decrypted);

    return 0;
}
