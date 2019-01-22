// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;

	Savings_Account savings{ "Kyle", 100, 0.05 };
	cout << savings << endl;

	Account *trust = new Trust_Account("James");
	cout << *trust << endl;

	Account *p1 = new Checking_Account("Larry", 10000);
	Account *p2 = new Savings_Account("Moe", 1000);
	Account *p3 = new Trust_Account("Curly");

	std::vector<Account *> accounts{ p1,p2,p3 };

	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 2000);

	display(accounts);

	delete p1;
	delete p2;
	delete p3;

	system("pause");

    
    return 0;
}

