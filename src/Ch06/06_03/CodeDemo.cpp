// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"
#include <fstream>

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    // srec.add_student(1, "George P. Burdell");
    // srec.add_student(2, "Nancy Rhodes");
    inFile.open("students.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){ 
            getline(inFile, str); 
            int sid = stoi(str);
            getline(inFile, str);
            std::string name = str;
            srec.add_student(sid, name);
        }
        inFile.close();
    }

    // srec.add_course(1, "Algebra", 5);
    // srec.add_course(2, "Physics", 4);
    // srec.add_course(3, "English", 3);
    // srec.add_course(4, "Economics", 4);
    inFile.open("courses.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){ 
            getline(inFile, str); 
            int cid = stoi(str);
            getline(inFile, str);
            std::string course_name = str;
            getline(inFile, str);
            int credits = stoi(str);
            srec.add_course(cid, course_name, credits);
        }
        inFile.close();
    }

    // srec.add_grade(1, 1, 'B');
    // srec.add_grade(1, 2, 'A');
    // srec.add_grade(1, 3, 'C');
    // srec.add_grade(2, 1, 'A'); 
    // srec.add_grade(2, 2, 'A');
    // srec.add_grade(2, 4, 'B');
    inFile.open("grades.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){ 
            getline(inFile, str); 
            int sid = stoi(str);
            getline(inFile, str);
            int cid = stoi(str);
            getline(inFile, str);
            char letter = str[0]; 
            srec.add_grade(sid, cid, letter);
        }
        inFile.close();
    }
    
    

    
}
