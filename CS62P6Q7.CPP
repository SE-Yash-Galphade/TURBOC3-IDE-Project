#include<iostream.h>
#include<conio.h>
int fib(int);
void main(){
	int a, b;
	clrscr();
	cout<<"Enter the limit for fibonacci series: ";
	cin>>a;
	b=fib(a);
}
int fib(int x){
	int a=0, b=1, c=0, i;
	for(i=0;i<x;i++){
		cout<<c<<" ";
		c=a+b;
		a=b;
		b=c;
	}
}