#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account {name, balance, int_rate},  num_withdrawals{ 0 } {
}

bool Trust_Account::deposit(double amount) {
	if(amount >= 5000.0) {
		amount += 50;
	}
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if(amount > (balance * .2) || num_withdrawals >= 3) {
		return false;
	}
	else {
		++num_withdrawals;
		return Savings_Account::withdraw(amount);
	}
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate 
        << "%, withdrawals: " << account.num_withdrawals <<  "]";
    return os;
}
