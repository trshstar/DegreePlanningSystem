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
    double gpa;
    DegreePlan* studentDegreePlan;
    std::vector <Course> coursesTaken;
    std::vector <char> grades;
  public:
    Student(std::string name, int year, double apg, DegreePlan* degree, std::vector <Course> taken, std::vector<char> grd);
    ~Student();
    std::string GetStudentName();
    std::string GetMajorOfStudent();
    int GetGradYear();
    void PrintStudentInfo();
};

#endif