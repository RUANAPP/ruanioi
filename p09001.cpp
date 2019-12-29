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
<<<<<<< HEAD
<<<<<<< HEAD
    for(=1;i<=10;++i)cin>>a[i];
=======
    for( i=1;i<=10;++i)cin>>a[i];
>>>>>>> 5c4f0680fe22102f72533ad140c5216526c59a0e
=======
    for( i=1;i<=10;++i)cin>>a[i];
>>>>>>> 3b7495dfab4ebddc355df5b58e632c2b45b9d7b7
=======
    for( i=1;i<=10;++i)cin>>a[i];
>>>>>>> b20c1cb6e3aecec3c70928f7dfb9b1a25e803691
    maxx=a[1];s=a[1];
    for(int i=2;i<=10;++i){
        if(s<0)s=0;
        s=s+a[i];
        if(s>maxx)maxx=s;
    }
    printf("%d",maxx);
    
    return 0;
}


