#include<iostream.h>
#include<conio.h>
int main(){
	clrscr();
	int profit, cp, sp, loss, profit_per, loss_per;
	cout<<"Enter the CP: ";
	cin>>cp;
	cout<<"Enter the SP: ";
	cin>>sp;

	if(cp<=sp){
		profit = sp - cp;
		profit_per = (profit/cp)*100;
		cout<<"The Profit is Rs. "<<profit<<endl;
		cout<<"The Profit Percentage is "<<profit_per<<" % "<<endl;
	}
	else{
		loss = cp - sp;
		loss_per = (loss/cp)*100;
		cout<<"The Loss is Rs. "<<loss<<endl;
		cout<<"The Loss Percentage is "<<loss_per<<" % "<<endl;
	}
}