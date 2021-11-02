#include <iostream>
using namespace std;
int main(){
    int number,i;
    bool isPrime = true;
    cout<<"Enter a prime number :";
    cin>>number;
    //0 and 1 are not prime
    if(number == 0 || number ==1){
        isPrime = false;
    }
    else{
        for ( i = 2; i <= number/2; i++){
            if(number%i == 0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<number<<" " << "This is prime number"<<endl;
    }
    else{
        cout<<number<<" "<<"This is not prime number"<<endl;
    }
    return 0;
}