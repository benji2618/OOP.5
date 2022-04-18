#include "person.h"

Person::Person(string personname, int age, float height, float weight)
{
    SetPersonName(personname);
    SetAge(age);
    SetHeight(height);
    SetWeight(weight);
}

Person& Person::operator = (const Person& AssignPerson)
{
    SetPersonName(AssignPerson.GetPersonName());
    SetAge(AssignPerson.GetAge());
    SetHeight(AssignPerson.GetHeight());
    SetWeight(AssignPerson.GetWeight());
    return *this;
}


Person::Person(Person &CopyPerson)
{
    *this = CopyPerson;
}

void Person::SetPersonName(string personname)
{
    PersonName = personname;
}

string Person::GetPersonName() const
{
    return PersonName;
}

void Person::SetAge(int age)
{
    while (age > 120 || age < 18)
    {
        cout << "Age must be between 18 - 120, enter age again" << endl;
        cin >> age;
    }
    
    Age = age;
}

int Person::GetAge() const
{
    return Age;
}

void Person::SetHeight(float height)
{
    while (height > 250)
    {
        cout << "Height can't be above 250 cm, enter height again" << endl;
        cin >> height;
    }
    
    Height = height;
}

float Person::GetHeight() const
{
    return Height;
}

void Person::SetWeight(float weight)
{
    Weight = weight;
}

float Person::GetWeight() const
{
    return Weight;
}