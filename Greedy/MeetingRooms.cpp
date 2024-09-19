#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMeetingRooms(vector<vector<int>> &intervals)
{
    vector<int> start, end;
    for (auto ele : intervals)
    {
        start.push_back(ele[0]);
        end.push_back(ele[1]);
    }
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());
    int i = 0;
    int j = 0;
    int ans = 0;
    int rooms = 0;
    while (i < start.size() && j < end.size())
    {
        if (start[i] < end[j])
        {
            rooms++;
            ans = max(ans, rooms);
            i++;
        }

        else if (start[i] > end[j])
        {
            rooms--;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    // Input:
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};
    // Output: 2
    // Explanation:
    // We need two meeting rooms
    // room1: (0,30)
    // room2: (5,10),(15,20)
    cout << minMeetingRooms(intervals);
    return 0;
}
