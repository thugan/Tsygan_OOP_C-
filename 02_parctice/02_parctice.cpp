#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;
struct Coord {
    int X;
    int Y;
};
void SetPos(int x, int y)

{

    COORD c;

    c.X = x;

    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);

}

class MyRectangle {
    int height;
    int width;
    char sumbol;
    Coord coord;
public:
    MyRectangle()
    {
        height = 3;
        width = 4;
        sumbol = '*';
    }
    MyRectangle(int size, int X, int Y, char sumb)
    {
        height = size;
        width = size;
        sumbol = '*';
        coord.X = X;
        coord.Y = Y;
    }
    MyRectangle(int height,int width,int X,int Y,char sumb)
    {
        this->height = height;
        this->width = width;
        sumbol = sumb;
        coord.X = X;
        coord.Y = Y;
    }
    void Print() {
        for (int i = -1; i < height; i++)
        {
            SetPos(coord.X, coord.Y+i);
            for (int j = 0; j < width; j++)
            {
                cout << sumbol<<" ";
            }cout << endl;
        }
    }
    int EditRectangle(int height,int width) {
        if (width <= 0|| height <= 0) {
            return;
        }
        this->width = width;
        this->height = height;
    }
    int EditCord(int x,int y) {
        if (x <= 0 || y <= 0) {
            return;
        }
        coord.Y = y;
        coord.X = x;
    }
};
int main()
{
    MyRectangle rec{ 7,7,2,5,'*'};
    rec.Print();
    cout << "Press any key to continue....";
    _getch();
    system("cls");
    rec.EditRectangle(2,10);
    rec.Print();
    cout << "Press any key to continue....";
    _getch();
    system("cls");
    rec.EditCord(4,3);
    rec.Print();
    cout << "Press any key to continue....";
    _getch();
    system("cls");
}