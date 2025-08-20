#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"What is your age"<<endl;
    cin>>age;

    switch (age)
    {
        case 18:
            cout<<"You can vote"<<endl;
            break;//do not excute other cases
        case 17:
            cout<<"You can not vote"<<endl;
            break;
    
        default:
        cout<<"Switch Demo end"<<endl;
        break;
    }
return 0;
}