#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class account {
    std::string account_number;
    int balance;
public:
    account(std::string account_number, int balance=0); //mention defalt value in only one file. this is method
    std::string get_id() const;
    int get_balance() const;
    void transfer_to(account &, int);

};

#endif