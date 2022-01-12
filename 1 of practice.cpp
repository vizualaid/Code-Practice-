
#include <iostream>

using namespace std;
void sol()
{ int n, sum=0;
  cin>>n;
  for(int i=1; i<n;i++)
  { if(n%i==0)
    sum= sum+i;	
  }
 if(sum==n)
 { cout<<"YES \n";}
 else cout<<"NO \n";


}
int main() {
	int t;
	cin >> t;

	while(t--)
	{sol();
	//cout<<'\n'
	}

}
