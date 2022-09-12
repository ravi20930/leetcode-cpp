#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int charIndex = 0;
    for (int i = 0; i < strs[0].length(); i++)
    {
        int ok = 1;
        for (auto &word : strs)
        {
            if (charIndex >= word.length() || word[charIndex] != strs[0][charIndex])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            charIndex++;
        }
        else
        {
            break;
        }
    }
    return strs[0].substr(0, charIndex);
}
int main()
{
    vector<string> words = {"flower", "flow", "flight"};
    string ans = longestCommonPrefix(words);
    cout << ans;
}