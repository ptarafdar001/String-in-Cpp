// string convert - upper to lower and lower to upper
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

	string str = "PrabiR taraFdaR";
	
	//convrt into upper case
	for(int i=0; i<str.size(); i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i] -= 32;
		}
	}
	cout<< str << endl;
	
	//convert into lower case
	for(int i=0; i<str.size(); i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i] += 32;
		}
	}
	cout<< str << endl;
	
	// inbuilt function for string conversion
	
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout<< str <<endl;
	
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout<< str <<endl;
	
	return 0;
}
