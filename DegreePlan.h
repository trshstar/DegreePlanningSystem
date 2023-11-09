#ifndef DEGREEPLAN_H
#define DEGREEPLAN_H
#include <iostream>
#include <vector>
#include "Course.h"


class DegreePlan
{
  private:
    std::string major;
    std::vector<Course> courseVector;
  public:
    //DegreePlan();
    DegreePlan(std::string maj, std::vector<Course> a);
    ~DegreePlan();
    void SetMajor(std::string maj);
    std::string GetMajor();
    void PrintDegreePlan();
};

#endif