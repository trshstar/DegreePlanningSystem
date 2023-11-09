#ifndef COURSE_H
#define COURSE_H

#include <iostream>

class Course
{
  private:
    std::string courseName;
    std::string courseDescription;
  public:
    Course(std::string cName, std::string cDescription);
    ~Course();
    void SetCourseName(std::string name);
    void SetCourseDescription(std::string description);
    std::string GetCourseName();
    std::string GetCourseDescription();
};

#endif