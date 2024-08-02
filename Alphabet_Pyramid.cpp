#include<iostream>
#include<conio.h>
using namespace std;
main(){
	char i, j;
	char a;
	cout<<"Enter an Alphabet: ";
	cin>>a;
	
	for(i='A';i<=a;i++){
		for(j='A';j<=i;j++){
			cout<<j;
		}
		cout<<endl;		//^_^
	}
}
