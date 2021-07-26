#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int temp;
    bool prime=false;
    cin>>temp;
 for(int i=2;i<=temp/2;i++)
{
   if(temp%i==0)
     {cout<<"the number is not prime!";
     prime=true;
     break;}
}
if(prime==false)
 cout<<"the number is prime";

    return 0;
}
