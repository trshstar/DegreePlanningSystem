#ifndef STUDENT_H
#define STUDENT_H

#include "DegreePlan.h"
#include <iostream>
#include <vector>

class Student
{
  private:
    std::string studentName;
    int gradYear;
    DegreePlan* studentDegreePlan;
    std::vector <Course> coursesTaken;
  public:
    Student(std::string name, int year, DegreePlan* degree, std::vector <Course> taken);
    ~Student();
    std::string GetStudentName();
    int GetGradYear();
    void PrintStudentInfo();
};

#endif