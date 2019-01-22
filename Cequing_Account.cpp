#include "Chequing_Account.h"

Chequing_Account::Chequing_Account(std::string name, double balance, double withdrawal_rate)
    : Account {name, balance}, withdrawal_rate{withdrawal_rate} {
}

bool Chequing_Account::withdraw(double amount) {
    amount += amount + 1.50;
    return Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Chequing_Account &account) {
    os << "[Chequing_Account: " << account.name << ": " << account.balance << ", $" << account.withdrawal_rate << "]";
    return os;
}
