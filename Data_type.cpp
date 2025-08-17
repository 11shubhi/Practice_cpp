#include <iostream>
using namespace std;
int global =11;

int main()
{ int global=2002;//local varible alwaysholds priority over global varible.
    int a=4;
    int b=5,c=3;//combination of same type of variable.
    char letter ='a';//char hold single value 
    cout<<"Value of integer datatype a"<<a<<   "Value of interger datatype b \n" <<b<<"value of c "<<c; //blacklash n (\n) shows line break 
    cout<<letter<<"\n";
    cout<<global;

    
return 0;
}