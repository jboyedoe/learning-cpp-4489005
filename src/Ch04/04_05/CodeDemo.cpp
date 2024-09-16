// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    float average1 = 0.0f;
    int credits1 = 0;
    float average2 = 0.0f;
    int credits2 = 0;

    for (int i = 0; i < grades.size(); i++){
        Grade current_grade = grades[i]; // used a reference to not store this
        int course_taken = current_grade.get_course_id();
        int course_credits = courses[course_taken].get_credits();
        char grade_got = current_grade.get_grade();
        float grade_val;
        switch(grade_got){
            case 'A':
                grade_val = 4.0f;
                break;
            case 'B':
                grade_val = 3.0f;
                break;
            case 'C': 
                grade_val = 2.0f;
                break;
            case 'D':
                grade_val = 1.0f;
                break;
            default:  
                grade_val = 0.0f;
                break;
        }
        float to_add = grade_val*course_credits;

        if (current_grade.get_student_id() == 1){
            average1 += to_add;
            credits1 += course_credits;
        }
        else{
            average2 += to_add;
            credits2 += course_credits;
        }
    }
    average1 /= credits1;
    average2 /= credits2;


    std::string student_str;
    if (id == 1){
        student_str = students[0].get_name(); // Change this to the selected student's name
        GPA = average1;
    }
    else{
        student_str = students[1].get_name(); // Change this to the selected student's name
        GPA = average2;
    }

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
