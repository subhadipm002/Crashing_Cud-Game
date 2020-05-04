  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h>


//void main()
void box4()
  {
  int x1,x2,y1,y2,i,j,k,l,m,n,o,p,x3,x4,y3,y4;
// clrscr();
    x1=18;
    y1=5;
    x2=62;
    y2=14;
    {
    gotoxy(22,3);
    textattr(30);
    cprintf(":::Its the Ultimate Rocking Piano:::");
     }
     textcolor(14);
    gotoxy(x1,y1); cprintf("É");
    gotoxy(x1,y2); cprintf("È");
    gotoxy(x2,y1);  cprintf("»");
    gotoxy(x2,y2);  cprintf("¼");

    gotoxy(x1,y1+3);
    for(int ab=x1+1;ab<=x2;ab++)
    {
    textcolor(14);
    cprintf(":");

    }
     gotoxy(x1,y1+6);
    for(int ba=x1+1;ba<=x2;ba++)
    {
     textcolor(14);
    cprintf(":");
    }
    ///////////// for maki9ng keys

   gotoxy(x1+4,y1+1);
   cout<<"";
    gotoxy(x1+8,y1+1);
   cout<<"";
    gotoxy(x1+12,y1+1);
   cout<<"";
    gotoxy(x1+16,y1+1);
   cout<<"";
    gotoxy(x1+20,y1+1);
   cout<<"";
    gotoxy(x1+24,y1+1);
   cout<<"";
    gotoxy(x1+28,y1+1);
   cout<<"";
    gotoxy(x1+32,y1+1);
   cout<<"";
    gotoxy(x1+36,y1+1);
   cout<<"";
    gotoxy(x1+40,y1+1);
   cout<<"";
//////////////////////////////////////////////
   gotoxy(x1+4,y1+7);
   cout<<"";
    gotoxy(x1+8,y1+7);
   cout<<"";
    gotoxy(x1+12,y1+7);
   cout<<"";
    gotoxy(x1+16,y1+7);
   cout<<"";
    gotoxy(x1+20,y1+7);
   cout<<"";
    gotoxy(x1+24,y1+7);
   cout<<"";
    gotoxy(x1+28,y1+7);
   cout<<"";
    gotoxy(x1+32,y1+7);
   cout<<"";
    gotoxy(x1+36,y1+7);
   cout<<"";
    gotoxy(x1+40,y1+7);
   cout<<"";
/////////////////////////////////////////////////
 gotoxy(x1+6,y1+4);
 cout<<"";
  gotoxy(x1+12,y1+4);
   cout<<"";
    gotoxy(x1+18,y1+4);
   cout<<"";
    gotoxy(x1+24,y1+4);
   cout<<"";
    gotoxy(x1+30,y1+4);
   cout<<"";
    gotoxy(x1+36,y1+4);
   cout<<"";

/////////////////////////////////////////////////////////////
    for(i=x1+1;i<x2;i++)
    {
    gotoxy(i,y1);
    textcolor(14);
    cprintf("Í");

    }
     for(j=y1+1;j<y2;j++)
     {
     gotoxy(x1,j);
       textcolor(14);
     cprintf("%c",19);
     }
      for(k=x1+1;k<x2;k++)
      {
      gotoxy(k,y2);
      textcolor(14);
       cprintf("Í");
      }
       for(l=y1+1;l<y2;l++)
       {
       gotoxy(x2,l);
       textcolor(14);
       cprintf("%c",19);
       }

     //  number area
    x3=65;
    y3=5;
    x4=80;
    y4=17;
      textcolor(14);
    gotoxy(x3,y3); cprintf("É");
    gotoxy(x3,y4); cprintf("È");
    gotoxy(x4,y3);  cprintf("»");
    gotoxy(x4,y4);  cprintf("¼");

     for(int gm=x3+1;gm<x4;gm++)
    {
    gotoxy(gm,y3);
    textcolor(14);
    cprintf("Í");

    }
     for(int el=y3+1;el<y4;el++)
     {
     gotoxy(x3,el);
       textcolor(14);
     cprintf("%c",19);
     }
      for(int jy=x3+1;jy<x4;jy++)
      {
      gotoxy(jy,y4);
      textcolor(14);
       cprintf("Í");
      }
       for(int sl=y3+1;sl<y4;sl++)
       {
       gotoxy(x4,sl);
	 textcolor(14);
       cprintf("%c",19);
       }
    gotoxy(x3+1,y3+4);
    for(int we=x3+1;we<x4;we++)
    {
    textcolor(14);
    cprintf(":");

    }
     gotoxy(x3+1,y3+8);
    for(int fg=x3+1;fg<x4;fg++)
    {
     textcolor(14);
    cprintf(":");
    }
    // designing...
    gotoxy(x3+3,y3+2);
 cout<<"";
  gotoxy(x3+6,y3+2);
 cout<<"";
    gotoxy(x3+9,y3+2);
 cout<<"";
  gotoxy(x3+12,y3+2);
 cout<<"";
  gotoxy(x3+3,y3+10);
 cout<<"";
  gotoxy(x3+6,y3+10);
 cout<<"";
    gotoxy(x3+9,y3+10);
 cout<<"";
  gotoxy(x3+12,y3+10);
 cout<<"";

  gotoxy(x3+4,y3+6);
 cout<<"";
  gotoxy(x3+10,y3+6);
 cout<<"";
 ////////////////////
 ////
   int x5=1;
   int  y5=5;
   int  x6=16;
   int  y6=17;
      textcolor(14);
    gotoxy(x5,y5); cprintf("É");
    gotoxy(x5,y6); cprintf("È");
    gotoxy(x6,y5);  cprintf("»");
    gotoxy(x6,y6);  cprintf("¼");

     for(int mg=x5+1;mg<x6;mg++)
    {
    gotoxy(mg,y5);
    textcolor(14);
    cprintf("Í");

    }
     for(int le=y5+1;le<y6;le++)
     {
     gotoxy(x5,le);
       textcolor(14);
     cprintf("%c",19);
     }
      for(int jj=x5+1;jj<x6;jj++)
      {
      gotoxy(jj,y6);
      textcolor(14);
       cprintf("Í");
      }
       for(int ll=y5+1;ll<y6;ll++)
       {
       gotoxy(x6,ll);
	 textcolor(14);
       cprintf("%c",19);
       }
    gotoxy(x5+1,y5+4);
    for(int ew=x5+1;ew<x6;ew++)
    {
    textcolor(14);
    cprintf(":");

    }
     gotoxy(x5+1,y5+8);
    for(int gf=x5+1;gf<x6;gf++)
    {
     textcolor(14);
    cprintf(":");
    }
    // designing...
    gotoxy(x5+3,y5+2);
 cout<<"";
  gotoxy(x5+6,y5+2);
 cout<<"";
    gotoxy(x5+9,y5+2);
 cout<<"";
  gotoxy(x5+12,y5+2);
 cout<<"";
  gotoxy(x5+3,y5+10);
 cout<<"";
  gotoxy(x5+6,y5+10);
 cout<<"";
    gotoxy(x5+9,y5+10);
 cout<<"";
  gotoxy(x5+12,y5+10);
 cout<<"";

  gotoxy(x5+3,y5+6);
 cout<<"";
  gotoxy(x5+6,y5+6);
 cout<<"";
  gotoxy(x5+9,y5+6);
 cout<<"";
  gotoxy(x5+12,y5+6);
 cout<<"";
       getch();



       }