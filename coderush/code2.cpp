#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	long long a1,b1,c1,a2,b2,c2;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    long long ans=(pow(a1,2)+pow(b1,2)+pow(c1,2))+(pow(a2,2)+pow(b2,2)+pow(c2,2));
    cout<<ans;
    return 0;
}