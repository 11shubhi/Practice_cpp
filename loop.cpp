#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    a++;// if we don't want to the dispalyed value
    for(int i=a;i<20;i++)//don't i++ in count it will be jumped sequence .//
    {
        
        cout<<i<<endl;
    }

return 0;
}