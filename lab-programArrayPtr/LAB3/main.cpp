#include <iostream>

using namespace std;
#include "lab_3.h"

int main()
{
    Labinfo();

    int x[6];
    for(int i=0;i<6;++i){
        cin>>x[i];
    }


    for(int i=0;i<6;++i){
        cout<<x[i];
    }
    return 0;
}
