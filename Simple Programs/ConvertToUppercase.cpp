#include <ctype.h>
#include <string> 

int main()
{
    int i = 0;
    string userWord;

    char word[] = "edUcaTivE\n";
    char chr;

    // Loop
    while (word[i]) {
        chr = word[i];
        printf("%c", toupper(chr));
        i++;
    }

    return 0;
}