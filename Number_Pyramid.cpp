#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a, i, j, count=1;
	cout<<"Enter a Number: ";
	cin>>a;
	
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			cout<<j;
			count++;
		}
		cout<<endl;
	}
}
