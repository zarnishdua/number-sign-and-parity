#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number :";
	cin>>n;
	if(n==0)
	cout<<"Zero";
	else if(n%2==0 && n>0)
	cout<<"Positive even number ";
	else if(n%2==0 && n<0)
	cout<<"Negative even number ";
	else if(n%2!=0 && n>0)
	cout<<"Positive odd number ";
	else 
	cout<<"Negative odd number ";
	return 0;
}
