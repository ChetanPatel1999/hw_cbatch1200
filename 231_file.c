#include <stdio.h>
void main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("231_file.c", "r");
    printf("pointer location : %d\n", ftell(ptr)); // its return current location of pointer
    fseek(ptr, 20, SEEK_SET);                      // its set pointer location in file
    printf("pointer location : %d\n", ftell(ptr));
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    printf("pointer location : %d\n", ftell(ptr));
    rewind(ptr); // its set pointer at the begining of file.
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }
    fclose(ptr);
}