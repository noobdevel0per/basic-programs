#include <iostream>
using namespace std;
int main(){
    int number,reversed,sum = 0,temp;
    cout<<"Enter a number ";
    cin>>number;
    temp = number;
    while (number>0)
    {
        reversed = number%10; 
        sum = (sum*10)+reversed;
        number = number/10;
    }
    if(temp == sum)
        cout<<"Number is palindrome";
    else
        cout<<"Not a palindrome number";
    return 0;
}