#include <iostream>
using namespace std;
#include <string>
#include "functions.h"

int main(){

    cout<<"Task 1:\n\n";

    LabInfo(); //Lab 3 Question1

    cout<<"\n\nTask 2.\n\n";

    Numbers_Into_Array();//Lab 3 Question2



    cout<<"\n\nTask 3:\n\n";

    ArrayAddress ();//Lab 3 Question3



    cout<<"\n\nTask 4:\n\n";

    Scaler ();//Lab 3 Question4


    cout<<"\n\n**************Question 5**************\n\n";

     ArrayByReference(&Array[0],6,&ScalarNum1);//Lab 3 Question5

    cout<<"\n\n**************Question 6**************\n\n";

    ArrayAddress (); //Question6


    cout <<"\n\n**************Question 7**************\n\n"<<endl;

    Tree();//Lab 3 Question7




return 0;
}

