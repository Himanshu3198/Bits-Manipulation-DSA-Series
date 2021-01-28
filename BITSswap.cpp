#include<bits/stdc++.h>
using namespace std;
 void swap(int &x,int &y)
  {
      if(x!=y)
      {
          x=x^y;
          y=x^y;
          x=x^y;
      }

  }
int main()
{
    int x=4,y=5;
    cout<<"Before swap \t"<<x<<" "<<y;
    swap(x,y);
    cout<<"\n after swap\t"<<x<<" "<<y;
    return 0;
}
