#include <stdio.h>
#include <string.h>

int main ()
{

    char DUNGEON [6][6]={{'#','#','#','#','#','#'},
                         {'#',' ',' ',' ','D','#'},
                         {'#',' ','K',' ',' ','#'},
                         {'#',' ',' ',' ',' ','#'},
                         {'#',' ',' ','S',' ','#'},
                         {'#','#','#','#','#','#'},};
    bool Key = false;
    bool Door = false;

    for (int i = 0; i < 6; i++)
    {
        printf ("%d", DUNGEON[i][0]);  
    }

    return 0;
}