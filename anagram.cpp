#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int n = strs.size();
    vector<vector<string>> ans;

    vector<string> sorted_strs = strs;

    // for (string& str : sorted_strs) {
    //     sort(str.begin(), str.end());
    // }
    for (int i = 0; i < n; i++)
    {
        string str = sorted_strs[i];
        sort(str.begin(), str.end());
        sorted_strs[i] = str;
    }

    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            vector<string> temp;
            temp.push_back(strs[i]);
        
                visited[i] = true;

            for (int j = i + 1; j < n; j++)
            {
                if (sorted_strs[i] == sorted_strs[j])
                {
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(temp);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
