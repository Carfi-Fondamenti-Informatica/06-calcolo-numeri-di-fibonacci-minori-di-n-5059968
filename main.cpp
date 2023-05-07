#include <iostream>
using namespace std;
int main() {
    int n=0;
    cin>>n;
    int x1=1;
    int x2=1;
    int x3=0;
    if (n>=1){
    cout<<x1<<endl;
    cout<<x2<<endl;
    while(x3<n){
        x3=x1+x2;
        x1=x2;
        x2=x3;
        cout<<x3<<endl;
        n--;
    }}
    return 0;
}
