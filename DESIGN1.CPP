 #include<iostream.h>
 #include<conio.h>
 #include<dos.h>
 #include<stdio.h>
 #include<string.h>
 #include "curser2.cpp";
 #include<fstream.h>
 #include "piano.cpp";

 void design1()
//void main()
 {
// clrscr();
  char pass1[20],pass2[20];
  char name[20];
  int x1=12,y1=1,y2=25,i,j,k,l,a=1,n,d,p;
  x:
	y1=y1+1;
	for(a=x1+1;a<=59;a++)
	{
	 gotoxy(a,y1);
	 textcolor(1);
	 cprintf("!");
	 delay(5);
	 }
	if(y1<y2-1)
	 goto x;
     // bio data documents..

	  gotoxy(15,2);
	  textcolor(4);
	  cprintf("++::Welcome to the Advance 'GAME' World::++");
	  gotoxy(19,3);
	  textcolor(2);
	  cprintf("Brought you by 'Master'- Subhadip &&\n");
	  gotoxy(26,4);
	   cprintf("-Souma && -Washif\n");
	   gotoxy(13,5);
	   textcolor(3);
	   cprintf("Enter your /secret/ name(###):");
		 cscanf("%s",name);
	   sound(4186.01);
	      delay(100);
	      nosound();

	   cout<<"\n";
	   gotoxy(13,6);

	   cprintf("Enter your password:");

	       cscanf("%s",pass1);
	   sound(1760.00);
	      delay(100);
	      nosound();

	   gotoxy(13,7);
	   textcolor(7);
	   cprintf("Recheck your password:");
	   cscanf("%s",pass2);
	   sound(3520.00);
	      delay(100);
	      nosound();

	   d=strcmp(pass1,pass2);
	   if(d==0)

	    {
	    gotoxy(13,9);
	    textcolor(6);
	    cprintf("Congrats..your password granted");

	       gotoxy(13,11);
	       textcolor(2);

	       cprintf("What do you want to play:");
	       gotoxy(15,12);
	       textcolor(4);
	       cprintf(" 1.Crashing Cud.##   2.Piano.  3.Others");
	       gotoxy(13,13);
	       textcolor(2);
	       cprintf("Enter your choice (1/2):");
       //	       fflush(stdin);	    //For refresh
		 scanf("%d",&p);
		 sound(3520.00);
	      delay(100);
	      nosound();
	       //cin>>p;
	       switch(p)
	     {
	      case 1: cout<<"\n";
		      int q=2;
		      for(int l=15;l<58;l++)
		      gotoxy(18,17);
		      textcolor(436);
		      cprintf("Loading...");
		      for(l=14;l<58;l++)
		     {
		      gotoxy(l,19);
		      textcolor(4);
		      cprintf("Û");
		     }
		    for(l=14;l<58;l++)
		     {
		    gotoxy(l,19);
		    textcolor(4);
		     cprintf("²");
		      q=q+2;
		      delay(300);
		      gotoxy(18,21);
		      textcolor(22+l);
		     cprintf("%d",q);
		     textcolor(22);
		     cprintf("%c completed",37);
		     sound(5587.5);
	      delay(100);
	      nosound();
		    }
		    gotoxy(18,21);
		     textcolor(22);
		     cprintf("100%c completed",37);
		     sound(4186.01);
	      delay(300);
	      nosound();
		     clrscr();
		     cout<<" :::::::::::::::::::::::::::::::Rules ::::::::::::::::::::::::::::::\n\n";
cout<<"   Through your curser try to cut ( Û ) these types of blocks whose colour        exactly matches with the colour of  curser..\n";
cout<<"   Don't  cut the designs other than ( Û ) ..\n\n";
cout<<"   You have to cut only through up and down keys ..Cutting with left and right    keys will deduct your 1 point.\n\n";
cout<<"   You will get +2 point for every correct matching..\n\n";
cout<<"   #####################  GOOD LUCK  ################################.....";
getch();
sound(1760.00);
	      delay(400);
	      nosound();
clrscr();

///  Starting of game...

   curser2();
		     break;

      case 2:      cout<<"\n";

		     int qs=2;
		      for(int lx=15;lx<58;lx++)
		      gotoxy(18,17);
		      textcolor(436);
		      cprintf("Loading...");
		      for(lx=14;lx<58;lx++)
		     {
		      gotoxy(lx,19);
		      textcolor(4);
		      cprintf("Û");
		     }
		    for(lx=14;lx<58;lx++)
		     {
		    gotoxy(lx,19);
		    textcolor(4);
		     cprintf("²");
		      qs=qs+2;
		      delay(300);
		      gotoxy(18,21);
		      textcolor(22+lx);
		     cprintf("%d",qs);
		     textcolor(22);
		     cprintf("%c completed",37);
		     sound(5587.5);
	      delay(100);
	      nosound();
		    }
		    gotoxy(18,21);
		     textcolor(22);
		     cprintf("100%c completed",37);
		     sound(4186.01);
	      delay(300);
	      nosound();
		     clrscr();
		   piano();
		      break;
     case 3: cout<<"\n";
     gotoxy(18,17);
     textcolor(450);
     cprintf("Sorry web connection failed..");
     getch();
     break;

	      default:cout<<"\n";
		       gotoxy(18,17);
		      textcolor(436);
		      cprintf("Matching failed..Try right one");
		      break;
		    }
		 }
		    else
		    {
		    gotoxy(13,10);
		    textcolor(6);
		    cprintf("Sorry!!You are not known to this system");
		    }

  getch();
 }


