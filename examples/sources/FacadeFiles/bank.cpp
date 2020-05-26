

#include "../../headers/FacadeFIles/bank.h"
#include "../../headers/FacadeFIles/accountManager.h"
#include <iostream>

using namespace std;

void bank::setAmount() {
    cout << "Please write the desired amount"<< endl;
    cin>> amount;
}

void bank::initAtm() {

    int selection;
    do {
        cout << endl;
        cout << "1) check funds"<< endl;
        cout << "2) Withdraw"<< endl;
        cout << "3) Deposit"<< endl;
        cout << "4) Exit"<< endl;
        cin >> selection;
        switch (selection) {
            case 1:
                facaded.getBalance();
                break;
            case 2:
                setAmount();
                facaded.getFunds(amount);
                break;
            case 3:
                setAmount();
                facaded.addFunds(amount);
                break;
            case 4:
                break;
            default:
                cout << "Unvalid selection" << endl;
        }
    }while (selection !=4);

}


