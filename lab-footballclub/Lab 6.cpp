#pragma once
#include <iostream>


using namespace std;

#include "football_club.h"
#include "player.h"

int main()
{

    footballclub FC("Strikers", "Crosmolina","Red&White");
    player D ("Shane","McDonnell","centreBack",35300);
    D.printInfo();
    FC.printInfo();
    cout << FC.getclubname()<<" Football Club\n\n"<<FC. getdistrict()<<" Team Colours \n\n"<<"*****"<<FC.getstripcolour()<<"*******"<< endl;


    cout <<"\n\nPlayer Details\n\n";
    cout <<"  "<< D.getforename()<<D.getsurname()<< "\n  Plays  "<<  D.getposition()<< "  Contact #  " << D.getmobilenumber()<<endl;

 int maxsquad = 40;
 int teamsize = 15;

    playersquad[squadsize];
    for{int i=0; i<squadsize; ++i){
    player1[i].setmobilenumber{i};
    player1[i].setforename("MCD");
    player1[i].setDOB("80");

    obj.addplayer(player1[i],i){

    }
    }

    return 0;

   }
