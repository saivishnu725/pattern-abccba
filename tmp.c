#include <stdio.h>
#define FIRST 97
int main()
{
    int i, j, line, lines, space, letter, count;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);
    count = FIRST + lines;
    line = lines;
    for (i = FIRST; i < count; i++)
    {
        for (j = 0; j < line; j++)
        {
            letter = (char)j;
            printf("%c ", letter);
        }
        for ( j = 0; j < 0; j--)
        {
            letter = (char)i;
            printf("%d ",letter);
        }
        
        printf("\n");
        line--;
    }

    return 0;
}