#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include "design1.cpp";
#include "box2.cpp";


void main()
 {
 textbackground(16);
 clrscr();
 sound(3520.00);
 delay(400);
 nosound();
    // 1st box..
    box2();

    // for designing..
    design1();     // it contain both box making and curser controlling..

  getch();
 }



