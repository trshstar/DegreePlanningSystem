#include "Course.h"
#include <iostream>

Course::Course(std::string cName, std::string cDescription, std::string face, std::string on, std::string camp, std::string session)
{
  courseName = cName;
  courseDescription = cDescription;
  f2f = face;
  online = on;
  campus = camp;
  sesh = session;
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

std::string Course::GetF2F()
{
  return f2f;
}

std::string Course::GetOnline()
{
  return online;
}

std::string Course::GetCampus()
{
  return campus;
}

std::string Course::GetSesh()
{
  return sesh;
}