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
    void method(vvi& v){
        int row = -1, col = -1;
        rep(i,0,5){
            rep(j,0,5){
                if(v[i][j] == 1){
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        cout<<abs(row - 2) + abs(col - 2)<<endl;
    }
};

int32_t main(){
    vvi v(5, vi(5));
    rep(i,0,5){
        rep(j,0,5){
            cin>>v[i][j];
        }
    }
    Kaarti ob;
    ob.method(v);
    return 0;
}