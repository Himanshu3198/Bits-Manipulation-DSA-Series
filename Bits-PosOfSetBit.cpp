#include <bits/stdc++.h>
using namespace std;

 int isPowerOfTwo(int n){

	 return n && (!(n&(n-1)));
 }

void method1(int n)
{

	cout << n << " " << bitset<8>(n) << "\n";
	if (n & (n - 1))
	{
		cout << "only single setbit accepted\n";
	}
	else
	{

		int ans = log2(n) + 1;
		cout << ans << "\n";
	}
}

 void method2(int n){

	 if(!isPowerOfTwo)
	 {

		//   return (-1);
		  cout<<"invalid Number( may have more than one set bit) \n";
	 }

	 else{
		 int i=1,pos=1;

		 while(!(i&n))
		 {                                  
			 i=i<<1;
			 pos++;

		 }
		 cout<<pos<<"\n";
	 }
	   


		


	   
 }
	int main()
	{

		int n = 16;
		method1(n);
		method2(n);
	}
