#include <iostream>
using namespace std;
int main(){
	string str = "GeeksforGeeks";
	string rev = string(str.rbegin(),str.rend());
	cout<<rev<<endl;
	return 0;
}
