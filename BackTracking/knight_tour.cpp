#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> directions = {{2, 1}, {1, 2}, {-2, 1}, {-1, 2}, {2, -1}, {1, -2}, {-2, -1}, {-1, -2}};

bool isSafe(vector<vector<int>> &grid, int i, int j, int n)
{
    return i >= 0 and j >= 0 and i < n and j < n and grid[i][j] == -1;
}

void display(vector < vector<int> > &grid, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}

void f(vector<vector<int>> &grid, int i, int j, int n, int cnt)
{
    if (cnt == n * n - 1)
    {
        grid[i][j] = cnt;
        display(grid, n);
        cout << "**********\n";
        grid[i][j] = -1;
    }
    // from i, j we can move to 8 positions
    // for every position we can only go if it is safe
    for (auto &dir : directions)
    {
        int new_i = i + dir[0];
        int new_j = j + dir[1];
        if (isSafe(grid, new_i, new_j, n))
        {
            grid[i][j] = cnt;
            f(grid, new_i, new_j, n, cnt + 1);
            grid[i][j] = -1;
        }
    }
}

void knightTour(int n, int i, int j)
{
    vector<vector<int>> grid(n, vector<int>(n, -1));
    f(grid, i, j, n, 0);
}

int main()
{
    knightTour(5, 0, 0);
    return 0;
}