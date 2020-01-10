#include<iostream>
#include<string>
using namespace std;

int main()
{
    string N;
    float GPA;

    cout<<"What is your name?: ";
    cin>>N;

    cout<<"What is your GPA?: ";
    cin>>GPA;

    if (GPA>=3.50)
    {
        cout<<N<<" Inw Jrim Jrim!!!";
    }
    else
    {
        cout<<"Try harder, "<<N<<"!!!";
    }

    return 0;
    
}