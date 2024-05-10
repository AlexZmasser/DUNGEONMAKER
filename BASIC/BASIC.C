#include <stdio.h>
#include <string.h>

int main()
{

    char DUNGEON[6][6] = {
        {'#', '#', '#', '#', '#', '#'},
        {'#', ' ', ' ', ' ', 'D', '#'},
        {'#', ' ', 'K', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', 'S', ' ', '#'},
        {'#', '#', '#', '#', '#', '#'},
    };
    bool Key = false;
    bool Door = false;
    int Player[6][6];
    char cont = 'y';
    char move;

    while (cont != 'n')
    {

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                
                if (DUNGEON[i][j] == 'S')
                {
                    printf("P");
                    Player[i][j];
                }
                printf("%c ", DUNGEON[i][j]);
            }
            printf("\n");
        }
        printf("Where would you like to move to n,w,s,e ?");
        scanf("%c", &move); 
        
        


        printf("Would you like to continue y/n? \n");
        scanf("%c", &cont);
    }

    return 0;
}