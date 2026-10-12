#include <iostream>
using namespace std;
struct Date {
    int day;
    int month;
    int year;
    void PrintDate() {
        cout << "Birth date :" << day << "/" << month << "/" << year << endl;
    }
};
class Student
{
    string name;
    string surname;
    Date birthdate;
    string phone;
    int *marks;
    int countMark;
    float avarageMark;
public:
    void Print() {
        cout << "Name : " << name<<endl;
        cout << "Surname : " << surname <<endl;
        birthdate.PrintDate();
        cout << "Phone : " << phone<<endl;
        cout << "Marks : " ;
        for (int i = 0; i < countMark; i++)
        {
            cout << marks[i] << " ";
        }cout << "\nAvarage mark: " << avarageMark << endl;
    }
    void Initialization()
    {
        name = "no name";
        surname = "no name";
        birthdate = { 1,1,1 };
        phone = "no phone";
        marks = nullptr;
        countMark = 0;
        avarageMark = 0;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSurname(string surname)
    {
        this->surname = surname;
    }
};
int main()
{
    Student student;
    student.Print();
    student.setName("Vasia");
    student.setSurname("Ivanchuk");
    student.Print();
}