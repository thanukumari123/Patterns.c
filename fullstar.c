#include <stdio.h>

int main()
{
    int rows, columns;
    int i, j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &rows, &columns);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            if(i==rows-1|| j==columns-1 || i+j>=rows-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");  
    }

    return 0;
}