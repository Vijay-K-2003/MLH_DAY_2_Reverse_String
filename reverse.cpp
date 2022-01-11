#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string s1 = "";
    for (int i = 0; i < s.length(); i++) {
        s1 = s[i] + s1;
    }
    cout << "Method 1 : " << s1 << endl;

    string s2 = "";
    s2 = s;
    reverse(s2.begin(), s2.end());
    cout << "Method 2 : " << s2 << endl;

    cout << "Original String : " << s << endl;
    
    return 0;
}