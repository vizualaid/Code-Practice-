#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
     if(n%2==0)
          {
		  if(n<6 && n>1)
		  {cout<<"Not Weird";}
              else if(n<21 && n>5)
			  {cout<<"Weird";}
              else if(n>21)
			  {cout<<"Not Weird";}
          }
        else {cout<<"Weird";}
    return 0;
}
