  #include<iostream.h>
  #include<conio.h>


  void box2()
 // void main()
  {
  int x1,x2,y1,y2,i,j,k,l,m,n,o,p;
// clrscr();
    x1=12;
    y1=1;
    x2=60;
    y2=25;


    gotoxy(x1,y1); cout<<"�";
    gotoxy(x1,y2); cout<<"�";
    gotoxy(x2,y1); cout<<"�";
    gotoxy(x2,y2); cout<<"�";
    for(i=x1+1;i<x2;i++)
    {
    gotoxy(i,y1);
    cout<<"�";

    }
     for(j=y1+1;j<y2;j++)
     {
     gotoxy(x1,j);
     cout<<"�";
     }
      for(k=x1+1;k<60;k++)
      {
      gotoxy(k,y2);
      cout<<"�";
      }
       for(l=y1+1;l<25;l++)
       {
       gotoxy(
       x2,l);
       cout<<"�";
       }




  //     getch();



       }