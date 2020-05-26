
#ifndef __io__
#define __io__
#include <iostream>
using namespace std;
#endif

#include "sources/AbstractFactoryFiles/CarFactory.cpp"

#define SIMPLE_CAR 1
//#define LUXURY_CAR 1

int main() {

#ifdef SIMPLE_CAR
    CarFactory* factory = new SimpleCarFactory;

#elif LUXURY_CAR
    CarFactory* factory = new LuxuryCarFactory;

#endif

    Car *car = factory->buildWholeCar();
    car->printDetails();

    return 0;
}



/*
#include <iostream>
#include <list>
#include "headers/ObserverFIles/ConcreteSubject.h"
#include "headers/ObserverFIles/ConcreteObserver.h"

using namespace std;
int main() {
    //se crea el objeto observado
    ConcreteSubject objObservado;

    //se agregan observers a la lista de observers
    objObservado.addObserver(new ConcreteObserver(objObservado));
    objObservado.addObserver(new ConcreteObserver(objObservado));
    objObservado.addObserver(new ConcreteObserver(objObservado));

    //se modifica el name del objeto observado por ender todos los objetos son notificados
    objObservado.setName("Mario");
    cout<<"-----------------------------------------"<<endl;
    //nuevamente se modifica el name del objeto observado por ender todos los objetos son notificados otra vez
    objObservado.setName("Haziel");
    return 0;
}
*/