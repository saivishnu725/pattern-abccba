#include <stdio.h>
#define first 97
int main()
{
    int lines, line_count, count;
    char letter;
    lines = 7;
    for (line_count = lines-1; line_count >= 0; line_count--)
    {
        count = first + line_count;
        for (int i = first; i <= count; i++)
        {
            letter = (char)i;
            // printf("%d ", i);
            printf("%c ", letter);
        }
        printf("\n");
    }

    return 0;
}