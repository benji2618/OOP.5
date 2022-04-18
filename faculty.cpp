#include "faculty.h"

Faculty::Faculty(string facultyname, string headoffaculty, int floor, int credits, float scholershipgrade)
{
    SetName(facultyname);
    SetHeadOfFaculty(headoffaculty);
    SetFloor(floor);
    SetCredits(credits);
    SetScholerShipGrade(scholershipgrade);
}

Faculty::Faculty(Faculty &CopyFaculty)
{
    *this = CopyFaculty;
}

Faculty& Faculty::operator = (const Faculty& AssignPerson)
{
    SetName(AssignPerson.GetName());
    SetHeadOfFaculty(AssignPerson.GetHeadOfFaculty());
    SetFloor(AssignPerson.GetFloor());
    SetCredits(AssignPerson.GetCredits());
    SetScholerShipGrade(AssignPerson.GetScholerShipGrade());
    return *this;
}

void Faculty::SetName(string facultyname)
{
    Name = facultyname;
}

string Faculty::GetName() const
{
    return Name;
}

void Faculty::SetHeadOfFaculty(string headoffaculty)
{
    HeadOfFaculty = headoffaculty;
}

string Faculty::GetHeadOfFaculty() const
{
    return HeadOfFaculty;
}

void Faculty::SetFloor(int floor)
{
    Floor = floor;
}

int Faculty::GetFloor() const
{
    return Floor;
}

void Faculty::SetCredits(int credits)
{
    Credits = credits;
}

int Faculty::GetCredits() const
{
    return Credits;
}

void Faculty::SetScholerShipGrade(float scholershipgrade)
{
    ScholershipGrade = scholershipgrade;
}

float Faculty::GetScholerShipGrade() const
{
    return ScholershipGrade;
}

void Faculty::CheckScholershipCondition(int grade)
{
    if (grade >= GetScholerShipGrade())
    {
        cout << "Can have scholership" << endl;
    }
    else
        cout << "Can't have scholership" << endl;
}