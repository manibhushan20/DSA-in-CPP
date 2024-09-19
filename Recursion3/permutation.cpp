#include <iostream>
#include <string>
#include <vector>

using namespace std;

void permutation(vector<string>&v,string ans, string original)
{
    if (original == "")
    {
        v.push_back(ans);
        return;
    }

    for (int i = 0; i < original.length(); i++)
    {
        string left = original.substr(0, i);
        string right = original.substr(i + 1);
        char ch = original[i];
        permutation(v,ans + ch, left + right);
    }
}

int main()
{
    string str = "abc";
    vector<string>v;
    permutation(v,"", str);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}