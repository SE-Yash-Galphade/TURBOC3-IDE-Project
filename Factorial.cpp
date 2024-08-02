#include<iostream>
using namespace std;

int main(){
	int n, fact=1;
	cout<<"Enter a Number: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"The Factorial is "<<fact;
}
