int main () {
    int i;
    int n=0;
    int primo=1;
    int secondo=1;
    int terzo=0;
    cin>>n;
    if(n>=2) {
        cout << primo << endl;
        cout << secondo << endl;

        for (i = 2; i < n; i++) {
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            cout << terzo << endl;
        }
    }
    return 0;
}
