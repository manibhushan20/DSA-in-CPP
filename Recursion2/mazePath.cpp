#include <iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;
    int rightways = maze(sr, sc + 1, er, ec);
    int downways = maze(sr + 1, sc, er, ec);
    return rightways + downways;
}

void printMaze(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }

    printMaze(sr, sc + 1, er, ec, s + 'R'); // right
    printMaze(sr + 1, sc, er, ec, s + 'D'); // down
}

int maze2(int row, int col)
{
    if (row < 1 || col < 1)
        return 0;
    if (row == 1 && col == 1)
        return 1;
    int rightways = maze2(row, col - 1);
    int downways = maze2(row - 1, col);
    return rightways + downways;
}

int main()
{
    int n;
    cout << "Enter the starting row:";
    cin >> n;
    int m;
    cout << "Enter the starting column:";
    cin >> m;
    int x;
    cout << "Enter the ending row:";
    cin >> x;
    int y;
    cout << "Enter the ending column:";
    cin >> y;

    cout << maze(n, m, x, y) << endl;
    printMaze(n, m, x, y, "");
    cout << maze2(x, y) << endl;
}