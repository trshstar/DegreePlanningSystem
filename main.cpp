#include <iostream>
#include <vector>
#include <string>
#include "Course.h"
#include "DegreePlan.h"
#include "Student.h"

namespace deg
{
    //CS COURSES FOR DEGREE PLAN
  Course cs1 = Course("COSC 1436", "Programming Fundamentals I", "MW 10:00am - 12:10pm", "X", "    All Campuses", "        8 week & 16 week");
  Course cs2 = Course("COSC 1437", "Programming Fundamentals II","MW 8:00am - 10:10pm ", "X", "    All Campuses", "        8 week & 16 week");
  Course cs3 = Course("COSC 2436", "Programming Fundamentals III", "N/A                 ", "X", "      Online", "            8 week & 16 week");
  Course cs4 = Course("COSC 2325", "Computer Organization",  "N/A                 ", "X", "      Online", "            8 week & 16 week");
  Course mat1 = Course("MATH 2413", "Calculus I", "TTh 10:00am - 12:10pm", "X", "  All Campuses", "        8 week & 16 week");

  //NURSING COURSES FOR DEGREE PLAN
  Course n1 = Course("RNSG 1105", "Nursing Skills I", "M 1:05pm - 2:30pm", "  N/A", "Central & South", "      8 week & 16 week");
  Course n2 = Course("RNSG 1301", "Pharmacology", "TTh 10:00am - 12:10pm", "N/A", "All Campuses", "       8 week & 16 week");
  Course n3 = Course("RNSG 2213", "Mental Health Nursing", "MW 8:00am - 9:25am", "N/A", "All Campuses", "         8 week & 16 week");
  Course n4 = Course("RNSG 2201", "Care of Children and Families","W 10:00am - 12:10pm", "N/A", "All Campuses", "        8 week & 16 week");
  Course n5 = Course("RNSG 2262", "Clinical Nursing Care of Children and Families","M 2:45pm - 4:00pm", "X", "   All Campuses", "            8 week & 16 week");

  //ENGINEERING COURSES FOR DEGREE PLAN
  Course eng1 = Course("ENGR 1201", "Introduction to Engneering", "MW 7:30am - 9:05am", "  X", "Generation Park & Central", "8 week & 16 week");
  Course eng2 = Course("ENGR 1304", "Engineering Graphics I", "Th 9:30am - 11:05am", " X", "Generation Park & Central", "8 week & 16 week");
  Course eng3 = Course("ENGR 2301", "Engineering Mechanics - Statics", "MW 2:30pm - 4:05pm", "  X", "    All Campuses", "        8 week & 16 week");
  Course eng4 = Course("ENGR 2305", "Electrical Circuits I", "MW 7:30am - 9:05am", " N/A", "Generation Park & Central", "8 week & 16 week");
  Course eng5 = Course("ENGR 2105", "Electrical Circuits I Laboratory", "MW 9:15am - 10:30am", "N/A", "Generation Park & Central", "8 week & 16 week");

  //ACCOUNTING COURSES FOR DEGREE PLAN
  Course acc1 = Course("ACCT 2301", "Principles of Financial Accounting", "F 7:30am - 9:05am", "   X", "   All Campuses", "        8 week & 16 week");
  Course acc2 = Course("ACNT 1329", "Payroll and Business Tax Accounting", "TTh 1:30pm - 3:00pm", " X", "   All Campuses", "        8 week & 16 week");
  Course acc3 = Course("ACNT 1311", "Introduction to Computerized Accounting", "W 12:30pm - 1:45pm", "  X", "All Campuses", "          8 week & 16 week");
  Course acc4 = Course("ACCT 2302", "Principles of Managerial Accounting", "MW 10:45am - 12:00pm", "X", "All Campuses", "             16 week");
  Course acc5 = Course("ACNT 1331", "Federal Income Tax: Individual", "M 10:30am - 11:45am", "X", "All Campuses", "              16 week");

  //GRAPHIC DESIGN COURSES FOR DEGREE PLAN
  Course grd1 = Course("ARTC 1325", "Introduction to Computer Graphics", "F 7:30am - 9:05am", "X", "Generation Park & Central", "8 week & 16 week");
  Course grd2 = Course("ARTV 1351", "Digital Video", "MW 7:30am - 9:05am", "X", "Generation Park & Central", "8 week & 16 week");
  Course grd3 = Course("ARTC 1302", "Digital Imaging I", "MW 1:30pm - 2:35pm", "X", "Generation Park & Central", "8 week & 16 week");
  Course grd4 = Course("ARTC 1327", "Typography", "MW 7:30am - 9:05am", "X", "Generation Park & Central", "8 week & 16 week");
  Course grd5 = Course("ARTC 1317", "Design Communication I", "MW 11:30am - 1:05pm", "X", "Generation Park & Central", "   16 week");
  
