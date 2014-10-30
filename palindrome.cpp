#include <iostream>
using namespace std;
bool palindrome(string x){
	int a = x.length()-1;
	if (x.length() == 0 || x.length() == 1){ return 1;}
	else if(x.substr(0,1) == x.substr(a,1)){

		cout << x << endl;

	return  palindrome(x.substr(1,x.length()-2));
		
	}
	return false;
	
}
int main()
{
	string x;
	bool j = false;
	cin >> x;
	j = palindrome(x);
	
	if (j == true){cout << "YAY!!" << endl;}
	else {cout << "You Suck!" << endl;}	

	return 0;
}
