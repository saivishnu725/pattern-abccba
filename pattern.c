#include <stdio.h>
#define first 65
int main()
{
    int lines, line_count, count, space_count_line_number;
    char letter;
    lines = 7;
    space_count_line_number = 0;
    for (line_count = lines - 1; line_count >= 0; line_count--)
    {
        count = first + line_count;
        for (int i = first; i <= count; i++)
        {
            letter = (char)i;
            // printf("%d ", i);
            printf("%c", letter);
        }

        for (int i = 0; i < space_count_line_number; i++)
        {
            printf(" ");
        }

        for (int i = count; i >= first; i--)
        {
            letter = (char)i;
            // printf("%d ", i);
            printf("%c", letter);
        }

        printf("\n");
        space_count_line_number += 2;
    }
    return 0;
}