  //POPULATE VECTORS
  std::vector<Course> csCourses{cs1, cs2, cs3, cs4, mat1};
  std::vector<Course> nurCourses{n1, n2, n3, n4, n5};
  std::vector<Course> engCourses{eng1, eng2, eng3, eng4, eng5};
  std::vector<Course> accCourses{acc1, acc2, acc3, acc4, acc5};
  std::vector<Course> grdCourses{grd1, grd2, grd3,grd4, grd5};
  
  //CREATE DEGREE PLANS
  DegreePlan cs = DegreePlan("Comp Sci" , csCourses);
  DegreePlan nursing = DegreePlan("Nursing", nurCourses);
  DegreePlan engineering = DegreePlan("Engineering", engCourses);
  DegreePlan accounting = DegreePlan("Accounting", accCourses);
  DegreePlan graphicDesign = DegreePlan("Graphic Design", grdCourses);

  //CREATE STUDENTS
  DegreePlan* eng = &engineering;
  DegreePlan* compsci = &cs;
  DegreePlan* act = &accounting;
  DegreePlan* nurse = &nursing;
  DegreePlan* graphic = &graphicDesign;
  //TO OUTPUT MENU SELECTION
  std::vector <DegreePlan*> hold = {eng, compsci, act, nurse, graphic};
  std::vector <std::vector<Course> > cor{engCourses, csCourses, accCourses, nurCourses, grdCourses};
}

using namespace deg;

double CalcGpa(std::vector<char> s)
{
  double a = 4.0;
  double b = 3.0;
  double c = 2.0;
  double d = 1.0;
  double f = 0.0;
  double total = 0;
  double gpa;
  if(s.empty())
  {
    return 0.0;
  } else 
  {
  for(size_t j = 0; j < s.size(); j++)
  {
    switch(s[j])
    {
      case 'A':
        total += a;
        break;
      case 'B':
        total += b;
        break;
      case 'C':
        total += c;
      case 'D':
        total += d;
      case 'F':
        total += f;
    }
  }
  }
  gpa = total / s.size();
  return gpa;
}

