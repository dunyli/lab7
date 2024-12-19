#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//���������
class PetStoreService {
public:
    virtual void  doService() = 0;
    // ����� ����������� ����� ��� ��������� �������� ������
    virtual string getServiceName() = 0;

    // ����� ����������� ����� ��� ��������� ���� ������
    virtual int getServicePrice() = 0;

    // ����� ����������� ����� ��� ����������� ���������� �� ������
    virtual void displayServiceInfo() = 0;
};
