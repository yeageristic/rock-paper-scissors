//project for rock paper scissors in c programming language
#include<stdio.h>
#include<conio.h>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
void rock_paper_scissors(int a,int b)
{
if(a==1&&b==2)
{
printf("player 2 wins");
}
else if(a==1&&b==3)
{
printf("player 1 wins");
}
else if(a==2&&b==1)
{
printf("player 1 wins");
}
else if(a==2&&b==3)
{
printf("player 3 wins");
}
else if(a==3&&b==1)
{
printf("player 2 wins");
}
else if(a==3&&b==2)
{
printf("player 1 wins");
}
}
void main()
{
int a,b;
printf("1 for rock\npaper for 2\n scissors for 3\nenter two events\n");
scanf("%d%d",&a,&b);
rock_paper_scissors(a,b);
getch();
}
