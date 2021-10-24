#include <stdio.h>
#include<string.h>

char *gap = "   ";
char *numbers[][5] = 
{
    {
        "******",
        "*    *",
        "*    *",
        "*    *",
        "******"
    },
    {
        "     *",
        "     *",
        "     *",
        "     *",
        "     *",
    },
    {
        "******",
        "     *",
        "******",
        "*     ",
        "******"
    },
    {
        "******",
        "     *",
        "******",
        "     *",
        "******"
    },
    {
        "*    *",
        "*    *",
        "******",
        "     *",
        "     *"
    },
    {
        "******",
        "*     ",
        "******",
        "     *",
        "******"
    },
    {
        "******",
        "*     ",
        "******",
        "*    *",
        "******"
    },
    {
        "******",
        "     *",
        "     *",
        "     *",
        "     *"
    },
    {
        "******",
        "*    *",
        "******",
        "*    *",
        "******"
    },
    {
        "******",
        "*    *",
        "******",
        "     *",
        "     *"
    }       
};

int drawdigit(int digit, int row)
{
    printf("%s %s",numbers[digit][row],gap);
}

int drawnumberrow(int number, int row)
{
    if(number != 0)
    {
        drawnumberrow(number/10, row);
        drawdigit(number%10, row);
    }
}

int drawnumber(int number)
{
    for(int row=0; row<5; row++)
    {
        if(number == 0)
        {
            drawdigit(0, row);
            printf("\n");
        }
        else
        {
            drawnumberrow(number, row);
            printf("\n");
        }
    }
}

int drawrow(int number, int row)
{
    switch(number)
    {
        case 0 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 1 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 2 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 3 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 4 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 5 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 6 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 7 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 8 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;
        case 9 : printf("big%i(%i): %s",number, row, numbers[number][row-1]); break;

    }  
}

int main(void)
{
    int number,row;
    char information[100];
    printf("choose the information you want to know(row or bignumber)\n");
    scanf("%s",information);
    if(strcmp(information,"bignumber") == 0)
    {
        printf("Enter a number: ");
        scanf("%i", &number);
        printf("\n\n"); 
        drawnumber(number);
    }
    if(strcmp(information,"row") == 0)
    {
        printf("enter the big number and row \n");
        scanf("%i %i",&number, &row);
        drawrow(number, row);
    }
}