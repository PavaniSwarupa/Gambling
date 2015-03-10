#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
int scr=0;
int miss=0;
void score()
{       char sc[50];
	sprintf(sc,"Your Score Is : %d",scr);
	outtextxy(10,10,sc);
}
void main()
{       clrscr();
	int gd=DETECT;
	initgraph(&gd,0,"");
	setbkcolor(9);
	setfillstyle(SOLID_FILL,5);
	setcolor(5);
	settextstyle(4,0,7);
	delay(1000);
	outtextxy(120,180,"G");
	delay(75);
	outtextxy(166,180,"A");
	delay(75);
	outtextxy(215,180,"M");
	delay(75);
	outtextxy(270,180,"B");
	delay(75);
	outtextxy(315,180,"L");
	delay(75);
	outtextxy(355,180,"I");
	delay(75);
	outtextxy(390,180,"N");
	delay(75);
	outtextxy(440,180,"G");
	delay(200);
	cleardevice();
	outtextxy(120,180,"GAMBLING");
	delay(100);
	settextstyle(4,0,8);
	cleardevice();
	outtextxy(90,180,"GAMBLING");
	delay(100);
	settextstyle(4,0,9);
	cleardevice();
	outtextxy(55,180,"GAMBLING");
	delay(100);
	settextstyle(4,0,8);
	cleardevice();
	outtextxy(100,180,"GAMBLING");
	delay(100);
	settextstyle(4,0,7);
	cleardevice();
	outtextxy(120,180,"GAMBLING");
	delay(500);
	cleardevice();
	int menu;
	setbkcolor(0);
	while(1)
	{       cleardevice();
		gotoxy(1,1);
		printf("*******MENU*******\n1.ABOUT\n2.INSTRUCTIONS\n3.LEVELS\n4.DEVELOPERS\n5.START\n6.EXIT\nEnter Your choice:[ ]\b\b");
		menu=getch()-48;
		if(menu==6)
			exit(0);
		if(menu==5)
			break;
		if(menu>5||menu<1)
		{	printf("Enter right choice.");
			delay(500);
		}
		else
		{       cleardevice();
			gotoxy(1,1);
			switch(menu)
			{   	case 1: printf("\t\t\t\tABOUT\n\nThe word 'CSE' is hidden in one of the three balls.\nFirst the ball in which CSE is hidden is diplayed.\nNow the balls are swaped.\nThe player sholud find out the ball in which the word 'CSE' is present.\n\nPress Enter to skip this menu.");
					getch();
					break;
				case 2: printf("\t\t\t\tINSTRUCTIONS\n\nEach ball will have an index like 1/2/3.\nThis index will identify the ball uniquely.\nEnter the ball index in which the word 'CSE' is present.\nIf you miss 5 times the chances will be completed and game is over.\n\nPress Enter to skip This Menu.");
					getch();
					break;
				case 3: printf("\t\t\t\tLEVELS\nThere are 4 levels of gambling.\nAs the level increases the speed of swaping the balls increases and the number of times the ball is swaped also increases.\n\nPress Enter to skip this menu.");
					getch();
					break;
				case 4: printf("\t\t\t\tDEVELOPERS\n\nCSE\nII year\n\nN.Anusha\nB.smitha\nN.deepika\nK.pavaniswarupa\nM.sunithasowjanya\n\nPress Enter to skip this menu.");
					getch();
					break;
			}
		}
	}
	cleardevice();
	settextstyle(0,0,0);
	setbkcolor(9);
	randomize();
	int i=1,a=2,A=2,t=0;
	//a-box with cse.
	//A-answer.
	//t-delay time.
	settextstyle(2,0,5);
	for(int l=1;l<=4;l++)
	{       cleardevice();
		char msg[100];
		sprintf(msg,"LEVEL %d",l);
		for(int s=0,h=150;s<=40;s+=5,h+=5)
		{       settextstyle(4,0,s/5+1);
			outtextxy(125+s,h,msg);
			delay(100);
			cleardevice();
		}
		settextstyle(2,0,5);
		delay(500);
		for(int n=1;n<=5*l;n++)
		{
			cleardevice();
			if(miss==5)
			{       settextstyle(4,0,6);
				outtextxy(10,150,"CHANCES COMPLETED");
				outtextxy(105,200,"GAME OVER");
				getch();
				return;
			}
			score();
			fillellipse(100,200,20,20);
			fillellipse(300,200,20,20);
			fillellipse(500,200,20,20);
			cleardevice();
			score();
			fillellipse(100,200,20,20);
			setfillstyle(SOLID_FILL,YELLOW);
			fillellipse(300,200,20,20);
			outtextxy(290,190,"CSE");
			setfillstyle(SOLID_FILL,5);
			fillellipse(500,200,20,20);
			delay(500);
			fillellipse(100,200,20,20);
			fillellipse(300,200,20,20);
			fillellipse(500,200,20,20);
			delay(200);
			cleardevice();
			score();
			i=1;a=2;A=2;
			while(i<=2*l+3)
			{
				int x=random(3);
				if(x==0)
				{       fillellipse(160,150,20,20);
					fillellipse(240,250,20,20);
					fillellipse(500,200,20,20);
					delay(200-t);
					cleardevice();
					score();
					fillellipse(240,150,20,20);
					fillellipse(160,250,20,20);
					fillellipse(500,200,20,20);
					delay(200-t);
					cleardevice();
					score();
					if(a==1)
						a=2;
					else if(a==2)
						a=1;
				}
				else if(x==1)
				{       fillellipse(100,200,20,20);
					fillellipse(360,150,20,20);
					fillellipse(440,250,20,20);
					delay(200-t);
					cleardevice();
					score();
					fillellipse(100,200,20,20);
					fillellipse(440,150,20,20);
					fillellipse(360,250,20,20);
					delay(200-t);
					cleardevice();
					score();
					if(a==2)
						a=3;
					else if(a==3)
						a=2;
				}
				else
				{       fillellipse(300,200,20,20);
					fillellipse(175,150,20,20);
					fillellipse(425,250,20,20);
					delay(200-t);
					cleardevice();
					score();
					fillellipse(300,125,20,20);
					fillellipse(300,200,20,20);
					fillellipse(300,275,20,20);
					delay(200-t);
					cleardevice();
					score();
					fillellipse(300,200,20,20);
					fillellipse(425,150,20,20);
					fillellipse(175,250,20,20);
					delay(200-t);
					cleardevice();
					score();
					if(a==1)
						a=3;
					else if(a==3)
						a=1;
				}
				fillellipse(100,200,20,20);
				fillellipse(300,200,20,20);
				fillellipse(500,200,20,20);
				delay(250-t);
				cleardevice();
				score();
				i++;
		       }
		       fillellipse(100,200,20,20);
		       fillellipse(300,200,20,20);
		       fillellipse(500,200,20,20);
		       outtextxy(10,20,"Enter the index of the ball in which the word CSE is present : ");
		       outtextxy(100,225,"1");
		       outtextxy(300,225,"2");
		       outtextxy(500,225,"3");
		       gotoxy(1,3);
		       printf("[ ]\b\b");
		       A=getch()-48;
		       cleardevice();
		       if(A==a)
		       {        outtextxy(300,250,"You got it!");
				scr++;
				score();
			}
			else
			{       outtextxy(200,250,"oop! better luck next time.");
				miss++;
				score();
			}
			if(a==1)
			{       setfillstyle(SOLID_FILL,YELLOW);
				fillellipse(100,200,20,20);
				outtextxy(90,190,"CSE");
				setfillstyle(SOLID_FILL,5);
				fillellipse(300,200,20,20);
				fillellipse(500,200,20,20);
			}
			else if(a==2)
			{       fillellipse(100,200,20,20);
				setfillstyle(SOLID_FILL,YELLOW);
				fillellipse(300,200,20,20);
				outtextxy(290,190,"CSE");
				setfillstyle(SOLID_FILL,5);
				fillellipse(500,200,20,20);
			}
			else
			{       fillellipse(100,200,20,20);
				fillellipse(300,200,20,20);
				setfillstyle(SOLID_FILL,YELLOW);
				fillellipse(500,200,20,20);
				outtextxy(490,190,"CSE");
				setfillstyle(SOLID_FILL,5);
			}                               			delay(1000);
		}
		if(l<4)
		{	t+=50;
			cleardevice();
			outtextxy(10,20,"Enter '1' to go to next LEVEL.\nTo EXIT enter '0'.\n");
			int yn=1;
			yn=getch()-48;
			if(yn==0)
				break;
		}
		else
		{       cleardevice();
			settextstyle(4,0,7);
			if(scr==l*(n-1))
				outtextxy(130,200,"YOU WON");
			else
				outtextxy(120,200,"YOU LOST");
		}
	}
	getch();
}



































