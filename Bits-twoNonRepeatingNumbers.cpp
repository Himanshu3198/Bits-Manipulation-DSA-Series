// find two non-repeating numbers in a array using bits manipulation
// O(n)
#include <bits/stdc++.h>
using namespace std;

void twoNonRepeating(int a[], int n)
{

    int Xor = a[0];
    int x = 0;
    int y = 0;
    for (int i = 1; i < n; i++)
    {

        Xor = Xor ^ a[i];
    }

    int setBit = Xor & ~(Xor - 1);
    // int setBit = Xor & -Xor;
    for (int i = 0; i < n; i++)
    {

        if (a[i] & setBit)
        {
            x = x ^ a[i];
        }
        else
        {
            y = y ^ a[i];
        }
    }
    cout<<x<<" "<<y<<"\n";
}

int main()
{
    int a[] = {2, 4, 7, 9, 2, 4};
    int n = sizeof(a) / sizeof(*a);
    // int *x = new int[(sizeof(int))];
    // int *y = new int[(sizeof(int))];

    twoNonRepeating(a, n);
    // cout << x << " " << y;
    return 0;
}