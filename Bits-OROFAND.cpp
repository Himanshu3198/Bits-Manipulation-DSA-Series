// codechef orofand solution important
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        int arr[n];
        vector<int> bits(32, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            for (int j = 0; j <= 31; j++)
            {

                if ((1 << j) & arr[i])
                {
                    bits[j]++;
                }
            }
        }

        int ans = 0;
        for (int i = 0; i <= 31; i++)
        {

            if (bits[i]>0)
            {
                ans += (1 << i);
            }
        }

        cout << ans << "\n";

        while (q--)
        {

            int pos, val;
            cin >> pos >> val;

            pos--;

            for (int i = 0; i <= 31; i++)
            {

                if ((1 << i) & arr[pos])
                {
                    bits[i]--;
                }
            }

            arr[pos] = val;
            for (int i = 0; i <= 31; i++)
            {

                if ((1 << i) & arr[pos])
                {
                    bits[i]++;
                }
            }

            ans = 0;

            for (int i = 0; i <= 31; i++)
            {

                if (bits[i])
                {
                    ans += (1 << i);
                }
            }

            cout << ans << "\n";
        }
    }
}