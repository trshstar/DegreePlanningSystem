#include "Student.h"
#include <vector>
#include <stdlib.h>
#include <iostream>

Student::Student(std::string name, int year, double apg, DegreePlan* degree, std::vector <Course> taken, std::vector<char> grd)
{
  studentName = name;
  gradYear = year;
  gpa = apg;
  studentDegreePlan = degree;
  coursesTaken = taken;
  grades = grd;
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

std::string Student::GetMajorOfStudent()
{
  return studentDegreePlan->GetMajor();
}

void Student::PrintStudentInfo()
{
  std::cout.precision(2);
  std::cout << "Student Information" << std::endl << std::endl;
  std::cout << "**Name: " << studentName << std::endl;
  std::cout << "**Major: " << studentDegreePlan->GetMajor() << std::endl;
  std::cout << "**GPA: " << gpa << std::endl;
  std::cout << "**Graduation Year: " << gradYear << std::endl;
  std::cout << "**Courses Taken: " << std::endl;
  if(coursesTaken.empty())
  {
    std::cout << "    " << "None" << std::endl; 
  } else 
  {
    size_t x = 0;
    for(auto course : coursesTaken)
    {
      std::cout << grades[x] << "    " << course.GetCourseName() << " - " << course.GetCourseDescription() << "    " << std::endl;
      x++;
    }
  }
  std::cout << std::endl;
}