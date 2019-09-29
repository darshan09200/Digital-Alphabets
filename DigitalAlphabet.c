#include <stdio.h>
#include <conio.h>
#include <string.h>
#define size 100
struct alphabet
{
    int pos[30][15];
}ap;

void printDiff(int alphabet)
{
    int i, j;
    int space = 40, spaceBefore = 0;
    if (alphabet == 10)
    {
        for (i = 0; i < 10; i++)
        {
            space -= 4;
            printf("*");
            for (j = 0; j < space; j++)
            {
                printf("");
            }
            printf("*\n");
        }
        for (i = 0; i < 10; i++)
        {
            space += 4;
            printf("*");
            for (j = 0; j < space; j++)
            {
                printf("");
            }
            printf("*\n");
        }
    }
    if (alphabet == 21)
    {
        for (i = 0; i < 10; i++)
        {
            space -= 4;
            spaceBefore += 2;
            for (j = 0; j < spaceBefore; j++)
            {
                printf("");
            }
            printf("*");
            for (j = 0; j < space; j++)
            {
                printf("");
            }
            printf("*\n");
        }
    }
    else if(alphabet == 25)
    {
        for (i = 0; i < 40; i++)
        {
            printf("*");
        }
        printf("\n");
        for (i = 0; i < 10; i++)
        {
            space -= 4;
            spaceBefore += 2; 
            /*
            for(j=0;j<spaceBefore;j++){
            printf("");
            } 
            */
            for (j = 0; j < space; j++)
            {
                printf("");
            }
            printf("*\n");
        }
        for (i = 0; i < 40; i++)
        {
            printf("*");
        }
    }
    else if(alphabet == 23)
    {
        for (i = 0; i < 10; i++)
        {
            space -= 4;
            spaceBefore += 2;
            for (j = 0; j < spaceBefore; j++)
            {
                printf("");
            }
            printf("*");
            for (j = 0; j < space; j++)
            {
                printf("");
            }
            printf("*\n");
        }
        for (i = 0; i < 10; i++)
        {
            space += 4;
            spaceBefore -= 2;
            for (j = 0; j < spaceBefore; j++)
            {
                printf("");
            }
            printf("*");
            for (j = 0; j < space; j++)
            {
                printf("");
            }
            printf("*\n");
        }
    }
}
void printChar(int alphabet)
{
    int i, j, k;
    printDiff(alphabet);
    for (i = 0; i < 12; i++)
    {
        if (i == 3 || i == 8)
        {
            if (ap.pos[alphabet][i - 1] == 0)
            {
                if (ap.pos[alphabet][i] != 0)
                {
                    printf("\n");
                    for (j = 0; j < 8; j++)
                    {
                        for (k = i - 1; k < i + 2; k++)
                        {
                            if (ap.pos[alphabet][k] != 0)
                            {
                                printf("*");
                            }
                            printf("\t");
                        }
                        printf("\n");
                    }
                }
            }
            continue;
        }
        else if(i == 4 || i == 9)
        {
            if (ap.pos[alphabet][i - 1] == 0)
            {
                if (ap.pos[alphabet][i - 2] == 0)
                {
                    if (ap.pos[alphabet][i] != 0)
                    {
                        printf("\n");
                        for (j = 0; j < 8; j++)
                        {
                            for (k = i - 2; k < i + 1; k++)
                            {
                                if (ap.pos[alphabet][k] != 0)
                                {
                                    printf("*");
                                }
                                printf("\t");
                            }
                            printf("\n");
                        }
                    }
                }
            }
            continue;
        }
        else if((i == 2 || i == 7 || i == 10))
        {
            printf("\n");
        }
        if (ap.pos[alphabet][i] != 0)
        {
            for (j = 0; j < 8; j++)
            {
                // printf("*");
                if (i == 2 || i == 7)
                {
                    for (k = i; k < i + 3; k++)
                    {
                        if (ap.pos[alphabet][k] != 0)
                        {
                            printf("*");
                        }
                        printf("\t");
                    }
                    printf("\n");
                }
                else if(i != 3 || i != 4 || i != 8 || i != 9)
                {
                    printf("*");
                }
            }
            // continue;
        }
        else
        {
            for (j = 0; j < 10; j++)
                printf("");
        }
    }
}
void fixPos()
{
    int i, j;
    int pos[30][15] = {
        {1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
        {1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0},
        {1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1},
        {1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0},
        {0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
        {1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1},
        {1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0},
        {1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1},
        {1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    for (i = 0; i < 25; i++)
    {
        for (j = 0; j < 12; j++)
        {
            ap.pos[i][j] = pos[i][j];
        }
    }
}
void main()
{
    char option[size], ch;
    int len;
    clrscr();
    fixPos();
    do
    {
        clrscr();
        printf("\n\tEnter any uppercase charachter:");
        scanf("%s", &option);
        len = strlen(option);
        if (len == 1)
        {
            ch = option[0];
            if (ch >= 65 && ch <= 90)
            {
                printChar(ch - 65);
                printf("\n\tPress  any key to proceed");
                getch();
                do
                {
                    printf("\n\tDo you want to repeat:");
                    printf("\n\t1.Yes\t2.No");
                    printf("\n\tEnter your choice here:");
                    scanf("%s", &option);
                    if ((strcmp(option, "1") == 0))
                    {
                        strcpy(option, "invalid");
                    }
                    else if((strcmp(option, "2") == 0))
                    {
                        strcpy(option, "valid");
                    }
                    else
                    {
                        strcpy(option, "no exit");
                    }
                } while ((strcmp(option, "no exit") == 0));
            }
            else
            {
                printf("\n\tEnter valid option:");
                printf("\n\tPress any key to proceed");
                getch();
                strcpy(option, "invalid");
            }
        }
        else
        {
            printf("\n\tEnter valid option:");
            printf("\n\tPress any key to proceed");
            getch();
            strcpy(option, "invalid");
        }
    } while ((strcmp(option, "invalid") == 0));
}