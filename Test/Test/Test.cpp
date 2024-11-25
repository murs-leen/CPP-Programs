// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>
using namespace std;


//Characters
const char chicken = '&';
const char spaceShip = '$';
const char egg = 'o';
const char fire = '*';

const int scrX = 80;
const int scrY = 50;

//Player Position
int ssPosX = 40;
int ssPosY = 30;

void gotoxy(int x, int y);
void movePlayer(char dir);
void drawChickenArmy(int count = 4);
void drawFrame();
void spaceShipFire(); 

string fires[10] = {};

int main()
{
    
    while (true)
    {
        drawFrame();
        Sleep(50);
        if (_kbhit()) {
            char input = _getch();
            switch (input) {
            case 'a':
            case 'A':
            case 'd':
            case 'D':
            case 'w':
            case 'W':
            case 's':
            case 'S':
                movePlayer(input);
                break;

            case ' ':
                spaceShipFire();
                break;
            }
        }
        system("cls");
        

    }
    std::cin.get();
}


void movePlayer(char d)
{
    switch (d)
    {
    case 'a':
    case 'A':
        if (ssPosX > 0)
            ssPosX--;
        break;
    case 'd':
    case 'D':
        if (ssPosX < scrX)
            ssPosX++;
        break;
    case 'w':
    case 'W':
        if (ssPosY > 0)
            ssPosY--;
        break;
    case 's':
    case 'S':
        if (ssPosY < scrY)
            ssPosY++;
        break;
    }
}

void drawChickenArmy(int count)
{

}

void drawFrame()
{
    gotoxy(ssPosX, ssPosY);
    cout << spaceShip;
    for (int i = 0; i < 10; i++)
    {
        if (!fires[i].empty())
        {
            string fr = fires[i];
            fr.
        }

    }

}
void spaceShipFire()
{
    fires[0] = ssPosX + "," + (ssPosY-1);
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
