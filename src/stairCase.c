#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void StairCase(int n)
{
    int i, j, startchar;
    for (i = 0 ; i < n ; i++) {
        startchar = (n-i-1);
        for (j = 0 ; j < n ; j++) {
            if (j >= startchar)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n = 6;
    StairCase (n); 
    return 0;
}
