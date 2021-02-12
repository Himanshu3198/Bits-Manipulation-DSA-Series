
// C++ program to find the first
// rightmost set bit using XOR operator
#include <bits/stdc++.h>
using namespace std;
 
// function to find the rightmost set bit
int PositionRightmostSetbit(int n)
{
    // Position variable initialize with 1
    // m variable is used to check the set bit
    int position = 1;
    int m = 1;
 
    while (!(n & m)) {
 
        // left shift
        m = m << 1;
        position++;
    }
    return position;
}
// Driver Code
int main()
{
    int n = 16;
    // function call
    cout << PositionRightmostSetbit(n)<<"\n";
	cout<<n<<" "<<bitset<8>(n)<<"\n";
    return 0;
}
