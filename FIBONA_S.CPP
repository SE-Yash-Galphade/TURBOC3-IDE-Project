#include<iostream.h>
#include<conio.h>
int fib(int);
void main(){
	int a, b, sum;
	clrscr();
	cout<<"Enter a Number for Fibonacci Series: ";
	cin>>a;
	a=b;
	sum=fib(b);

	cout<<"The sum of fibonacci terms: "<<sum;
}
int fib(int m){
	int a=0, b=1, c, sum;
	for(;m>0;m--){
		c=a+b;
		sum=sum+c;
		cout<<c;
		a=b;
		b=c;
	}
	return(sum);
}