#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool checkAnagram(string s, string s2)
{
    if (s.length() != s2.length())
        return false;
    unordered_map<char, int> mp;
    for (auto c : s)
    {
        mp[c]++;
    }
    for (auto c2 : s2)
    {
        if (mp.find(c2) == mp.end())
        {
            return false;
        }
        else
        {
            mp[c2]--;
        }
    }
    for (auto ele : mp)
    {
        if (ele.second != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cout << "Enter strings: ";
    string s, s2;
    cin >> s;
    cin >> s2;
    cout << (checkAnagram(s, s2) ? "Anagram" : "Not Anagram");
}