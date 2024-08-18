#include <bits/stdc++.h>
using namespace std;


int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n+1);
    vector<int>b(n+1);
    for(int i=1;i<=n;i++)
    {
      b[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        int person;
        cin>>person;
        int balance;
        cin>>balance;
        a[person]=balance;
        
    }
    int q;
    cin>>q;
    while(q--){
        int p1,p2,t;
        cin>>p1;
        cin>>p2;
        cin>>t;
        if(a[p1]>=t)
        {
            a[p1]=a[p1]-t;
            a[p2]=a[p2]+t;
            cout<<"Success"<<"\n";
        }
        else
        {
            cout<<"Failure"<<"\n";
            
        }

    }
    cout<<"\n";
    
    vector<pair<int, int>> balance;
    for (int i=1;i<=n;i++) {
    balance.push_back({a[i], b[i]});
        }
    sort(balance.begin(), balance.end());

   for (auto p : balance) {
    cout << p.second << " " << p.first << "\n";
      }
    return 0;
}
