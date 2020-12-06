    #include <iostream>
    using namespace std;
    #include "functions.h"



    int main()
{

    Labinfo () ;//Q1

    largestnumber();//Q2

    Numberrangecheck();//Q3

    //Question4
     cout<< "\n********************Question#4*****************************\n";
    cout<< "\nWould you like to go back to College to better yourself?"<<endl;
    cout<< "Please answer the following question by entering  Y for Yes or N for NO and press enter"<<endl;
    char answer;
    cin>>answer;
    switch (answer){
    case 'Y':{
    cout << "Thats Good it is never to late to go back to college"<<endl;
    break;}
    case 'N':{
    cout<< "Thats Ok College is not for everyone"<<endl;
    break;}
    default:{
    cout<<"You must answer either Y/N and be aware it is case sensitive please use capital Y/N"<<endl;
        }
}
    cout <<"\nThank you for taking the time to answer the Question\n\n"<<endl;


    circlearea ();//Q5

    rectanglearea();//Q6

    TempHumidity ();//Q7

//Q8**********************************************************************
    cout<< "\n********************Question#8*****************************\n";
    cout<<" Question 8 loop function 0 to 120 in 1 meter steps\n"<<endl;
    int counter=0;
    while (counter <120){
    cout<<counter<<"--> Meters."<<endl;
    counter=counter+1;
}

    Tempconvert();//Q9

    Evennumbers ();//Q10

    oddnumbers();//11

    OddNumbers2() ;//Q12

    RandomNumberGenerator();//Q13

    CodeRepair();//Q14

    PrintingFinisedx10x3way();//Q15



     return 0;
}
