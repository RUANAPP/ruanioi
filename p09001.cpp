#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int s,maxx;
int a[11];
int main(int argc, char const *argv[])
<<<<<<< HEAD
{   int i;
=======
{
    int i;
>>>>>>> b7bff3075d9d638b0ff199ce60f5c990083ee28f
    for(i=1;i<=10;++i)cin>>a[i];
    maxx=a[1];s=a[1];
    for(int i=2;i<=10;++i){
        if(s<0)s=0;
        s=s+a[i];
        if(s>maxx)maxx=s;
    }
    printf("%d",maxx);
    
    return 0;
}


