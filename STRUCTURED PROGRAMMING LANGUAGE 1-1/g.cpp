// BRUR_Eternal_Entrophy

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; ++case_num)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> k(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        int cnt = 0;
        int tmp = 0;
        int x;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (v[i] == k[j])
                {
                    cnt++;
                    tmp = j + 1;
                    x = j;
                    break;
                }
            }
            if (x == n - 1)
            {
                break;
            }
        }
        cout << "Case " << case_num << ": " << n - cnt << endl;
    }
    return 0;
}
