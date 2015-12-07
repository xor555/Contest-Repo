#include <bits/stdc++.h>
#define MAX 5000001
using namespace std;
typedef long long LL;

bool isprime[MAX];

void sieve()
{
    int i,j;

    isprime[1]=isprime[0]=false;
    isprime[2]=true;

    for(i=3; i<MAX; i+=2)  isprime[i]=true;
    for(j=4; j<MAX; j+=2)  isprime[j]=false;

    for(i=3; i*i<MAX; i+=2)
    {
        if(isprime[i]==false)   continue;
        for(j=i*i; j<MAX; j+=i) isprime[j]=false;
    }
}

int main()
{
    sieve();
    LL n;

    while(cin>>n){
        if(isprime[n]==true)
            cout << "Prime" << endl;
        else if(isprime[n]==false)
            cout << "Not Prime" << endl;
    }

    return 0;
}
