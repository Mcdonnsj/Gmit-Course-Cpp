    #include <iostream>
    using namespace std;
    #include "functions.h"
    int main()
{
    Tempconvert();
    Evennumbers();
    oddnumbers();
//Question4
    cout<<"\n\n Q4 Using switch statment"<<endl;

    cout<< "\nWould you like to go back to Collage to better yourself?"<<endl;
    cout<< "Please answer the following question by entering  Y for Yes or N for NO and press enter"<<endl;

    char answer;
    cin>>answer;

    switch (answer){
    case 'Y':{
    cout << "Thats Good it is never to late to go back to collage"<<endl;
    break;}
    case 'N':{
    cout<< "Thats Ok Collage is not for everyone"<<endl;
    break;}
    default:{
    cout<<"You must answer either Y/N and be aware it is case sensitive please use capital Y/N"<<endl;
        }
}
    cout <<"\nThank you for taking the time to answer the Question\n\n"<<endl;





//Q8**********************************************************************
    cout<<" Question 8 loop function 0 to 120 in 1 meter steps\n"<<endl;
    int counter=0;
    while (counter <120){
    cout<<counter<<"--> Meters."<<endl;
    counter=counter+1;
}
     return 0;
}
