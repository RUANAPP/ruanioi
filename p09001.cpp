#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int s,maxx;
int a[11];
int main(int argc, char const *argv[])
{
    int i;
<<<<<<< HEAD
    for(i=1;i<=10;++i)cin>>a[i];
=======
    for( i=1;i<=10;++i)cin>>a[i];
>>>>>>> 3b7495dfab4ebddc355df5b58e632c2b45b9d7b7
    maxx=a[1];s=a[1];
    for(int i=2;i<=10;++i){
        if(s<0)s=0;
        s=s+a[i];
        if(s>maxx)maxx=s;
    }
    printf("%d",maxx);
    
    return 0;
}


