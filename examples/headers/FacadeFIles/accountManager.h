#ifndef FACADE_ACCOUNTMANAGER_H
#define FACADE_ACCOUNTMANAGER_H


class accountManager {
private:
    int balance = 420;

public:
    void getBalance();
    void addFunds(int amount);
    void getFunds(int amount);


};


#endif //FACADE_ACCOUNTMANAGER_H
