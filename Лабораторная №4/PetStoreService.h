#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Интерфейс
class PetStoreService {
public:
    virtual void  doService() = 0;
    // Чисто виртуальный метод для получения названия услуги
    virtual string getServiceName() = 0;

    // Чисто виртуальный метод для получения цены услуги
    virtual int getServicePrice() = 0;

    // Чисто виртуальный метод для отображения информации об услуге
    virtual void displayServiceInfo() = 0;
};
