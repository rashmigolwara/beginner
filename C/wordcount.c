#include <stdio.h>

int checkAlphabet(char c0)
{
    if (c0 >= 'a' && c0 <= 'z')
        return 1;
    if (c0 >= 'A' && c0 <= 'Z')
        return 1;
    return 0;
}

int main()
{
    char c;
    char fname[32];
    FILE *fp;
    int wordStarted, numWords = 0, numChar = 0, numLines = 0;

    printf("Enter a filename : ");
    scanf("%s",fname);
    fp = fopen(fname, "r");

    do {
        c = fgetc(fp);
        if (checkAlphabet(c))
            wordStarted = 1;
        else if (wordStarted)
        {
            numWords = numWords+1;
            wordStarted = 0;
        }
        numChar = numChar + 1;
        if (c == '\n')
            numLines = numLines + 1;
    } while(c != EOF);

    printf("%d %d %d %s\n", numLines, numWords, numChar, fname);
    return 0;
}
