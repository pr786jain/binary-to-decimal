#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int ans=0;
  int i=0;
  cout<<"Enter the Decimal number;
    cin>>n;
  while(n!=0)
  {
    int bit=n&1;
    ans= (bit*pow(10,i) +ans);
    n=n>>1; //right shift
    i++;
    
  }
  cout<<""decimal number" <<n<<" = binary number is "<<ans;
  return 0;
  
}
