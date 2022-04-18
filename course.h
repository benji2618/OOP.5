#include <iostream>
#include <string>

using namespace std;

#pragma once

class Course
{
    public:

    Course():Name((string)" "), Grade(0.0f), Credits(0), HomeWork(0){};
    Course(string name, float grade, int credits, int homework);
    Course(Course &CopyCourse);
    virtual ~Course(){};
    Course& operator = (const Course& AssignCourse);
    void SetName(string name);
    string GetName() const;
    void SetGrade(float grade);
    float GetGrade() const;
    void SetCredits(int credits);
    int GetCredits() const;
    void SetHomeWork(int homework);
    int GetHomeWork() const;


    private:

    string Name;
    float Grade;
    int Credits;
    int HomeWork;
};