
#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,c,i,n=150;
for(i=1;i<=n;i++)
{
c=a+b;
a = b; // used swapping here
b = c; // used sqapping here
cout<< c<<" ";
}
return 0;

}
