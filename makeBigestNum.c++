// from the biggest number from the numeric string
// ex:	'53214' -----> '54321'

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string str = "498723659";
	
	sort(str.begin(), str.end(), greater<int>());
	cout<<str<<endl;
	
	return 0;
} 
