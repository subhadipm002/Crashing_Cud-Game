  #include<iostream.h>
  #include<conio.h>


void box1()
//void main()
  {

  int x1,x2,y1,y2,i,j,k,l,m,n,o,p;
 clrscr();
    x1=12;
    y1=1;
    x2=60;
    y2=25;


    gotoxy(x1,y1); cout<<"É";
    gotoxy(x1,y2); cout<<"È";
    gotoxy(x2,y1); cout<<"»";
    gotoxy(x2,y2); cout<<"¼";
    for(i=x1+1;i<x2;i++)
    {
    gotoxy(i,y1);

    cout<<"Í";

    }
     for(j=y1+1;j<y2;j++)
     {
     gotoxy(x1,j);
     cout<<"º";
     }
      for(k=x1+1;k<60;k++)
      {
      gotoxy(k,y2);
      cout<<"Í";
      }
       for(l=y1+1;l<25;l++)
       {
       gotoxy(
       x2,l);
       cout<<"º";
       }
      ///////////
    ///////// Making of obstacles


   gotoxy(25,12);   // Blk- 1.
//   int blk1[15];

    for(int s=5;s<21;s++)
    {
  textcolor(s);
  //  blk1[s]=s;
   cprintf("Û");
  // cprintf("%c",s);
  // cout<<char(s);
    }
     gotoxy(16,8);  // Blk-2
    // int blk2[26];
       for(int t=1;t<20;t++)
    {
   textcolor(t);
   // blk2[t]=t;
  //  cprintf("%c",t);
 //  cout<<char(t);
 cprintf("Û");
    }
     gotoxy(40,6); // blk-3.
    ///  int blk3[20];
       for(int u=3;u<19;u++)
    {
   textcolor(u);
  ///  blk3[u]=u;
   cprintf("Û");
 //   cprintf("%c",u);
  // cout<<char(u);
    }
     gotoxy(20,21);  // blk -4.
//      int blk4[17];
       for(int v=6;v<24;v++)
    {
    textcolor(v);
    //blk4[v]=v;
      cprintf("Û");
 //   cprintf("%c",v);
 //  cout<<char(v);
    }
     gotoxy(44,18);  // blk - 5.
//      int blk5[15];
       for(int w=2;w<18;w++)
    {
   textcolor(w);
 //   blk5[w]=w;
  cprintf("Û");
  //  cprintf("%c",w);
 //  cout<<char(w);
    }

     gotoxy(44,11);  // blk -  6.
   ///   int blk6[17];
       for(int x=1;x<17;x++)
    {
    textcolor(x);
///    blk6[x]=x;
   // cprintf("%c",x);
    cprintf("Û");
   //  cout<<char(x);
    }
     gotoxy(19,16);  // blk - 7.
   ///   int blk7[20];
       for(int y=2;y<22;y++)
    {


     textcolor(y);
      cprintf("Û");
 ///   blk7[y]=y;
//    cprintf("%c",y);
//cout<<char(y);
    }
     gotoxy(40,9);  // blk - 8.
   ///   int blk8[20];
       for(int ty=1;ty<7;ty++)
    {
     textcolor(ty);
 ///   blk7[y]=y;
    cprintf("%c",ty);
    cprintf("%c",ty);
//cout<<char(y);
    }


  //// Fake designing....////////////////////////////////////

  gotoxy(43,22);
  textcolor(170);
  cprintf("");

    gotoxy(43,14);
  textcolor(225);
  cprintf("");

     gotoxy(16,6);
       textcolor(229);
  cprintf("");

    gotoxy(16,14);
      textcolor(388);
  cprintf("");

 ///project();


       getch();



       }