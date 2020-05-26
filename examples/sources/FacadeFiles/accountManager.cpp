//
// Created by kayd on 26/5/20.
//

#include "../../headers/FacadeFIles/accountManager.h"
#include <iostream>
using namespace std;

void accountManager::addFunds(int amount) {
    balance += amount;

}

void accountManager::getBalance() {
    cout << "your balance has ";
    cout << balance << endl;
}

void accountManager::getFunds(int amount) {
    if (amount<=balance){
        balance -= amount;
        cout << "Successful Transaction" <<endl;
    }else{
        cout << "Unsuficient balance:";
        getBalance();
    }
}
