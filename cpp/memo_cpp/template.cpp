#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
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

template<class T>void yesno(T &a){ if(a){ cout << "yes" << endl; } else { rcout << "no" << endl; } }
template<class T>void YesNo(T &a){ if(a){ cout << "Yes" << endl; } else { rcout << "No" << endl; } }
template<class T>void YESNO(T &a){ if(a){ cout << "YES" << endl; } else { rcout << "NO" << endl; } }

using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;

typedef long long int;

void Main()
{
	bool isYes = true;
	YesNo(isYes);
}

int main()
{
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	std::cout << std::fixed << std::setprecision(15);
	Main();
}