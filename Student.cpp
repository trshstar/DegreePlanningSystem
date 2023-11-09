#include "Student.h"
#include <vector>
#include <iostream>

Student::Student(std::string name, int year, DegreePlan* degree, std::vector <Course> taken)
{
  studentName = name;
  gradYear = year;
  studentDegreePlan = degree;
  coursesTaken = taken;
}

Student::~Student()
{
}

std::string Student::GetStudentName()
{
  return studentName;
}

int Student::GetGradYear()
{
  return gradYear;
}

void Student::PrintStudentInfo()
{
  std::cout << "Student Information" << std::endl << std::endl;
  std::cout << "**Name: " << studentName << std::endl;
  std::cout << "**Major: " << studentDegreePlan->GetMajor() << std::endl;
  std::cout << "**Graduation Year: " << gradYear << std::endl;
  std::cout << "**Courses Taken: " << std::endl;
  if(coursesTaken.empty())
  {
    std::cout << "    " << "None" << std::endl; 
  } else 
  {
    for(auto course : coursesTaken)
    {
      std::cout << "    " << course.GetCourseName() << " - " << course.GetCourseDescription() << std::endl;
    }
  }
  std::cout << std::endl;
}