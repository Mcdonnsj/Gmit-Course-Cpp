
//Question 1
    void Labinfo () {
    cout<<"Shane McDonnell\n";
    cout<< "Lab#2";}

//Question 2
    void largestnumber(){
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


//Question 3
    void Numberrangecheck(){
    cout<<"Enter a number"<<endl;
    float x;
    cin>>x;
    if (x >100)
    cout<< "number is out of range it can not be grater than 100"<<endl;
    else if (x<1)
    cout<<"Number entered is out of range it can not be less than 1"<<endl;
    else
    cout<<x<<endl;
        }

        //Question 5***************************************************************************************
/*. Make the function that can take in the radius value calculate the area of a circle and
return the value.
float PI=3.14159;
Area formula: PI * radius * radius*/



void circlearea (){
    float PI=3.14159;
    float radius;
    float area;


    cout<<"please enter the radius of a circle in mm to calculate the area"<<endl;
    cin>> radius;
    area = PI*radius*radius;
    cout<<"The area of the circle = "<<area<<"mm squared"<<endl;}

//Question 6***************************************************************************************************
    void rectanglearea (){
    float area,length,with;

    cout<<"Please enter the the length of the rectangle in mm";
    cin>>length;
    cout<<"Now enter the with of the rectangle im mm";
    cin>>with;
    area = length*with;
    cout<<"The area of the rectangle = "<< area <<"mm squared";}


//Question7***************************************************************************************************
    void TempHumidity (){
    float temp,humidity;
    cout<<"please input Temperature";
    cin>>temp;
    cout<<"Please input Humidity";
    cin>>humidity;
    if (temp>95)
    cout<<"Warning Temp over 95 Degrees";
    else if (humidity >=90)
    cout<<"Warning Humoidity 90 or above";
    else
    cout<< "Temp and Humidity are within Normal operating conditions";}

//question8******************************************************************************************************

//Question 9 ******************************************************************************************************

void Tempconvert(){
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

    //Question 10******************************************************************************
void Evennumbers (){
    cout<<"Even numbers from 0 to 1000 are:";
    for (int i = 0; i <= 1000; i += 2)
    cout<<"-("<<i<<")-";
}

//Q11*******************************************************************************************
void oddnumbers(){
int num,limit;


}
