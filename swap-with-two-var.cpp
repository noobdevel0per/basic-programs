#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b :";
    cin>>a;
    cin>>b;
    cout<<"Number before swap "<<a<<" "<<b<<endl;
    a = a*b;
    b = a/b;
    a = a/b;
    cout<<"Number after swap "<<a<<" "<<b<<endl;
    return 0;
}