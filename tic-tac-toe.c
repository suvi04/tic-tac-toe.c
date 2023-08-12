#include <stdio.h>

int main()
{
    char a,b,c,d,e,f,g,h,i;
    a='-';b='-';c='-';d='-';e='-';f='-';g='-';h='-';i='-';
    char tmp;
    printf("TIC - TAC - TOE\nPress any key to start \n");
    scanf("%c",&tmp);

    printf("\n a | b | c\n d | e | f\n g | h | i\n");
    int win=1;
    while(win)
    {
        char posn_p1;
        printf("P1 : chose the block to place X : ");
        scanf(" %c",&posn_p1);

        if(posn_p1=='a')
        {
            a='X';
        }
        if(posn_p1=='b')
        {
            b='X';
        }if(posn_p1=='c')
        {
            c='X';
        }if(posn_p1=='d')
        {
            d='X';
        }if(posn_p1=='e')
        {
            e='X';
        }if(posn_p1=='f')
        {
            f='X';
        }if(posn_p1=='g')
        {
            g='X';
        }if(posn_p1=='h')
        {
            h='X';
        }if(posn_p1=='i')
        {
            i='X';
        }

        if(a=='X' && d=='X' && g=='X')
        {
            printf("P1 Won !!\n");win=0;
        }
        if(b=='X' && e=='X' && h=='X')
        {
            printf("P1 Won !!\n");win=0;
        }
        if(c=='X' && f=='X' && i=='X')
        {
            printf("P1 Won !!\n");win=0;
        }
        if(a=='X' && b=='X' && c=='X')
        {
            printf("P1 Won !!\n");win=0;
        }
        if(d=='X' && e=='X' && f=='X')
        {
            printf("P1 Won !!\n");win=0;
        }
        if(g=='X' && h=='X' && i=='X')
        {
            printf("P1 Won !!\n");win=0;
        }
        if(a=='X' && e=='X' && i=='X')
        {
            printf("P1 Won !!\n");win=0;
        }
        if(c=='X' && e=='X' && g=='X')
        {
            printf("P1 Won !!\n");win=0;
        }




        printf("\n %c | %c | %c\n %c | %c | %c\n %c | %c | %c\n",a,b,c,d,e,f,g,h,i);

        char posn_p2;
        printf("P2 : chose the block to place O : ");
        scanf(" %c",&posn_p2);

        if(posn_p2=='a')
        {
            a='O';
        }
        if(posn_p2=='b')
        {
            b='O';
        }if(posn_p2=='c')
        {
            c='O';
        }if(posn_p2=='d')
        {
            d='O';
        }if(posn_p2=='e')
        {
            e='O';
        }if(posn_p2=='f')
        {
            f='O';
        }if(posn_p2=='g')
        {
            g='O';
        }if(posn_p2=='h')
        {
            h='O';
        }if(posn_p2=='i')
        {
            i='O';
        }


        printf("\n %c | %c | %c\n %c | %c | %c\n %c | %c | %c\n",a,b,c,d,e,f,g,h,i);


        if(a=='O' && d=='O' && g=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        if(b=='O' && e=='O' && h=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        if(c=='O' && f=='O' && i=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        if(a=='O' && b=='O' && c=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        if(d=='O' && e=='O' && f=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        if(g=='O' && h=='O' && i=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        if(a=='O' && e=='O' && i=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        if(c=='O' && e=='O' && g=='O')
        {
            printf("P2 Won !!\n");win=0;
        }
        

    }
}