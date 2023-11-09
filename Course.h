#ifndef COURSE_H
#define COURSE_H

#include <iostream>

class Course
{
  private:
    std::string courseName;
    std::string courseDescription;
    std::string f2f;
    std::string online;
    std::string campus;
    std::string sesh;
  public:
    Course(std::string cName, std::string cDescription, std::string face, std::string on, std::string camp, std::string session);
    ~Course();
    void SetCourseName(std::string name);
    void SetCourseDescription(std::string description);
    std::string GetCourseName();
    std::string GetCourseDescription();
    std::string GetF2F();
    std::string GetOnline();
    std::string GetCampus();
    std::string GetSesh();
};

#endif