std::vector<Student> init()
{ 

  
  std::vector<Student> students;
  
  std::vector<Course> s1_courses{eng1, eng2};
  std::vector<char> s1_grades{'A', 'B'};
  Student s1 = Student("Thaddeus Levy", 2025, CalcGpa(s1_grades), eng, s1_courses, s1_grades);
  students.push_back(s1);
  //STUDENT 1
  
  std::vector<Course> s2_courses{grd1, grd2, grd3, grd4};
  std::vector<char> s2_grades{'A', 'A', 'A', 'B'};
  Student s2 = Student("Aileen Beck", 2024, CalcGpa(s2_grades), graphic, s2_courses, s2_grades);
  students.push_back(s2);
  //STUDENT 2
  
  std::vector<Course> s3_courses;
  std::vector<char> s3_grades;
  Student s3 = Student("Laurie Munoz", 2027, CalcGpa(s3_grades), act, s3_courses, s3_grades);
  students.push_back(s3);
  //STUDENT 3
  
  std::vector<Course> s4_courses{n1, n2};
  std::vector<char> s4_grades{'A', 'A'};
  Student s4 = Student("Enzo England", 2025, CalcGpa(s4_grades),nurse, s4_courses, s4_grades);
  students.push_back(s4);
  //STUDENT 4

  std::vector<Course> s5_courses{cs1, cs2, cs3, cs4, mat1};
  std::vector<char> s5_grades{'A', 'A', 'B', 'C', 'B'};
  Student s5 = Student("Dora Branch", 2023, CalcGpa(s5_grades), compsci, s5_courses, s5_grades);
  students.push_back(s5);
  //STUDENT 5
  
  std::vector<Course> s6_courses{eng1, eng2, eng3, eng4, eng5};
  std::vector<char> s6_grades{'A', 'B', 'C', 'A', 'A'};
  Student s6 = Student("Safiyyah Carrillo", 2025, CalcGpa(s6_grades), eng, s1_courses, s1_grades);
  students.push_back(s6);
  //STUDENT 6
  
  std::vector<Course> s7_courses{grd1, grd2, grd3, grd4, grd5};
  std::vector<char> s7_grades{'A', 'A', 'A', 'B', 'A'};
  Student s7 = Student("Zeeshan Figueroa", 2023, CalcGpa(s7_grades), graphic, s7_courses, s7_grades);
  students.push_back(s7);
  //STUDENT 7
  
  std::vector<Course> s8_courses;
  std::vector<char> s8_grades;
  Student s8 = Student("Evan Tapia", 2027, CalcGpa(s8_grades), act, s8_courses, s8_grades);
  students.push_back(s8);
  //STUDENT 8
  
  std::vector<Course> s9_courses{n1, n2, n3, n4};
  std::vector<char> s9_grades{'C', 'C', 'B', 'C'};
  Student s9 = Student("Mattie Schmidt", 2025, CalcGpa(s9_grades), nurse, s9_courses, s9_grades);
  students.push_back(s9);
  //STUDENT 9

  std::vector<Course> s10_courses{cs1, cs2, cs3};
  std::vector<char> s10_grades{'C', 'D', 'F'};
  Student s10 = Student("Guy Dillon", 2023, CalcGpa(s10_grades), compsci, s10_courses, s10_grades);
  students.push_back(s10);
  //STUDENT 10

  std::vector<Course> s11_courses{eng1};
  std::vector<char> s11_grades{'A'};
  Student s11 = Student("Sara Salazar", 2026, CalcGpa(s11_grades), eng, s11_courses, s11_grades);
  students.push_back(s11);
  //STUDENT 11
  
  std::vector<Course> s12_courses{grd1, grd2, grd3, grd4};
  std::vector<char> s12_grades{'A', 'A', 'A', 'B'};
  Student s12 = Student("Nathanael Savage", 2024, CalcGpa(s12_grades), graphic, s12_courses, s12_grades);
  students.push_back(s12);
  //STUDENT 12
  
  std::vector<Course> s13_courses;
  std::vector<char> s13_grades;
  Student s13 = Student("Leo Hull", 2027, CalcGpa(s13_grades), act, s13_courses, s13_grades);
  students.push_back(s13);
  //STUDENT 13
  
  std::vector<Course> s14_courses{n1, n2,n3};
  std::vector<char> s14_grades{'A', 'A', 'A'};
  Student s14 = Student("Diane Russell", 2025, CalcGpa(s14_grades),nurse, s14_courses, s14_grades);
  students.push_back(s14);
  //STUDENT 14

  std::vector<Course> s15_courses{cs1, cs2, cs3, cs4, mat1};
  std::vector<char> s15_grades{'A', 'A', 'B', 'C', 'B'};
  Student s15 = Student("Barney Pittman", 2023, CalcGpa(s15_grades), compsci, s15_courses, s15_grades);
  students.push_back(s15);
  //STUDENT 15
  
  std::vector<Course> s16_courses{eng1, eng2, eng3, eng4, eng5};
  std::vector<char> s16_grades{'A', 'B', 'C', 'A', 'A'};
  Student s16 = Student("Conrad Copeland", 2023, CalcGpa(s6_grades), eng, s16_courses, s16_grades);
  students.push_back(s16);
  //STUDENT 16
  
  std::vector<Course> s17_courses{grd1, grd2, grd3, grd4, grd5};
  std::vector<char> s17_grades{'A', 'A', 'A', 'B', 'A'};
  Student s17 = Student("Fay Elliott", 2023, CalcGpa(s17_grades), graphic, s17_courses, s17_grades);
  students.push_back(s17);
  //STUDENT 17
  
  std::vector<Course> s18_courses;
  std::vector<char> s18_grades;
  Student s18 = Student("Evan Tapia", 2027, CalcGpa(s18_grades), act, s18_courses, s18_grades);
  students.push_back(s18);
  //STUDENT 18
  
  std::vector<Course> s19_courses{n1, n2, n3};
  std::vector<char> s19_grades{'C', 'C', 'B'};
  Student s19 = Student("Zubair Mclean", 2026, CalcGpa(s9_grades), nurse, s19_courses, s19_grades);
  students.push_back(s19);
  //STUDENT 19

  std::vector<Course> s20_courses{cs1, cs2, cs3};
  std::vector<char> s20_grades{'C', 'D', 'F'};
  Student s20 = Student("Guy Dillon", 2025, CalcGpa(s20_grades), compsci, s20_courses, s20_grades);
  students.push_back(s20);
  //STUDENT 20
  
  std::vector<Course> s21_courses{eng1, eng2, eng3, eng4, eng5};
  std::vector<char> s21_grades{'A', 'B', 'C', 'A', 'A'};
  Student s21 = Student("Jonah Bean", 2023, CalcGpa(s6_grades), eng, s21_courses, s21_grades);
  students.push_back(s21);
  //STUDENT 21
  
  std::vector<Course> s22_courses{grd1, grd2, grd3, grd4, grd5};
  std::vector<char> s22_grades{'A', 'A', 'A', 'B', 'A'};
  Student s22 = Student("Fay Elliott", 2023, CalcGpa(s22_grades), graphic, s22_courses, s22_grades);
  students.push_back(s22);
  //STUDENT 12
  
  std::vector<Course> s23_courses;
  std::vector<char> s23_grades;
  Student s23 = Student("Sufyan Luna", 2027, CalcGpa(s23_grades), act, s23_courses, s23_grades);
  students.push_back(s23);
  //STUDENT 23
  
  std::vector<Course> s24_courses{n1, n2, n3};
  std::vector<char> s24_grades{'C', 'C', 'B'};
  Student s24 = Student("Mateo Henderson", 2026, CalcGpa(s24_grades), nurse, s24_courses, s24_grades);
  students.push_back(s24);
  //STUDENT 24

  std::vector<Course> s25_courses{cs1, cs2, cs3, cs4};
  std::vector<char> s25_grades{'C', 'D', 'F', 'A'};
  Student s25 = Student("Finnian Weiss", 2025, CalcGpa(s25_grades), compsci, s25_courses, s25_grades);
  students.push_back(s25);
  //STUDENT 25

  return students;
}

