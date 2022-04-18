#include <iostream>
#include <string>

using namespace std;

#pragma once

class Faculty
{
    public:

    Faculty():Name((string)" "), HeadOfFaculty((string)" "), Floor(0), Credits(0), ScholershipGrade(0.0f){};
    Faculty(string name, string headoffaculty, int floor, int credits, float scholershipgrade);
    Faculty(Faculty &CopyFaculty);
    virtual ~Faculty(){};
    Faculty& operator = (const Faculty& AssignPerson);
    void SetName(string facultyname);
    string GetName() const;
    void SetHeadOfFaculty(string headoffaculty);
    string GetHeadOfFaculty() const;
    void SetFloor(int floor);
    int GetFloor() const;
    void SetCredits(int credits);
    int GetCredits() const;
    void SetScholerShipGrade(float scholershipgrade);
    float GetScholerShipGrade() const;
    void CheckScholershipCondition(int grade);

    private:

    string Name;
    string HeadOfFaculty;
    int Floor;
    int Credits;
    float ScholershipGrade;
};