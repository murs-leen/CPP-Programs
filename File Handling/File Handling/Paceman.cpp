///////////////////////////////////////////////////////////////////////////////////
////                                                                             //
////                         Pacman Game with C++                                //
////                         Muhammad Bilal Ashiq                                //
////                                                                             //
///////////////////////////////////////////////////////////////////////////////////
//
//#include <iostream>
//#include <windows.h>
//#include <conio.h>
//#include <iomanip>
//using namespace std;
//// global parameters.
//char maze[10][10] =
//{
//    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
//    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
//    {'|', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|'},
//    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
//    {'|', ' ', '.', ' ', '>', ' ', '.', ' ', '.', '|'},
//    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
//    {'|', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|'},
//    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
//    {'|', ' ', '.', ' ', '.', ' ', '.', ' ', '.', '|'},
//    {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'} };
//
//// coordinates of pacman.
//int pacmanx = 4, score; // x-coordinate.
//int pacmany = 4; // y-coordinate.
//
//// functions prototypes.
//void printmaze();
//void moveup();
//void movedown();
//void moveleft();
//void moveright();
//
//// printmaze function body.
//int x, y;
//void printmaze()
//{
//
//    for (x = 0; x < 10; x++)
//    {
//        cout << setw(20);
//        for (y = 0; y < 10; y++)
//        {
//            cout << maze[x][y];
//        }
//        cout << endl;
//    }
//}
//
//// moveup function body.
//void moveup()
//{
//    maze[pacmanx][pacmany] = ' ';
//    pacmanx = pacmanx - 1;
//    maze[pacmanx][pacmany] = '^';
//
//    if (maze[pacmanx][pacmany] == '.')
//        score++;
//}
//
//// movedown function body.
//void movedown()
//{
//    maze[pacmanx][pacmany] = ' ';
//    pacmanx = pacmanx + 1;
//    maze[pacmanx][pacmany] = 'v';
//
//    if (maze[pacmanx][pacmany] == '.')
//        score++;
//}
//
//// moveleft function body.
//void moveleft()
//{
//    maze[pacmanx][pacmany] = ' ';
//    pacmany = pacmany - 1;
//    maze[pacmanx][pacmany] = '<';
//
//}
//
//// moveright function body.
//void moveright()
//{
//    maze[pacmanx][pacmany] = ' ';
//    pacmany = pacmany + 1;
//    maze[pacmanx][pacmany] = '>';
//    if (maze[pacmanx][pacmany] == '.')
//        score++;
//}
//
//int main()
//{
//    system("color 6d");
//    cout << "\n\n\t\t\t ------- Pacman Game ----------\n";
//    cout << "\n\n\t\t\t   -> Muhammad Bilal Ashiq <- \n\n";
//
//    cout << "\n\n\n\t\t===> Press any key to play.... \n\n";
//    _getch();
//
//    system("cls");
//    int x, y;
//    while (true)
//    {
//        system("cls");
//
//        printmaze();
//        if (GetAsyncKeyState(VK_UP))
//        {
//            if (pacmanx > 1)
//            {
//                moveup();
//            }
//        }
//        if (GetAsyncKeyState(VK_DOWN))
//        {
//            if (pacmanx < 8)
//            {
//                movedown();
//            }
//        }
//        if (GetAsyncKeyState(VK_LEFT))
//        {
//            if (pacmany > 1)
//            {
//                moveleft();
//            }
//        }
//        if (GetAsyncKeyState(VK_RIGHT))
//        {
//            if (pacmany < 8)
//            {
//                moveright();
//            }
//        }
//    }
//}
