#include<iostream.h>
#include<conio.h>
char pattern(char);
void main(){
	char a, b;
	clrscr();
	cout<<"Enter an Alphabet: ";
	cin>>a;
	cout<<"The Pattern is: \n";
	a=pattern(a);
}
char pattern(char a){
	char i, j;
	for(i='A';i<=a;i++){
		for(j='A';j<=i;j++){
			cout<<i;
		}
		cout<<endl;
	}
}