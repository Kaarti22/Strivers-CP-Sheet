#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define MOD 1000000007
#define pb push_back
#define popb pop_back
#define rep(i,a,b) for(int i=a; i<b; i++)
#define all(v) v.begin(),v.end()

void inparr(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void disarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void inpvec(vi &v, int n){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
}

void disvec(vi v, int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
}

int madd(int a,int b) {
    return (a+b)%MOD;
}

int msub(int a,int b){
    return (((a-b)%MOD)+MOD)%MOD;
}

int mmul(int a,int b){
    return ((a%MOD)*(b%MOD))%MOD;
}

class Kaarti{
public:
    void method(vector<string>& v, string& s){
        rep(i,0,5){
            if(v[i][0] == s[0] || v[i][1] == s[1]){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    vector<string> v(5);
    rep(i,0,5) cin>>v[i];
    Kaarti ob;
    ob.method(v, s);
    return 0;
}