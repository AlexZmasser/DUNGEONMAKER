#include <stdio.h>



int main ()
{
     int array [2][4] = {{1,2,3,4},{5,6,7,8}};

     for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf ("%d, ", array[i][j]);
            }
            printf ("\n");
        }
    return 0;
}