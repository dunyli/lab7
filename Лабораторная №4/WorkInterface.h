#pragma once
#include <stdio.h>

//Интерфейсы действий
class ProjectManagement {
public:
    virtual void manageProject() = 0; // Метод для управления проектом
};

class Testing {
public:
    virtual void spendTesting() = 0; // Метод для проведения тестирования
};
