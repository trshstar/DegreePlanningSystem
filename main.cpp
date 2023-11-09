#include <iostream>
#include <vector>
#include <fstream>
#include "Course.h"
#include "DegreePlan.h"
#include "Student.h"

int main() {
  //CS COURSES FOR DEGREE PLAN
  Course cs1 = Course("COSC 1436", "Programming Fundamentals I");
  Course cs2 = Course("COSC 1437", "Programming Fundamentals II");
  Course cs3 = Course("COSC 2436", "Programming Fundamentals III");
  Course cs4 = Course("COSC 2325", "Computer Organization");
  Course mat1 = Course("MATH 2413", "Calculus I");

  //NURSING COURSES FOR DEGREE PLAN
  Course n1 = Course("RNSG 1105", "Nursing Skills I");
  Course n2 = Course("RNSG 1301", "Pharmacology");
  Course n3 = Course("RNSG 2213", "Mental Health Nursing");
  Course n4 = Course("RNSG 2201", "Care of Children and Families");
  Course n5 = Course("RNSG 2262", "Clinical Nursing Care of Children and Families");

  //ENGINEERING COURSES FOR DEGREE PLAN
  Course eng1 = Course("ENGR 1201", "Introduction to Engneering");
  Course eng2 = Course("ENGR 1304", "Engineering Graphics I");
  Course eng3 = Course("ENGR 2301", "Engineering Mechanics - Statics");
  Course eng4 = Course("ENGR 2305", "Electrical Circuits I");
  Course eng5 = Course("ENGR 2105", "Electrical Circuits I Laboratory");

  //ACCOUNTING COURSES FOR DEGREE PLAN
  Course acc1 = Course("ACCT 2301", "Principles of Financial Accounting");
  Course acc2 = Course("ACNT 1329", "Payroll and Business Tax Accounting");
  Course acc3 = Course("ACNT 1311", "Introduction to Computerized Accounting");
  Course acc4 = Course("ACCT 2302", "Principles of Managerial Accounting");
  Course acc5 = Course("ACNT 1331", "Federal Income Tax: Individual");

  //GRAPHIC DESIGN COURSES FOR DEGREE PLAN
  Course grd1 = Course("ARTC 1325", "Introduction to Computer Graphics");
  Course grd2 = Course("ARTV 1351", "Digital Video");
  Course grd3 = Course("ARTC 1302", "Digital Imaging I");
  Course grd4 = Course("ARTC 1327", "Typography");
  Course grd5 = Course("ARTC 1317", "Design Communication I");

  //POPULATE VECTORS
  std::vector<Course> csCourses{cs1, cs2, cs3, cs4, mat1};
  std::vector<Course> nurCourses{n1, n2, n3, n4, n5};
  std::vector<Course> engCourses{eng1, eng2, eng3, eng4, eng5};
  std::vector<Course> accCourses{acc1, acc2, acc3, acc4, acc5};
  std::vector<Course> grdCourses{grd1, grd2, grd3,grd4, grd5};
  
  //CREATE DEGREE PLANS
  DegreePlan cs = DegreePlan("Computer Science", csCourses);
  DegreePlan nursing = DegreePlan("Nursing", nurCourses);
  DegreePlan engineering = DegreePlan("Engineering", engCourses);
  DegreePlan accounting = DegreePlan("Accounting", accCourses);
  DegreePlan graphicDesign = DegreePlan("Graphic Design", grdCourses);

  cs.PrintDegreePlan();
  nursing.PrintDegreePlan();
  engineering.PrintDegreePlan();
  accounting.PrintDegreePlan();
  graphicDesign.PrintDegreePlan();

  //CREATE STUDENTS
  DegreePlan* eng = &engineering;
  DegreePlan* compsci = &cs;
  DegreePlan* act = &accounting;
  DegreePlan* nurse = &nursing;
  DegreePlan* graphic = &graphicDesign;

  std::vector<DegreePlan*> ptr{eng, compsci,act,nurse, graphic};
  
  
  std::vector<Course> s1_courses{eng1, eng2};
  Student s1 = Student("Thaddeus Levy", 2025, eng, s1_courses);
  //STUDENT 1
  s1.PrintStudentInfo();
  
  std::vector<Course> s2_courses{grd1, grd2, grd3, grd4};
  Student s2 = Student("Aileen Beck", 2024, graphic, s2_courses);
  s2.PrintStudentInfo();
  //STUDENT 2
  
  std::vector<Course> s3_courses;
  Student s3 = Student("Laurie Munoz", 2027, act, s3_courses);
  s3.PrintStudentInfo();
  //STUDENT 3
  
  std::vector<Course> s4_courses{n1, n2};
  Student s4 = Student("Enzo England", 2025, nurse, s4_courses);
  s4.PrintStudentInfo();
  //STUDENT 4

  std::vector<Course> s5_courses{cs1, cs2, cs3, cs4, mat1};
  Student s5 = Student("Dora Branch", 2023, compsci, s5_courses);
  s5.PrintStudentInfo();
  //STUDENT 5
  /*
  Student s6 = Student("Katherine Frazier", 2026, nurse, s6_courses);
  
  Student s7 = Student("Elias Nguyen", 2023, act, s7_courses);
  
  Student s8 = Student("Chantelle Campos", 2024, graphic, s8_courses);
  
  Student s9 = Student("Anish Henry", 2025, eng, s9_courses);
  */
  Student s10 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s11 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s12 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s13 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s14 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s15 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s16 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s17 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s18 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s19 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s20 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s21 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s22 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s23 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s24 = Student("Dora Branch", 2023, compsci, s5_courses);
  Student s25 = Student("Dora Branch", 2023, compsci, s5_courses);

  std::vector<Student> students; 
  /*
  std::ifstream file;
  std::vector<Course> c;
  std::string input, cname, cdesc;
  file.open("courses.txt", std::ios::in);
  if(file.is_open())
  {
    while(getline(file, input))
    {
      cname = input.substr(0, 9);
      cdesc = input.substr(10, input.length() - 1);
      Course tmp = Course(cname, cdesc);
      c.push_back(tmp);
    }
    file.close();
  }
  std::vector<DegreePlan*> ptr;
  DegreePlan* deg = nullptr;
  deg = new DegreePlan("Computer Science", c);
  deg->PrintDegreePlan();
  */
  
  return 0;
}