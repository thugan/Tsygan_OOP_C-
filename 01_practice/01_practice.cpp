#include <iostream>
#include <fstream>
using namespace std;
const string filename = "D://PointerDatabase.txt";
class pointer {
    int x;
    int y;
    int z;
public:
    void InitX()
    {
        cout << "Enter x : "; cin >> x;
    }
    void InitY()
    {
        cout << "Enter y : "; cin >> y;
    }
    void InitZ()
    {
        cout << "Enter z : "; cin >> z;
    }
    void InitAll()
    {
        cout << "Enter x : "; cin >> x;
        cout << "Enter y : "; cin >> y;
        cout << "Enter z : "; cin >> z;
    }
    void PrintPointers()
    {
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
        cout << "Z : " << z << endl;
    }
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }
    void setZ(int z) {
        this->z = z;
    }
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
    int GetZ()
    {
        return z;
    }
    void SaveToFile()
    {
        ofstream out(filename, ios_base::app);
        out << x << endl;
        out << y << endl;
        out << z << endl;
        out.close();
    }

    void ReadFromFile()
    {
        ifstream in(filename, ios_base::in);
        in >> x;
        in >> y;
        in >> z;
        in.close();
    }
};

int main()
{
    pointer point;
   
    point.InitAll();
    point.SaveToFile();

    pointer read;

    read.ReadFromFile();
    read.PrintPointers();

}
