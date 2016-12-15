#include <bits/stdc++.h>
using namespace std;
//Both a and b cannot be zero
long long int GCDEuclid(long long int a, long long int b){
    if(b==0)
        return a;
    return GCDEuclid(a, a%b);
}
long long int LCM(long long int a, long long int b){
    return b*a/GCDEuclid(a, b);
}
int main()
{
    for(long long int i=0;i<50;i++){
        long long int a = rand() % 100;
        long long int b = rand() % 100;
        cout<<a<<", "<<b<<" "<<GCDEuclid(a, b)<<endl;
    }
    return 0;
}