#include <iostream>
#include "labinfo.h"
using namespace std;

void Labinfo(){             //Using Classes
cout<<"Shane"<<endl;
cout<<"Lab using classes"<<endl;
}
//Class for storing labinformation
class labinfo{


public:                 //Public section
    string name;
    string labId;
    string day;
    string month;
    int year;
    void printinfo (){//Function to Print
    cout<<name<<"\n"<<labId<<"\n"<<day<<"\n"<<month<<"\n"<<year<<endl;}
};
int main()
{
        Labinfo();
        labinfo info;
        info.name = "Shane McDonnell";
        info.labId = "Lab4";
        info.day = "Friday 12th";
        info.month ="Feb";
        info . year = 2021;
        info.printinfo();


        return 0;
}
