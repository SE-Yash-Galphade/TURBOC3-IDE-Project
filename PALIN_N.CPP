#include<iostream>
#include<conio.h>
using namespace std;

int pal(int);
int main(){
	int n, a, sum;
	cout<<"Enter a Number: ";
	cin>>n;
	a=n;
	sum=pal(n);
	if(sum==a)
		cout<<"Palindrome";
	else
		cout<<"Not a Palindrome";
}
int pal(int m){
	int n, r, sum;
	for(;m>0;){
		r=m%10;
		sum=(sum*10)+r;
		m=m/10;
	}
	return(sum);
}
