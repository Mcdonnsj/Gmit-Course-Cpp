
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


    return 0;
}

