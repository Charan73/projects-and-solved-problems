#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==1)return 1;
    if(n==2)return 1;
    int partialans1=fibo(n-1);
    int partialans2=fibo(n-2);
    return partialans1+partialans2;
}

int main()
{
      int n;
    cin>>n;
    cout<<fibo(n);
}
