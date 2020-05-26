//
// Created by kayd on 26/5/20.
//

#ifndef FACADE_BANK_H
#define FACADE_BANK_H

#include "accountManager.h"

class bank {
private:
    int amount;
    void setAmount();
    accountManager facaded;
public:
    void initAtm();
};


#endif //FACADE_BANK_H
