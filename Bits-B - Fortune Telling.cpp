
/*
 author:himanshu3198
 https://codeforces.com/contest/1634/problem/B

*/
#include     <bits/stdc++.h>
#define      ll long long int
#define      fr(i, n) for (int i = 0; i < (n); i++)
#define      rep(i, a, b) for (int i = (a); i < (b); i++)
#define      FORR(i, n) for (int i = (n); i >= 0; i--)
#define      fst first
#define      snd second
#define      E "\n"
#define      pb push_backCF
#define      mp make_pair
#define      all(x) (x).begin(), (x).end()
#define      MOD 1000000007LL
#define      MAX(a, b) ((a) > (b) ? (a) : (b))
#define      MIN(a, b) ((a) < (b) ? (a) : (b))
#define      ABS(x) ((x) < 0 ? -(x) : (x))
#define      setbits(x) __builtin_popcount(x)
#define      vi vector<int>
#define      vl vector<long long int>
#define      vvi vector<vector<int>>
#define      vvl vector<vector<long long int>>
#define      INF 1e18
#define      _Y puts("Yes")
#define      _N puts("No")
#define      showArr(v) for(auto it:v) cout<<it<<" "; cout<<E;
#define      Print(ans) cout<<ans<<E;
#define      Nitro()                      \
             ios_base::sync_with_stdio(false); \
             cin.tie(NULL);

using namespace std;



void himanshu3198()
{
   
 /* the idea is x and x+3 must have different parity
  means  last bit so if (x%2+sum(nums)%2)==y%2 ans will be alice else bob */
     ll n,x,y;
     cin>>n>>x>>y;

     vl a(n);
     fr(i,n) cin>>a[i];


     ll sum=0;
     for(auto &it:a) sum+=it;

    
       if((sum)%2==abs(y-x)%2){
           puts("Alice");
           return;
       }else{
           puts("Bob");
       }


}


int main()
{
    Nitro();
    int t = 1;
    cin >> t;

    while (t--)
    {

        himanshu3198();
    }

    return 0;
}
