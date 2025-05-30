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
    vvi v = {
        {1, 1},
        {11, 2},
        {111, 3},
        {1111, 4},
        {2, 1},
        {22, 2},
        {222, 3},
        {2222, 4},
        {3, 1},
        {33, 2},
        {333, 3},
        {3333, 4},
        {4, 1},
        {44, 2},
        {444, 3},
        {4444, 4},
        {5, 1},
        {55, 2},
        {555, 3},
        {5555, 4},
        {6, 1},
        {66, 2},
        {666, 3},
        {6666, 4},
        {7, 1},
        {77, 2},
        {777, 3},
        {7777, 4},
        {8, 1},
        {88, 2},
        {888, 3},
        {8888, 4},
        {9, 1},
        {99, 2},
        {999, 3},
        {9999, 4},
    };

public:
    void method(int n){
        int ans = 0;
        for(auto it: v){
            ans += it[1];
            if(it[0] == n) break;
        }
        cout<<ans<<endl;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>>testcase;
    for(int t=0; t<testcase; t++){
        int n;
        cin>>n;
        Kaarti ob;
        ob.method(n);
    }
    return 0;
}