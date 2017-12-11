# include<conio.h>
#include<stdio.h>
#include<windows.h>
//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

main ()
{
int i,j,x,y,k,t,sw,ii,jj;
char an;
static m,n;
char reset[3][3]={'7','8','9','4','5','6','1','2','3'},b,a[3][3];
char player1[10]="Player_1",player2[10]="Player_2";


printf("\n\n\n\n\n\t\t       \n\n\t\t\t   (^_^)/\n\n\n\t \t   Er.Deepak kumar presents  \n \n\t     *********[ TicTac Game ]*********    \n\n\n  ");
printf("\n\nEnter your name Player_1\n");
scanf("%s",player1);
printf("\nEnter your name Player_2\n");
scanf("%s",player2);
//getch();
start:
	
for(ii=0;ii<=2;ii++)
{
	for(jj=0;jj<=2;jj++)
	{
		a[ii][jj]=reset[ii][jj];
	}
	}	
printf("\n\n\n\t     {{  Press any key to continue.....}} \n\n\n\n\t\t\tPress 'x' to exit");
fflush(stdin);
an=getch();
if(an=='x')
{
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\(^o^)/ \n\n");
		if(n>m)
	printf("\t\tCongratulation! %s win",player1);
	else if(m>n)
	printf("\t\tCongratulation! %s win",player2);
	
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t_|?|?   (T_T)\n\n");
     if(n<m)
	printf("\t\t\t\t\t%s Looser !!",player1);
	else if(m<n)
	printf("\t\t\t\t\t%s Looser !!",player2);
	
	printf("\n\n\n\n\n\n");
	 if(m==n)
	 {
	 system("cls");
	 printf("\t\t\(^  o^)/ \t \(^o ^)/");
	printf("\n\n\t\t\tMatch Draw");
}}

else
{
system("cls");
for(k=1;k<20;k++)
{
gotoxy(0,0);

printf("\n  'X'           (;-_-)              (-_- ;)        'O'\n\n[ %s ]              { V/S}              [ %s ]\n   %d\t\t\t\t\t  %d\n",player2,player1,m,n);


for(i=0;i<2;i++)
{printf("\n");
printf("          |         |         \n          |         |         \n");
printf("__________|_________|_________");


}
printf("\n          |         |         \n          |         |         \n");


for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{ gotoxy(8*(j+1),3*(i+1)+4);

printf("%c",a[i][j]);}

printf("\n\n\n");}

if(k%2==0)
printf("%s it's ur turn",player2);
else
printf("%s it's ur turn",player1);

printf("\t\t\tPress 0 : to quit\n");
fflush(stdin);


b=getche();
 

   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{ if(a[i][j]==b)
         { 
         	if(k%2==0)
         	{a[i][j]='X';
         	break;}
         	else
         	{
         		a[i][j]='O';
         	break;}
         }
         else if(b=='0')
         goto start;
         else
         continue;
     
   	}}
   	
   	system("cls");
   for(i=0;i<3;i++)
   { j=0;
   	if((a[i][j]=='X')&&(a[i][j+1]=='X')&&(a[i][j+2]=='X')||(a[i][j]=='O')&&(a[i][j+1]=='O')&&(a[i][j+2]=='O')||(a[j][i]=='X')&&(a[j+1][i]=='X')&&(a[j+2][i]=='X')||(a[j][i]=='O')&&(a[j+1][i]=='O')&&(a[j+2][i]=='O')||(a[0][0]=='X')&&(a[1][1]=='X')&&(a[2][2]=='X')||(a[0][0]=='O')&&(a[1][1]=='O')&&(a[2][2]=='O')||(a[0][2]=='X')&&(a[1][1]=='X')&&(a[2][0]=='X')||(a[0][2]=='O')&&(a[1][1]=='O')&&(a[2][0]=='O'))
   	{	if(k%2==0)
   	      
         	{  gotoxy(5,40);
         		printf("\n%s wins\n",player2);m++;
         		 getch();
         	goto start;}
         	else
         	{ gotoxy(5,40);
         		printf("\n%swins\n",player1);n++;
         		getch();
         		goto start;
        }}
   }
  
}}
}
