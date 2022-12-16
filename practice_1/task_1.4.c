#include <stdio.h>

int main()
{
    // declare variables
    int i;
    double d;
    char ch;
    char s[20];

    // Integer
    printf("Enter an integer number: ");
    scanf("%d", &i);                                                 // read as int
    printf("Your number in hexadecimal system is %x (%#x)\n", i, i); // display as hexadecimal

    // Double
    printf("Enter a double number: ");
    scanf("%lf", &d);
    printf("Your number is: %E\n", d);

    // One character
    printf("Enter one character: %c", &ch);
    scanf(" %c", &ch); // The blank in the format string tells scanf to skip leading whitespace, and the first non-whitespace character will be read with the %c conversion specifier.
    printf("Your character is %c and its value is equal to %d\n", ch, ch);

    // Clean leftover newline character from the buffer
    fgets(s, sizeof(s), stdin);

    // String
    printf("Enter your string consist of two words: ");
    fgets(s, sizeof(s), stdin); // read string
    fputs(s, stdout);           // display string, using fputs instead of puts removes newline charcter

    return 0;
}
