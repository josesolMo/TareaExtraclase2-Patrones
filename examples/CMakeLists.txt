cmake_minimum_required(VERSION 3.13)
project(examples)

set(CMAKE_CXX_STANDARD 14)

add_executable(examples main.cpp sources/AbstractFactoryFiles/Car.cpp sources/AbstractFactoryFiles/CarFactory.cpp headers/ObserverFIles/Subject.h sources/ObserverFiles/Subject.cpp sources/ObserverFiles/ConcreteSubject.cpp headers/ObserverFIles/ConcreteSubject.h sources/ObserverFiles/ConcreteObserver.cpp headers/ObserverFIles/ConcreteObserver.h)
