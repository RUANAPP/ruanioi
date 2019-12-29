#include<cstdio>
#include<cmath>
using namespace std;
int s,maxx;
int a[11];
int main()
{
fora(int i=1;i<=10;++i)
{
if(s<0) s=0;
s=s+a[i];
if(s>maxx) maxx=s;
}
printf("%d",maxx);//jia yuo ao li ge!!!
}
