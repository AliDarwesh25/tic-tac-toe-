#include <stdio.h>
#include <stdlib.h>
int a='X',b='O';
int X_points[3],O_pionts[3],x,o;int computer_choose;
int win(char play[10]);
void play_board(char play[10]);
int computer_move(char play[10],int ptr);
int main()
{
    int i,j,mark,choose,player=1,ptr;
    for(i=0;i<3;i++)
    {
        char play[10]={'0','1','2','3','4','5','6','7','8','9'};
        do
        {
            play_board(play);
            {
                if(player%2==1)
                    mark =a;
                else
                    mark =b;
            }
            printf("your turn, enter a number:  ", player);
            if(player%2==1)
               {
                    player =1;
                    scanf("%d", &choose);
               }
            else
                {
                    player =2;
                    computer_move(play,ptr);
                    choose=computer_choose;
                }
                ptr=choose;



            if (choose == 1 && play[1] == '1')
            play[1] = mark;

        else if (choose == 2 && play[2] == '2')
            play[2] = mark;

        else if (choose == 3 && play[3] == '3')
            play[3] = mark;

        else if (choose == 4 && play[4] == '4')
            play[4] = mark;

        else if (choose == 5 && play[5] == '5')
            play[5] = mark;

        else if (choose == 6 && play[6] == '6')
            play[6] = mark;

        else if (choose == 7 && play[7] == '7')
            play[7] = mark;

        else if (choose == 8 && play[8] == '8')
            play[8] = mark;

        else if (choose == 9 && play[9] == '9')
            play[9] = mark;
        else
        {
            printf("Invalid move ");
            player--;
            getch();
        }
        player++;

        j = win(play);
    }while (j ==  - 1);
    play_board(play);
    if (j == 1)
        {
        printf("==>Player %d win \n", --player);
        }
    else
        {
        printf("==>Game draw\n");
        }

    getch();
    x=0;o=0;
    if((play[1]=='X' && play[2]=='X')&&(play[2]=='X' &&play[3]=='X'))
        {x=3;X_points[i]=x;}
    else if((play[4]=='X' && play[5]=='X')&&(play[5]=='X' &&play[6]=='X'))
        {
            x=3;
            X_points[i]=x;
        }
    else if((play[7]=='X' && play[8]=='X')&&(play[8]=='X' &&play[9]=='X'))
        {
            x=3;
            X_points[i]=x;
        }
    else if((play[1]=='X' && play[4]=='X')&&(play[4]=='X' &&play[7]=='X'))
        {
            x=3;
            X_points[i]=x;
        }
    else if((play[2]=='X' && play[5]=='X')&&(play[5]=='X' &&play[8]=='X'))
        {
            x=3;
            X_points[i]=x;
        }
    else if((play[3]=='X' && play[6]=='X')&&(play[6]=='X' &&play[9]=='X'))
        {
            x=3;
            X_points[i]=x;
        }
    else if((play[1]=='X' && play[5]=='X')&&(play[5]=='X' &&play[9]=='X'))
        {
            x=3;
            X_points[i]=x;
        }
    else if((play[3]=='X' && play[5]=='X')&&(play[5]=='X' &&play[7]=='X'))
        {
            x=3;
            X_points[i]=x;
        }
    else if((play[1]=='O' && play[2]=='O')&&(play[2]=='O' &&play[3]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else if((play[4]=='O' && play[5]=='O')&&(play[5]=='O' &&play[6]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else if((play[7]=='O' && play[8]=='O')&&(play[8]=='O' &&play[9]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else if((play[1]=='O' && play[4]=='O')&&(play[4]=='O' &&play[7]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else if((play[2]=='O' && play[5]=='O')&&(play[5]=='O' &&play[8]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else if((play[3]=='O' && play[6]=='O')&&(play[6]=='O' &&play[9]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else if((play[1]=='O' && play[5]=='O')&&(play[5]=='O' &&play[9]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else if((play[3]=='O' && play[5]=='O')&&(play[5]=='O' &&play[7]=='O'))
        {
            o=3;
            O_pionts[i]=o;
        }
    else
        {
        x=1;X_points[i]=x;
        o=1;O_pionts[i]=o;
        }
    }
    printf("the points of player 1 and 2: \n");
    for(i=0;i<3;i++)
    {
        printf("%d  %d\n",X_points[i],O_pionts[i]);
    }

}
void play_board(char play[10])
{
    system("cls");
    printf("player 1 (%c) - player 2 (%c)\n",a,b);
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",play[1],play[2],play[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",play[4],play[5],play[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",play[7],play[8],play[9]);
    printf("     |     |     \n");
}
int win(char play[10])
{
    if(play[1]==play[2] && play[2]==play[3])
        return 1;
    else if(play[4]==play[5] && play[5]==play[6])
        return 1;
    else if(play[7]==play[8] && play[8]==play[9])
        return 1;
    else if(play[1]==play[5] && play[5]==play[9])
        return 1;
    else if(play[3]==play[5] && play[5]==play[7])
        return 1;
    else if(play[1]==play[4] && play[4]==play[7])
        return 1;
    else if(play[2]==play[5] && play[5]==play[8])
        return 1;
    else if(play[3]==play[6] && play[6]==play[9])
        return 1;
    else if (play[1]!='1'&&play[2]!='2'&&play[3]!='3'&&play[4]!='4'&&play[5]!='5'&&play[6]!='6'&&play[7]!='7'&&play[8]!='8'&&play[9]!='9')
        return 0;
    else
        return -1;
}
int computer_move(char play[10],int ptr)
{
    if((play[1]=='X' && ptr==1)&&(ptr==1 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[1]=='X' && ptr==1)&&(ptr==1 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[1]=='X' && ptr==1)&&(ptr==1 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[1]=='X' && ptr==1)&&(ptr==1 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[1]=='X' && ptr==1)&&(ptr==1 && play[6]=='6'))
    {
        computer_choose=6;
    }
    else if((play[1]=='X' && ptr==1)&&(ptr==1 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[1]=='X' && ptr==1)&&(ptr==1 && play[8]=='8'))
    {
        computer_choose=8;
    }
    else if((play[1]=='X' && ptr==1)&&(ptr==1 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[6]=='6'))
    {
        computer_choose=6;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[8]=='8'))
    {
        computer_choose=8;
    }
    else if((play[2]=='X' && ptr==2)&&(ptr==2 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[6]=='6'))
    {
        computer_choose=6;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[8]=='8'))
    {
        computer_choose=8;
    }
    else if((play[3]=='X' && ptr==3)&&(ptr==3 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[6]=='6'))
    {
        computer_choose=9;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[8]=='8'))
    {
        computer_choose=8;
    }
    else if((play[4]=='X' && ptr==4)&&(ptr==4 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[6]=='6'))
    {
        computer_choose=6;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[8]=='8'))
    {
        computer_choose=8;
    }
    else if((play[5]=='X' && ptr==5)&&(ptr==5 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[8]=='8'))
    {
        computer_choose=8;
    }
    else if((play[6]=='X' && ptr==6)&&(ptr==6 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[6]=='6'))
    {
        computer_choose=6;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[8]=='8'))
    {
        computer_choose=8;
    }
    else if((play[7]=='X' && ptr==7)&&(ptr==7 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[6]=='6'))
    {
        computer_choose=6;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[8]=='X' && ptr==8)&&(ptr==8 && play[9]=='9'))
    {
        computer_choose=9;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[1]=='1'))
    {
        computer_choose=1;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[2]=='2'))
    {
        computer_choose=2;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[3]=='3'))
    {
        computer_choose=3;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[4]=='4'))
    {
        computer_choose=4;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[5]=='5'))
    {
        computer_choose=5;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[6]=='6'))
    {
        computer_choose=6;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[7]=='7'))
    {
        computer_choose=7;
    }
    else if((play[9]=='X' && ptr==9)&&(ptr==9 && play[8]=='8'))
    {
        computer_choose=8;
    }
}

