//
// Created by haziel on 16/3/20.
//

#include "../../headers/ObserverFIles/ConcreteSubject.h"

ConcreteSubject::ConcreteSubject(){
}

string ConcreteSubject::getName() {
    return name;
}

//
void ConcreteSubject::setName(string name) {
    this->name = name;
    //notifica a los observers que cambio el name
    notifyObserver(name);
}

