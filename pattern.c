#include <stdio.h>
#define FIRST 97

int main()
{
    int i, j, k, letter, line1, line2, lines, count, number, space;
    // printf("Enter the number of lines: ");       // Uncomment at the end!
    // scanf("%d",&lines);                          // Uncomment at the end!
    lines = 7; // Will remove this later
    line1 = lines;
    line2 = lines;
    count = FIRST + lines;
    for (i = FIRST; i < count; i++)
    {
        number = i;
        for (j = 0; j < line1; j++)
        {
            letter = (char)number;
            // printf("%d,%d,%c,%d    ", i, j, letter, number);
            printf("%c", letter);
            number = number + 1;
        }
        for ( k = count; k >= FIRST; k--)
        {
            
        }
        
        printf("\n");
        line1--;
    }
    printf("\n");
    line1 = 0;

    return 0;
}