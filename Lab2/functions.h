#include <cstdlib>//Had to add library to use rand function in Q13

    //Question 1********************
    void Labinfo () {
    cout<< "\n********************Question#1*****************************\n";
    cout<<" \n                 Shane McDonnell                  \n";
    cout<< "\n                      Lab#2                         \n";}

    //Question 2********************
    void largestnumber(){
    cout<< "\n********************Question#2*****************************\n";
    float x,y;
    cout<<"Enter the 1st number"<<endl;
    cin>>x;
    cout<<"Enter the 2nd number"<<endl;
    cin>>y;
    if(x>y)
    cout<<"the largest number is "<< x <<endl;
    else
    cout<< "The largest number is "<< y <<endl;
        }


    //Question 3********************
    void Numberrangecheck(){
    cout<< "\n********************Question#3*****************************\n";
    cout<<"Enter a number"<<endl;
    float x;
    cin>>x;
    if (x >100)
    cout<< "number is out of range it can not be greater than 100"<<endl;
    else if (x<1)
    cout<<"Number entered is out of range it can not be less than 1"<<endl;
    else
    cout<<"The Number  " <<x<<"  is within range 1 and 100 "<<endl;
        }

    //Question 5********************
    void circlearea (){
    cout<< "\n********************Question#5*****************************\n";
    float PI=3.14159;
    float radius;
    float area;


    cout<<"please enter the radius of a circle in meters to calculate the area"<<endl;
    cin>> radius;
    area = PI*radius*radius;
    cout<<"The area of the circle = "<<area<<"meters squared"<<endl;}

    //Question 6********************
    void rectanglearea (){
    cout<< "\n********************Question#6*****************************\n";
    float area,length,with;
    cout<<"Please enter the the length of the rectangle in meters";
    cin>>length;
    cout<<"Now enter the with of the rectangle in meters";
    cin>>with;
    area = length*with;
    cout<<"The area of the rectangle = "<< area <<"meters squared";}


    //Question 7********************
    void TempHumidity (){
    cout<< "\n********************Question#7*****************************\n";
    float temp,humidity;
    cout<<"please input Temperature";
    cin>>temp;
    cout<<"Please input Humidity";
    cin>>humidity;
    if (temp>95)
    cout<<"\n******WARNING**WARNING****** Temp over 95 Degrees\n";
    if (humidity >=90)
    cout<<"\n******WARNING**WARNING****** Humoidity 90 or above\n";
    else
    cout<< "Temp and Humidity are within Normal operating conditions";
    }
    //question 8 is in mains*************

    //Question 9********************
    void Tempconvert(){
    cout<< "\n********************Question#9*****************************\n";
    float fahrenheit, celsius;
    cout << "\n\nEnter the temperature in Celsius to convert to fahrenheit\n: ";
    cout<<"--------------------------------------------------------\n";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius = " << fahrenheit << endl;
    float frh, cel;
	cout << "\n\n Enter temperature in Fahrenheit to be converted to Celsius :\n";
	cout << "---------------------------------------------------\n";
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Celsius = " << cel << endl;

    }

    //Question 10********************
    void Evennumbers (){
    int a;
    cout<< "\n********************Question#10*****************************\n";
    cout<< " Enter any number and press Enter key to see all even numbers from 1 to 1000: ";
    cin>>a;
    cout<<"Even numbers from 0 to 1000 are:";
    for (int i = 0; i <= 1000; i += 2)
    cout<<"-("<<i<<")-";
}

    //Question 11********************
    void oddnumbers(){
    cout<< "\n********************Question#11*****************************\n";
    int num1,num2;
    cout<<"Enter the first integer : ";
    cin>> num1;
    cout<<"Enter the second integer : ";
    cin>> num2;
    if (num1%2!=0){
    cout<<"The number "<< num1 <<" is a odd number!\n";}
    else{
    cout<<"The number "<<num1<<" you have entered is an even number\n";}
    if (num2%2!=0){
    cout<<"The number "<< num2 <<" is a odd number!\n";}
    else{
    cout<<"The number "<<num2<<" you have entered is an even number";}


}

    //Question 12********************

    void OddNumbers2(){
    cout<< "\n********************Question#12*****************************\n";
    int i;
    for(i=0;i<=20;i++){
    i=i+1;
    cout<<i<< "\n";
       }
   }

    //Question 13********************
    void RandomNumberGenerator(){
    cout<< "\n********************Question#13*****************************\n";
    char a;
    cout<<"please press any Letter on the keyboard and press Enter key to generate 6 random numbers\n";
    cin>>a;
    int v1 = rand() % 100; // v1 in the range 0 to 99
    int v2 = rand() % 100 + 1; // v2 in the range 1 to 100
    int v3 = rand() % 30 + 1985; // v3 in the range 1985
    float v4 = rand()%1000;//v4 range 0 to 999
    float v5 =rand()%-500+3;//v5
    float v6 =rand()%-100*4;//v6
    cout<< " 1st Number "<< v1<<" 2nd Number "<<v2<< " 3rdNumber "<<v3<< " 4thNumber "<<v4<< " 5th Number "<<v5<< " 6th Number "<<v6<< "\n";
}
    //Question 14********************
    void CodeRepair(){
    cout<< "\n********************Question#14*****************************\n";
    /* Print the numbers 5 through 9: */
     int i=5;
    int grade;
    int count =0;
    while (i < 10){
    cout<<i;
    cout<< endl;
    i=i+1;}
    /* Finding the sum 1 + 2 + 3 + ... + 20 */
    int a= 1;
    int sum = 0;
    while (a <= 20)
{   sum = sum + a;
    a=a+1;}
    cout<<"The sum ="<<sum<<"\n";
    /* Average a list of grades terminated by -1 */
    sum = 0;
    count = 0;
    cout << "Enter grade (-1 to end): "; // prompt user for grade
    cin >> grade; // read grade
    while (grade != -1){
    sum = sum + grade;
    count = count  + 1;
    /* Get next grade */
    cout << "Enter grade (-1 to end): ";
    cin >> grade;}
    if (count > 0);
    cout << "Average is " << (double) sum / count<<"\n";

}
    //Question 15********************
    void PrintingFinisedx10x3way(){
    cout<< "\n********************Question#15*****************************\n";
    int i=1;
    while(i<=10){
    cout<<"Finished\n";
    i=i+1;}
    cout<<"\n";
    for(int a=1;a<=10;a++){
    cout<<"Finished\n\n";}
    i=1;
    do{
    cout<<"Finished\n";
    i=i+1;}
    while (i<=10);}



