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
template<class T>void vvout_(vector<vector<T>> &vec){ for(auto& row : vec){ cout << row.at(0); for(int i=1; i<row.size(); i++){ cout << " " << row.at(i); } cout << endl; } }
template<class T>void YesNo(T a){ if(a){ cout << "Yes" << endl; }else{ cout << "No" << endl; } }

using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;

using ull = unsigned long long; // 1.84*10^19
using ll = long long; // ±9.22*10^18
// int // 4.29 × 10^9
// unsigned int // ±2.15 × 10^9
// float // 1.17*10^-38 ~ 3.40*10^38 8桁
// double // 2.22*10^-308 ~ 1.79*10^308 16桁


typedef long long int;

