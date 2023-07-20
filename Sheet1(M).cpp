#include<iostream>
using namespace std;
int main()
{

char data;
cin>> data;

if(data>=48 && data<=57)
{
cout << "IS DIGIT"<<endl;
}
else
{
    if(data>=65 && data<=90)
    {    
    cout << "ALPHA"<<endl;    
    cout << "IS CAPITAL"<<endl;
    }
    else if(data>=97 && data<=122)
    {
        cout << "ALPHA"<<endl;
        cout << "IS SMALL"<<endl;
    }
}


    return 0;
}
