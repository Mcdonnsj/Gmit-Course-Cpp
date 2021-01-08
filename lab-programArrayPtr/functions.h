 int Array[6];
    int x;
    int ScalarNum1;


void LabInfo() { //Lab 3 Question 1
    cout << "Shane McDonnell\n";
    cout << "Lab 3\n" << endl;}

void Numbers_Into_Array() { //Lab 3 Question2
    cout<<"Please Enter in 6 Numbers:\n\n";
    for (int n=0;n<6;n++){
    cout<<"Please Enter number and press Enter Key to continue:\n";
    cin>>Array[n];
    if(Array[n]>100||Array[n]<0){
    n=x;
    cout<<"The numbers entered must be between 0 and 100\n";}
    }
    cout<<"You have input the array";
    for (int n=0;n<6;n++){
    cout<<Array[n]<<",";
}
}

void ArrayAddress() { //Lab 3 Question 3

    cout<<"The address for each number of the array is { ";
    for (int n=0;n<6;n++){
    if (n==5){
    cout<<&Array[n]<<" }";
    }
    else{
    cout<<&Array[n]<<" , ";
        }
    }}

void Scaler(){//Lab3 Question 4
    cout<<"\nEnter 1 scalar number and press Enter key to continue \n\n ";
    cin>>ScalarNum1;
    cout<<endl;
}

void ArrayByReference(int* ArrayByRef,int n,int* ScalarNum1Ref){//Lab3 Question 5
    for (int i=0;i<n;i++){
    Array[i]=(Array[i])*(ScalarNum1);
    }
    cout<<endl;
}

void Tree () { //Lab3 Question 7
    char cTree;
    int iSize;
    int iSpace;
    int iChars;
    cout << "Enter the number of rows you would like in the tree ";
    cin >> iSize;
    cout << "Enter sybol you would like to use";
    cin >> cTree;
    for(int i = 0; i < iSize; i++){
    iSpace = (iSize-i)-1;
    iChars = (2*i)+1;
    string sSpace(iSpace, '_');
    string sTree(iChars, cTree);
    cout <<sSpace<<sTree<<sSpace<<endl;
    }}
