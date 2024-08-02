#include <iostream.h>
#include <conio.h>
#include <string.h>
class BankAccount {
    char nameOfDepositor[30];
    int accountNumber;
    char accountType;
    float balance;
	public:
	    BankAccount() {
	        accountNumber = 0;
	        accountType = 'S';
	        balance = 0.0;
	    }
	    BankAccount(const char* name, int accNum, char accType, float initialBalance) {
	        strncpy(nameOfDepositor, name, sizeof(nameOfDepositor));
	        setAccountNumber(accNum); 
	        accountType = accType;
	        balance = initialBalance;
	    }
	    void setAccountNumber(int accNum) {
	        accountNumber = accNum;
	    }
	    void deposit(float amount) {
	        balance += amount;
	    }
	    void withdraw(float amount) {
	        if (balance - amount >= 1000.0) {
	            balance -= amount;
			} 
			else {
	            cout << "Insufficient balance. Cannot withdraw." << endl;
	        }  }
	    void alertMessage() {
	        if (balance < 1000.0) {
	            cout << "Low balance alert! Your account balance is below the minimum required balance." << endl;
	        } }
	    void displayAccountDetails() {
	        cout << "Name of Depositor: " << nameOfDepositor << endl;
	        cout << "Account Number: " << accountNumber << endl;
	        cout << "Account Type: " << accountType << endl;
	        cout << "Balance: " << balance << endl;
}	};
void main() {
    clrscr();
    BankAccount accounts[5];
    for (int i = 0; i < 5; i++) {
        char name[30];
        int accNum;
        char accType;
        float initialBalance;
        cout << "Enter details for Account Holder " << i + 1 << ":" << endl;
        cout << "Name of Depositor: ";
        cin.getline(name, 30);
        cout << "Account Number: ";
        cin >> accNum;
        cout << "Account Type (S for Savings, C for Checking): ";
        cin >> accType;
        cout << "Initial Balance: ";
        cin >> initialBalance;
        cin.ignore();

        accounts[i] = BankAccount(name, accNum, accType, initialBalance);
    }
    for (i = 0; i < 5; i++) {
        accounts[i].deposit(1000);
        accounts[i].withdraw(500);
        accounts[i].alertMessage();
    }
    cout << "\nAccount Details for All Account Holders:" << endl;

    for (i = 0; i < 5; i++) {
        accounts[i].displayAccountDetails();
        cout << endl;
    }}

