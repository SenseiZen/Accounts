#ifndef _CHEQUING_ACCOUNT_H_
#define _CHEQUING_ACCOUNT_H_
#include "Account.h"

class Chequing_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Chequing_Account &account);
private:
    static constexpr const char *def_name = "Unnamed Chequing Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_withdrawal_rate = 0.0;
protected:
    double withdrawal_rate;
public:
    Chequing_Account(std::string name = def_name, double balance = def_balance, double withdrawal_rate = def_withdrawal_rate);    
    bool withdraw(double amount);
    // Inherits the Account::withdraw methods
};

#endif // _CHEQUING_ACCOUNT_H_