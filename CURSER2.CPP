#include<stdio.h>
#include<string.h>
#include<process.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<dos.h>
#include "box1.cpp";
#include<stdlib.h>  // for randomize..

int scan;
int ascii;
//// Making of score..
struct score
 {
 char pname[20];
 int score;
 }g1;


/////////////////////Main/////////////////

//void main()
void curser2()
  {
  box1();

     ///////// Making of obstacles

//////////////////   From box to others curser controll ...
   int rcl,sc=0;
   void getkey(void);
    int r=3,c=13,x,y,stop;
  while(1)
   {
   getkey();
   randomize();
   rcl=(random(15)+1);
   textcolor(rcl);

   switch(scan)
       {
       case 80:  //down arrow key
		// moving the curser
	      sound(3520.00);
	      delay(30);
	      nosound();
	      gotoxy(c,++r);
	      cprintf("²");
	     ////////////Scoring
	      if(c>13&&c<31&&r==8||c>24&&c<41&&r==12||c>39&&c<56&&r==6||c>19&&c<38&&r==21||c>43&&c<60&&r==18||c>43&&c<60&&r==11||c>18&&c<39&&r==16)
	      {

	    if(rcl==1||rcl==2||rcl==3||rcl==4||rcl==6||rcl==7||rcl==8||rcl==9||rcl==10||rcl==11||rcl==12||rcl==13||rcl==14||rcl==15||rcl==17||rcl==18||rcl==19||rcl==20||rcl==21||rcl==22)
	     {
	       sc=sc+2;
	      }
	     else
	      sc=sc-1;
	     } ///////////
	     // gotoxy(5,1);
	    //  cout<<sc;
	       if(r==24)
	       {
	       gotoxy(c,r);
	       cout<<" ";
	       }
		if(r==3)
	       {
	       gotoxy(c,r);
	       cout<<" ";
	       }

	       gotoxy(c,r-1);
	       cout<<" ";

		if(r==24)
		{
		r=3;
		}

		break;

	case 72:  //up arrow key
	sound(3520.00);
	      delay(30);
	      nosound();
      gotoxy(c,--r);

      cprintf("²");
      //// Scoring
	  if(c>13&&c<31&&r==8||c>24&&c<41&&r==12||c>39&&c<56&&r==6||c>19&&c<38&&r==21||c>43&&c<60&&r==18||c>43&&c<60&&r==11||c>18&&c<39&&r==16)
	      {
	    if(rcl==1||rcl==2||rcl==3||rcl==4||rcl==6||rcl==7||rcl==8||rcl==9||rcl==10||rcl==11||rcl==12||rcl==13||rcl==14||rcl==15||rcl==17||rcl==18||rcl==19||rcl==20||rcl==21||rcl==22)
	     {
	       sc=sc+2;
	      }
	     else

	      sc=sc-1;
	     }
	    // }
	  //   gotoxy(5,1);
	    //  cout<<sc;
	  /////////////////////////////
		if(r==3)
		{
		gotoxy(c,r);
		cout<<" ";
		}

		gotoxy(c,r+1);
		cout<<" ";
		if(r==3)
		{
		r=23;
		}

		break;

	 case 75:  //left arrow key
	   sound(3520.00);
	      delay(30);
	      nosound();
		/// Scoring
	       if(c>13&&c<31&&r==8||c>24&&c<41&&r==12||c>39&&c<56&&r==6||c>19&&c<38&&r==21||c>43&&c<60&&r==18||c>43&&c<60&&r==11||c>18&&c<39&&r==16)
	      {
	       sc=sc-1;
	      }
	     else
	      sc=sc;
	    // gotoxy(5,1);
	    //  cout<<sc;
      //////////////////////////////
		gotoxy(--c,r);
		cprintf("²");
		/////////////


		if(c==13)
		{
		gotoxy(c,r);
		cout<<" ";
		}
		gotoxy(c+1,r);
		cout<<" ";
	       if(c==13)
	       {
	       c=58;
	       }
	    break;

	  case 77:  //right arrow key
	   sound(3520.00);
	      delay(30);
	      nosound();
		gotoxy(++c,r);
		cprintf("²");
		 if(c>13&&c<31&&r==8||c>24&&c<41&&r==12||c>39&&c<56&&r==6||c>19&&c<38&&r==21||c>43&&c<60&&r==18||c>43&&c<60&&r==11||c>18&&c<39&&r==16)
	      {
	       sc=sc-1;
	      }
	     else
	      sc=sc;
	    // gotoxy(5,1);
	    //  cout<<sc;
		/////////////////

		if(c==59)
		{
		gotoxy(c,r);
		cout<<" ";
		}
	       if(c==14)
		{
		gotoxy(c,r);
		cout<<" ";
		}
		gotoxy(c-1,r);
		cout<<" ";
		if(c==59)
		{
		c=14;
		}
		break;
	   case 1 :
	   /// Saving score..
		  g1.score=sc;
		  fstream file;
		  file.open("cudscore.txt",ios::app);
		  cout<<"Enter your Name:";
		  cin>>g1.pname;
		  file.write((char*)&g1,sizeof(g1));
		  file.close();
		  clrscr();

  /////////////// Displaying score....
  cout<<"Your Score:"<<sc<<"\n";
  getch();

  cout<<" Exit--- "       ;
	     exit(1);

	     } //switch
	  }//while
	} //main

//GETKEY ////////////////////////////////////////
	void getkey()
	  {
	  union REGS ii,oo;
	  // wait till a key is hit
	  while(!kbhit());

	  ii.h.ah = 0; //service number

	  int86(22,&ii, &oo); //issue interrupt

	  scan = oo.h.ah;

	  ascii = oo.h.al;
	  }
