

#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED

#endif // FOOTBALL_CLUB_H_INCLUDED


class footballclub{

private:

    string clubname;
    string district;
    string stripcolour;

public:

    footballclub( string clubname, string district,string stripcolour ) {
    this->clubname=clubname;
    this->district=district;
    this->stripcolour=stripcolour;
    }

void printInfo(){
}

string getclubname(){
return clubname;
}

string getdistrict(){
return district;
}

string getstripcolour(){
return stripcolour;
}

void setclubname (string clubname){
}

void setdistrict (string district){
}

void setstripColour (string stripcolour){
}
//void printInfo(){
 //cout << FC.getclubname()<<" Football Club\n\n"<<FC. getdistrict()<<" Team Colours \n\n"<<"*****"<<FC.getstripcolour()<<"*******"<< endl;}
};
