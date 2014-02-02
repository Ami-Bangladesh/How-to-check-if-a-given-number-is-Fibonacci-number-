#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

bool isPerfectSquare(unsigned long x)
{
  unsigned long s = sqrt(x);
  return (s*s == x);
}

bool isFibonacci(unsigned long n)
{
     return isPerfectSquare(5*n*n + 4) ||
            isPerfectSquare(5*n*n - 4);
}


int main()
{
    long T;
	unsigned long n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		isFibonacci(n) ? cout<<"IsFibo"<<endl : cout<<"IsNotFibo"<<endl;
	}
	return 0;
}

/*
//alternate accepted solution 

#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() 
{
	// your code goes here
	unsigned long int N;
	long T;
	cin>>T;
	while(T--)
	{
	 cin>>N;
	 double dRes1 = sqrt((5*pow(N, 2))-4);
     unsigned long int nRes1 = (unsigned long int)dRes1;
     double dDecPoint1 = dRes1 - nRes1;
     double dRes2 = sqrt((5*pow(N, 2))+4);
     unsigned long int nRes2 = (unsigned long int)dRes2;
     double dDecPoint2 = dRes2 - nRes2;
     if( !dDecPoint1 || !dDecPoint2 )
         cout<<"IsFibo"<<endl;
     else
         cout<<"IsNotFibo"<<endl;
   }
	return 0;
}
*/
