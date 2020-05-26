cmake_minimum_required(VERSION 3.13)
project(abstract_factory_ej)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstract_factory_ej main.cpp sources/AbstractFactoryFiles/Car.cpp sources/AbstractFactoryFiles/CarFactory.cpp headers/ObserverFIles/Subject.h sources/ObserverFiles/Subject.cpp sources/ObserverFiles/ConcreteSubject.cpp headers/ObserverFIles/ConcreteSubject.h sources/ObserverFiles/ConcreteObserver.cpp headers/ObserverFIles/ConcreteObserver.h)
