#include "Course.h"
#include <iostream>

Course::Course(std::string cName, std::string cDescription)
{
  courseName = cName;
  courseDescription = cDescription;
}

Course::~Course()
{
}

void Course::SetCourseName(std::string name)
{
  courseName = name;
}

void Course::SetCourseDescription(std::string description)
{
  courseDescription = description;
}

std::string Course::GetCourseName()
{
  return courseName;
}

std::string Course::GetCourseDescription()
{
  return courseDescription;
}