int main() {
  std::vector<Student> stds = init();
  int choice = 0;
  while(choice != 9)
  {
    std::cout << "MENU              Team HoneyBadger" << std::endl << std::endl;
    std::cout << "1 Students" << std::endl;
    std::cout << "2 Degree Plans" << std::endl;
    std::cout << "3 Courses" << std::endl;
    std::cout << "4 Schedule" << std::endl << std:: endl;
    std::cout << "Choose an option(9 to quit): " << std::endl;
    std::cin >> choice;
    switch(choice)
    {
      case 1:
        std::cout << "Students" << std::endl << std::endl;
        for(size_t i = 0; i < stds.size(); i++)
        {
          std::cout << i + 1 << " " << stds[i].GetStudentName() << " - " << stds[i].GetMajorOfStudent() << std::endl;
        }
        std::cout << std::endl << "Choose a student for more information: " << std::endl; 
        std::cin >> choice;
        stds[choice - 1].PrintStudentInfo();
        break;
      case 2:
        std::cout << "Degree Plans" << std::endl << std::endl;
        std::cout << "1 " << eng->GetMajor() << std::endl;
        std::cout << "2 " << compsci->GetMajor() << std::endl;
        std::cout << "3 " << act->GetMajor() << std::endl;
        std::cout << "4 " << nurse->GetMajor() << std::endl;
        std::cout << "5 " << graphic->GetMajor() << std::endl;
        std::cout << std::endl << "Choose a degree plan for more information: " << std::endl;
        std::cin >> choice;
        hold[choice - 1]->PrintDegreePlan();
        break;
      case 3:
        std::cout << "Courses" << std::endl << std::endl;
        for(size_t i = 0; i < cor.size(); i++)
        {
          for(size_t j = 0; j < cor[i].size(); j++)
          {
            std::cout << cor[i][j].GetCourseName() << " - " << cor[i][j].GetCourseDescription() << std::endl;
          }
        }
        std::cout << std::endl;
        break;
      case 4:
        std::cout << "Schedule" << std::endl << std::endl;
        std::cout << "Course Name" << "              " << "Face-to-Face" << "              " << "Online" << "                " << "Campus" << "                            "<< "Session Term" << std::endl << std::endl;
        for(size_t i = 0; i < cor.size(); i++)
        {
          for(size_t j = 0; j < cor[i].size(); j++)
          {
            std::cout << cor[i][j].GetCourseName() << "            " <<  cor[i][j].GetF2F() << "            " << cor[i][j].GetOnline() << "              " << cor[i][j].GetCampus() << "              " << cor[i][j].GetSesh() << std::endl << std::endl;
          }
        }
        break;
      case 9: 
        break;
    }
  }
  return 0;
}