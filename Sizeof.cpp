#include <iostream>
using namespace std;

int main(){
    float a=112.222;
    //*****Literals***** */
    cout<<"The Size of  122.222 " <<sizeof(112.22)<<endl;
    cout<<"The Size of  122.222f " <<sizeof(112.22f)<<endl;
    cout<<"The Size of  122.222l  " <<sizeof(112.22l)<<endl;
    cout<<"The Size of  122.222F  " <<sizeof(112.22F)<<endl;//'f and F' means float
    cout<<"The Size of  122.222L  " <<sizeof(112.22L)<<endl;//'l and L' means long double
    //***** Reference Varible***** */
    int b=233;
    int & x=b;
    cout<<b<<endl;
    //******Typecasting**** */
    int w=2;
    float y=33.44;
    cout<<w+y<<endl;
    cout<<w+(int)y<<endl;
    cout<<w+int(y)<<endl;
    
    return 0;

}