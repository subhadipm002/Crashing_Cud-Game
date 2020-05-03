#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include "box4.cpp";
int scab;
int asci;

/////////////////////Main/////////////////

// void main()
void piano()
   {
   int  xa=18,ya=5, xc=65,yc=5,xe=1,ye=5;
   textbackground(16);
   clrscr();

   box4();
   void getkey1();

   int n=100;
   while(1)

   {
   getkey1();
   switch(scab)
       {
       case 30:  //sa -a
		  gotoxy(xa+6,ya+4);
		  textcolor(450);
		  cprintf("%c",14);
		sound(240);
		delay(n);
		nosound();
		 gotoxy(xa+6,ya+4);
		textcolor(4);
		cprintf("");

		break;
       case 31:  //re -s
		 gotoxy(xa+12,ya+4);
		  textcolor(450);
		cprintf("%c",14);
		sound(270);
		delay(n);
		nosound();
			 gotoxy(xa+12,ya+4);
			textcolor(4);
		cprintf("");
		break;
       case 32:  //ga -d
		  gotoxy(xa+18,ya+4);
		  textcolor(450);
		   cprintf("%c",14);
		sound(300);
		delay(n);
		nosound();
			  gotoxy(xa+18,ya+4);
			textcolor(4);
		cprintf("");
		break;
       case 33:  //ma   -f
		   gotoxy(xa+24,ya+4);
		  textcolor(450);
		 cprintf("%c",14);
		sound(320);
		delay(n);
		nosound();
			   gotoxy(xa+24,ya+4);
			textcolor(4);
		cprintf("");
		break;
       case 34:  //pa  -g
		   gotoxy(xa+30,ya+4);
		  textcolor(450);
		 cprintf("%c",14);
		sound(360);
		delay(n);
		nosound();
		  gotoxy(xa+30,ya+4);
			textcolor(4);
		cprintf("");
		break;
       case 35:  //dha   -h
		  gotoxy(xa+36,ya+4);
		  textcolor(450);
		 cprintf("%c",14);
		sound(400);
		delay(n);
		nosound();
		  gotoxy(xa+36,ya+4);
			textcolor(4);
		cprintf("");
		break;
       case 36:  //ni   -j
	      gotoxy(xa+4,ya+7);
	      textcolor(450);
		 cprintf("%c",14);
		sound(450);
		delay(n);
		nosound();
		  gotoxy(xa+4,ya+7);
			textcolor(4);
		cprintf("");
		break;
       case 37:  //sa - k
	 gotoxy(xa+8,ya+7);
	      textcolor(450);
		 cprintf("%c",14);
		sound(240);
		delay(n);
		nosound();
			 gotoxy(xa+8,ya+7);
			textcolor(4);
		cprintf("");
		break;
		//// Piano tone.....
	       ////////// /////////////////////////////////////////
       case 16:  // - q
	       gotoxy(xa+4,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(5587.65);
		delay(n);
		nosound();
		      gotoxy(xa+4,ya+1);
			textcolor(4);
		cprintf("");
		break;
     case 17:  // - w
		    gotoxy(xa+8,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(4186.01);
		delay(n);
		nosound();
		 gotoxy(xa+8,ya+1);
			textcolor(4);
		cprintf("");
		break;
    case 18:  //sa - e
      gotoxy(xa+12,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(3520.00);
		delay(n);
		nosound();
		   gotoxy(xa+12,ya+1);
			textcolor(4);
		cprintf("");
		break;
     case 19:  //sa -r
       gotoxy(xa+16,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(1760.00);
		delay(n);
		nosound();
		  gotoxy(xa+16,ya+1);
			textcolor(4);
		cprintf("");
		break;
      case 20:  //sa - t
	gotoxy(xa+20,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(880.000);
		delay(n);
		nosound();
			gotoxy(xa+20,ya+1);
			textcolor(4);
		cprintf("");
		break;
    case 21:  //sa - y
      gotoxy(xa+24,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(440.000);
		delay(n);
		nosound();
		 gotoxy(xa+24,ya+1);
			textcolor(4);
		cprintf("");
		break;
    case 22:  //sa - u
      gotoxy(xa+28,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(220.000);
		delay(n);
		nosound();
		  gotoxy(xa+28,ya+1);
			textcolor(4);
		cprintf("");
		break;
     case 23:  //sa - i
       gotoxy(xa+32,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(110.000);
		delay(n);
		nosound();
		 gotoxy(xa+32,ya+1);
			textcolor(4);
		cprintf("");
		break;
     case 24:  //sa - o
       gotoxy(xa+36,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(55.0000);
		delay(n);
		nosound();
		   gotoxy(xa+36,ya+1);
			textcolor(4);
		cprintf("");
		break;
     case 25:  //sa - p
       gotoxy(xa+40,ya+1);
	       textcolor(450);
		 cprintf("%c",14);
		sound(27.5000);
		delay(n);
		nosound();
		 gotoxy(xa+40,ya+1);
			textcolor(4);
		cprintf("");
		break;
      case 38:  //sa - l
		 gotoxy(xa+12,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(261.626);
		delay(n);
		nosound();
		 gotoxy(xa+12,ya+7);
			textcolor(4);
		cprintf("");
		break;
       case 44:  //sa - z
	gotoxy(xa+16,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(659.256);
		delay(n);
		nosound();
			gotoxy(xa+16,ya+7);
			textcolor(4);
		cprintf("");
		break;
       case 45:  //sa - x
	gotoxy(xa+20,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(164.814);
		delay(n);
		nosound();
			gotoxy(xa+20,ya+7);
			textcolor(4);
		cprintf("");
		break;
	 case 46:  //sa - c
	  gotoxy(xa+24,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(82.4069);
		delay(n);
		nosound();
			  gotoxy(xa+24,ya+7);
			textcolor(4);
		cprintf("");
		break;
      case 47:  //sa - v
      gotoxy(xa+28,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(41.2034);
		delay(n);
		nosound();
		  gotoxy(xa+28,ya+7);
			textcolor(4);
		cprintf("");
		break;
      case 48:  //sa - b
       gotoxy(xa+32,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(20.6017);
		delay(n);
		nosound();
	       gotoxy(xa+32,ya+7);
			textcolor(4);
		cprintf("");
		break;
      case 49:  //sa - n
       gotoxy(xa+36,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(1396.91);
		delay(n);
		nosound();
		     gotoxy(xa+36,ya+7);
			textcolor(4);
		cprintf("");
		break;
      case 50:  //sa - m
       gotoxy(xa+40,ya+7);
		  textcolor(450);
		 cprintf("%c",14);
		sound(2793.83);
		delay(n);
		nosound();
		 gotoxy(xa+40,ya+7);
			textcolor(4);
		cprintf("");
		break;
     ////////////////////////////////////////////
     // Numericals////

       case 2 :///1
		  gotoxy(xc+3,yc+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(329.63);
		delay(n);
		nosound();
		 gotoxy(xc+3,yc+2);
		textcolor(4);
		cprintf("");
		break;

		 case 3:  //sa - m  2
	gotoxy(xc+6,yc+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(246.99);
		delay(n);
		nosound();
		 gotoxy(xc+6,yc+2);
			textcolor(4);
		cprintf("");
		break;
		 case 4:  //sa - m   3
       gotoxy(xc+9,yc+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(196.00);
		delay(n);
		nosound();
		 gotoxy(xc+9,yc+2);
			textcolor(4);
		cprintf("");
		break;
		 case 5:  //sa - m    4
       gotoxy(xc+12,yc+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(146.83);
		delay(n);
		nosound();
		 gotoxy(xc+12,yc+2);
			textcolor(4);
		cprintf("");
		break;
		//////////////////
		 case 6:  //sa - m     5
		gotoxy(xc+4,yc+6);
	       textcolor(450);
		 cprintf("%c",14);
		sound(110.00);
		delay(n);
		nosound();
		 gotoxy(xc+4,yc+6);
			textcolor(4);
		cprintf("");
		break;
		 case 7:  //sa - m      6
			gotoxy(xc+10,yc+6);
		  textcolor(450);
		 cprintf("%c",14);
		sound(82.41);
		delay(n);
		nosound();
		 gotoxy(xc+10,yc+6);
			textcolor(4);
		cprintf("");
		break;
		 case 8:  //sa - m       7
		gotoxy(xc+3,yc+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(9000);
		delay(n);
		nosound();
		 gotoxy(xc+3,yc+10);
			textcolor(4);
		cprintf("");
		break;
		 case 9:  //sa - m        8
       gotoxy(xc+6,yc+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(14000);
		delay(n);
		nosound();
		 gotoxy(xc+6,yc+10);
			textcolor(4);
		cprintf("");
		break;
		 case 10:  //sa - m        9
       gotoxy(xc+9,yc+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(12500);
		delay(n);
		nosound();
		 gotoxy(xc+9,yc+10);
			textcolor(4);
		cprintf("");
		break;
		 case 11:  //sa - m         0
		  gotoxy(xc+12,yc+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(12000);
		delay(n);
		nosound();
		 gotoxy(xc+12,yc+10);
		textcolor(4);
		  cprintf("");
		break;

		//////////
	  case 59:  //sa - m         f1
		 gotoxy(xe+3,ye+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(196);
		delay(n);
		nosound();
		 gotoxy(xe+3,ye+2);
		textcolor(4);
		  cprintf("");
		break;
	 case 60:  //sa - m        f2
		 gotoxy(xe+6,ye+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(293);
		delay(n);
		nosound();
		 gotoxy(xe+6,ye+2);
		textcolor(4);
		  cprintf("");
		break;
	 case 61:  //sa - m        f3
		 gotoxy(xe+9,ye+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(440);
		delay(n);
		nosound();
		 gotoxy(xe+9,ye+2);
		textcolor(4);
		  cprintf("");
		break;

     case 62:  //sa - m        f4
		 gotoxy(xe+12,ye+2);
		  textcolor(450);
		 cprintf("%c",14);
		sound(659.3);
		delay(n);
		nosound();
		 gotoxy(xe+12,ye+2);
		textcolor(4);
		  cprintf("");
		break;
    case 63:  //sa - m        f5
		 gotoxy(xe+3,ye+6);
		  textcolor(450);
		 cprintf("%c",14);
		sound(1047);
		delay(n);
		nosound();
		 gotoxy(xe+3,ye+6);
		textcolor(4);
		  cprintf("");
		break;
       case 64:  //sa - m        f6
		 gotoxy(xe+6,ye+6);
		  textcolor(450);
		 cprintf("%c",14);
		sound(880);
		delay(n);
		nosound();
		 gotoxy(xe+6,ye+6);
		textcolor(4);
		  cprintf("");
		break;
      case 65:  //sa - m        f7
		 gotoxy(xe+9,ye+6);
		  textcolor(450);
		 cprintf("%c",14);
		sound(175);
		delay(n);
		nosound();
		 gotoxy(xe+9,ye+6);
		textcolor(4);
		  cprintf("");
		break;
      case 66:  //sa - m        f8
		 gotoxy(xe+12,ye+6);
		  textcolor(450);
		 cprintf("%c",14);
		sound(130);
		delay(n);
		nosound();
		 gotoxy(xe+12,ye+6);
		textcolor(4);
		  cprintf("");
		break;
       case 67:  //sa - m        f9
		 gotoxy(xe+3,ye+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(523);
		delay(n);
		nosound();
		 gotoxy(xe+3,ye+10);
		textcolor(4);
		  cprintf("");
		break;
      case 68:  //sa - m        f10
		 gotoxy(xe+6,ye+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(860);
		delay(n);
		nosound();
		 gotoxy(xe+6,ye+10);
		textcolor(4);
		  cprintf("");
		break;
    case 41:  //sa - m
		 gotoxy(xe+9,ye+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(523);
		delay(n);
		nosound();
		 gotoxy(xe+9,ye+10);
		textcolor(4);
		  cprintf("");
		break;
     case 57:  //sa - m        " "
		 gotoxy(xe+12,ye+10);
		  textcolor(450);
		 cprintf("%c",14);
		sound(415);
		delay(n);
		nosound();
		 gotoxy(xe+12,ye+10);
		textcolor(4);
		  cprintf("");
		break;
       case 1 :

	     cout<<" Exit--- ";
	     getch();
	     exit(1);
	     } //switch
	  }//while
	} //main

//GETKEY ////////////////////////////////////////
	void getkey1()
	  {
	  union REGS ii,oo;
	  // wait till a key is hit
	  while(!kbhit());
	  ii.h.ah = 0; //service number
	  int86(22,&ii, &oo); //issue interrupt
	  scab = oo.h.ah;
	  asci = oo.h.al;
	  }
//////////////////////////////////////////////////
