#include "DegreePlan.h"
#include <iostream>
#include <vector>
/*
DegreePlan::DegreePlan()
{
  major = "";
}
*/
DegreePlan::DegreePlan(std::string maj, std::vector<Course> a)
{
  major = maj;
  courseVector = a; 
}

DegreePlan::~DegreePlan()
{
}

void DegreePlan::SetMajor(std::string maj)
{
  major = maj;
}

std::string DegreePlan::GetMajor()
{
  return major;
}

void DegreePlan::PrintDegreePlan()
{
  std::cout << "Degree Plan for " << major << std::endl << std::endl;
  for(size_t i = 0; i < courseVector.size(); i++)
  {
    std::cout << courseVector[i].GetCourseName() << " - " << courseVector[i].GetCourseDescription() << std::endl;  
  }
  std::cout << std::endl;
}