#pragma once
#include <stdio.h>

//���������� ��������
class ProjectManagement {
public:
    virtual void manageProject() = 0; // ����� ��� ���������� ��������
};

class Testing {
public:
    virtual void spendTesting() = 0; // ����� ��� ���������� ������������
};
