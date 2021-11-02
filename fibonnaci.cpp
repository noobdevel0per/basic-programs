#include <iostream>
using namespace std;
int main(){
    int n1= 0,n2 = 1,n3,i,num;
    cout<<"Enter the number of elements "<<endl;
    cin>>num;
    //printing 0 & 1
    cout<<"Series :"<<"\n";
    cout<<n1<<" "<<n2<<" "; 
    //i++ return value after increment
    //and ++i return before increment
    for (i = 2; i < num; i++) 
        {    
            n3=n1+n2;    
            cout<<n3<<" ";    
            n1=n2;    
            n2=n3;    
        }    
    return 0;
}