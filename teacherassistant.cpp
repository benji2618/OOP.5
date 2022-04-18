#include "teacherassistant.h"

    TeacherAssistant::TeacherAssistant(TeacherAssistant &CopyTeacherAssistant)
    {
        *this = CopyTeacherAssistant;
    }

    TeacherAssistant& TeacherAssistant::operator = (TeacherAssistant& AssignTeacherAssistant)
    {
        SetEmail(AssignTeacherAssistant.GetEmail());   
        SetSalary(AssignTeacherAssistant.GetSalary());
        SetCourse(AssignTeacherAssistant.GetCourse());
        Person::SetPersonName(AssignTeacherAssistant.Person::GetPersonName());
        Person::SetAge(AssignTeacherAssistant.Person::GetAge());
        Person::SetHeight(AssignTeacherAssistant.Person::GetHeight());
        Person::SetWeight(AssignTeacherAssistant.Person::GetWeight());
        Faculty::SetName(AssignTeacherAssistant.Faculty::GetName());
        Faculty::SetHeadOfFaculty(AssignTeacherAssistant.Faculty::GetHeadOfFaculty());
        Faculty::SetFloor(AssignTeacherAssistant.Faculty::GetFloor());
        Faculty::SetCredits(AssignTeacherAssistant.Faculty::GetCredits());
        Faculty::SetScholerShipGrade(AssignTeacherAssistant.Faculty::GetScholerShipGrade());
        return *this;
    }

    void TeacherAssistant::SetEmail(string email)
    {
        Email = email;
    }

    string TeacherAssistant::GetEmail() const
    {
        return Email;
    }

    void TeacherAssistant::SetSalary(int salary)
    {
        Salary = salary;
    }

    int TeacherAssistant::GetSalary() const
    {
        return Salary;
    }
    
    void TeacherAssistant::SetCourse(Course &course)
    {
        TeacherAssistantCourse = course;
    }
    
    Course& TeacherAssistant::GetCourse()
    {
        return TeacherAssistantCourse;
    }

    void TeacherAssistant::WriteHomeWork(Student &student)
    {
        TeacherAssistantCourse.SetHomeWork(1);
        student.StudentHomework(TeacherAssistantCourse);
    }