#include <iostream>
using namespace std;

int main()
{
    //int a;
    //cout<<"Enter the value of a"<<endl;
    //cin>>a;
    //a++;// if we don't want to the dispalyed value
    //for(int i=a;i<100;i++)//don't i++ in count it will be jumped sequence .//
    //{
    //    
    //    cout<<i<<endl;
    //    if(i==8)
    //    {
    //        break;//stop the exceution of code and print the result till it.
    //    }
    //    //continue example
       int j=1;
      do
        {   

             
             if (j==5){
               j++;
                continue;
            }
            cout<<j<<endl;
            j++;
            
           
            

        }while (j<=10);
        
       
    //}

return 0;
}