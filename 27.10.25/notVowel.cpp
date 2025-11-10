#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
    char t = tolower(c);

    return (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u');
}

int main()
{
    string str;
    getline(cin , str);

    vector <string> vec;
    string word = "";
    bool include = true;
    for (auto c : str)
    {
        if (isalpha(c))
        {
            if (isvowel(c))
            {
                include = false;
            }
            word += c;
        }
        else if (word.length())
        {
            if (include) vec.push_back(word);
            word = "";
            include = true;
        }
    }
    if (word.length() && include) vec.push_back(word);
    for (auto s : vec) cout << s << "  ";
}