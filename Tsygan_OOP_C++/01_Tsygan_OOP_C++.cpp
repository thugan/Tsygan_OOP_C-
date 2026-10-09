#include <iostream>
using namespace std;
class Player
{
    string name;
    int age;
    int games;
    int goals;
public:
    void PrintPlayer()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Games : " << games << endl;
        cout << "Goals : " << goals << endl;
    }
    void InitPlayer()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter age : "; cin >> age;
        games = 0;
        goals = 0;
    }
    void AddGameToPlayer(int goals = 0)
    {
        games++;
        this->goals+= goals;
    }
};
class Student 
{
    string name;
    int marks[3];
public:
    void setName(string name) {
        this->name = name;
    }
    void setMark(int index,int mark) {
        if (mark >= 1 and mark <= 12)
        {
            marks[index] = mark;
        }
        else
        {
            marks[index] = 0;
        }
    }
    string getName()
    {
        return name;
    }
    int GetMark()
    {
        return mark;
    }
    double getAvaregeMark()
    {
        double summa = 0;
        for (int i = 0; i < 3; i++)
        {
            summa += marks[i];
        }return (double)summa / 3;
    }
};
int main()
{
    Student st;
    st.setName ("Ivan");
    st.setMark(0,7);
    st.marks[1] = 9;
    st.marks[2] = 8;
    cout << "Name : " << st.name << " Marks : " << st.marks[0] << endl;


    /*Player player;
    player.InitPlayer();
    player.PrintPlayer();
    player.AddGameToPlayer(1);
    player.AddGameToPlayer(2);
    player.AddGameToPlayer(3);
    player.PrintPlayer();*/
}