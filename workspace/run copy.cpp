#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i=(a); i<(b); i++)
#define RFOR(i, a, b) for(int i=(b)-1; i>=(a); i--)
#define REP(i, n) for(int i = 0; i<(n); i++)
#define RREP(i, n) for(int i=(n)-1; i>=0; i--)
#define ALL(x) (x).begin(),(x).end()

template<class T>bool chmax(T &a, const T &b){ if(a<b){ a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b){ if(b<a){ a=b; return true; } return false; }
template<class T>void vin(vector<T> &vec){ for(auto& element: vec){ cin >> element; } }
template<class T>void vvin(vector<vector<T>> &vec){ for(auto& row : vec){ for(auto& element : row){ cin >> element; } } }
template<class T>void vout(vector<T> &vec){ cout << vec.at(0); for(int i=1; i<vec.size(); i++){ cout << vec.at(i); } cout << endl; }
template<class T>void vvout(vector<vector<T>> &vec){ for(auto& row : vec){ cout << row.at(0); for(int i=1; i<row.size(); i++){ cout << row.at(i); } cout << endl; } }
template<class T>void vout_(vector<T> &vec){ cout << vec.at(0); for(int i=1; i<vec.size(); i++){ cout << " " << vec.at(i); } cout << endl; }
template<class T>void vout_n(vector<T> &vec){ cout << vec.at(0); for(int i=1; i<vec.size(); i++){ cout << "\n" << vec.at(i); } cout << endl; }
template<class T>void vvout_(vector<vector<T>> &vec){ for(auto& row : vec){ cout << row.at(0); for(int i=1; i<row.size(); i++){ cout << " " << row.at(i); } cout << endl; } }

using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;

using Graph = vector<vector<int>>;

ll count_combinations(ll n) {
  return n * (n - 1) / 2;
}

ll suuretuwa(ll x){
    if(x>0){
        return suuretuwa(x-1)+x;
    }else{
        return 0;
    }
}

void Main()
{   

    ll n,k;
    cin >> n >> k;
    
    vll A; 

    ll sum = 0;
    sum = suuretuwa(k);

    ll a;
    REP(i, n){
        cin >> a;
        
        bool find = false;
        for(ll a_ : A){
            if(a_==a){
                find = true;
            }
        }
        if(!find){
            sum-=a;
            A.push_back(a);
        }
    }





    cout << sum<< endl;



}

int main()
{
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	std::cout << std::fixed << std::setprecision(15);
	Main();
}