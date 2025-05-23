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
    void method(string& s){
        int one = 0, two = 0, three = 0;
        for(auto it: s){
            if(it == '+') continue;
            if(it == '1') one++;
            else if(it == '2') two++;
            else three++;
        }
        int plus = one + two + three - 1;
        rep(i,0,plus){
            if(one > 0){
                cout<<"1+";
                one--;
            } else if(two > 0){
                cout<<"2+";
                two--;
            } else {
                cout<<"3+";
                three--;
            }
        }
        if(one > 0) cout<<"1"<<endl;
        else if(two > 0) cout<<"2"<<endl;
        else cout<<"3"<<endl;
    }
};

int32_t main(){
    string s;
    cin>>s;
    Kaarti ob;
    ob.method(s);
    return 0;
}