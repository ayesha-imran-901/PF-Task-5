#include<iostream>
using namespace std;
int main() 
{
int n,cube;
cout<<"Enter an integer"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
  {
    cube=i*i*i;
    cout<<"Cube of "<<i<<"="<<cube<<endl;
  }
    return 0;
}