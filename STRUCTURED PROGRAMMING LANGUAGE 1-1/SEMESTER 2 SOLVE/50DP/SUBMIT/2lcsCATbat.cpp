#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

set<string> allLCS; // Set to store all possible common subsequences

void printAllLCS(string s1, string s2)
{
    int m = s1.size(); // 1st string length
    int n = s2.size(); // 2nd string length

    // Create a stack to store the parameters and the subsequence
    stack<pair<pair<int, int>, pair<string, int>>> st;

    // Push the initial parameters and an empty subsequence
    st.push({{m, n}, {"", 0}});

    // Loop until the stack is empty
    while (!st.empty())
    {
        // Pop the top element from the stack
        auto top = st.top();
        st.pop();

        // Get the parameters and the subsequence
        int i = top.first.first;
        int j = top.first.second;
        string s = top.second.first;
        int state = top.second.second;

        // If either of the strings is empty, insert the subsequence to the set
        if (i == 0 || j == 0)
        {
            allLCS.insert(s);
            continue;
        }

        // If the last characters of both strings match
        if (s1[i - 1] == s2[j - 1])
        {
            // Prepend the char to the subsequence and push the new parameters
            st.push({{i - 1, j - 1}, {s1[i - 1] + s, 0}});
        }
        else
        {
            // If the state is 0, push the same element with state 1
            if (state == 0)
            {
                st.push({{i, j}, {s, 1}});
            }

            // If the state is 1, push the new parameters for the first branch
            if (state == 1)
            {
                st.push({{i - 1, j}, {s, 0}});
            }

            // If the state is 2, push the new parameters for the second branch
            if (state == 2)
            {
                st.push({{i, j - 1}, {s, 0}});
            }
        }
    }

    // Print all possible common subsequences
    for (const string &subseq : allLCS)
    {
        cout << subseq << nl;
    }
}

int main()
{
    string s1 = "atta";
    string s2 = "btat";
    printAllLCS(s1, s2);

    return 0;
}
