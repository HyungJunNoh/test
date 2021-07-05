#for test

#include "account.h"

using namespace std;

account::account(string a, int b)
//class name, method name
    : account_number(a), balance(b) {
}

string account::get_id() const {
    return this->account_number;
}

int account::get_balance() const{
    return this->balance;
}

void account::transfer_to(account &other, int amt) {
    this->balance -= amt; //this is always pointer
    other.balance += amt;  //"other." becaused it was declared as reference
}