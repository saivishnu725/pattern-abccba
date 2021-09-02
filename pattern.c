#include <stdio.h>
#define first 97
int main()
{
    int lines, line_count, count;
    lines = 7;
    for (line_count = lines; line_count >= 1; line_count--)
    {
        count = first + line_count;
        for (int i = first; i <= count; i++)
        {

            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}