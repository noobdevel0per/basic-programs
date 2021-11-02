#include <iostream>
using namespace std;

int main(){
    char input;
    cin>>input;
            if(input == 'a'|| input == 'e'|| input == 'i'|| input == 'o'|| input == 'u'
    ||input == 'A'|| input == 'E'|| input == 'I'|| input == 'O'|| input == 'U' ){
        cout<<"vowel";
    }
    else if
        ((input >= 'a' && input<= 'z')|| (input >= 'A' && input<= 'Z'))
    {
        cout<<"consonant";
    }
    return 0;
}