//#define ENABLE_FILEIO
//#define ENABLE_BOOST
//#define ENABLE_PBDS
#define ENABLE_FASTIO

#include<bits/stdc++.h>
using namespace std;

/* Optional Units */
#ifdef ENABLE_BOOST
#include<boost/multiprecision/cpp_int.hpp>
using cpp_int = boost::multiprecision::cpp_int;
#endif

#ifdef ENABLE_PBDS
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using orderedSet = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T1, typename T2>
using orderedMap = tree<T1, T2, less<T1>, rb_tree_tag, tree_order_statistics_node_update>;
#endif

/* Constants */
const int64_t MODVAL = 1e9 + 7;

/* Input Helpers */
template <typename T1, typename T2>
istream& operator>>(istream &obj, pair<T1, T2> &p){
	obj >> p.first >> p.second;
	return obj;
}	

template <typename T>
void readv(vector<T> &v, int offset = 0){
	for(int i = offset; i < v.size(); ++i){
		cin >> v[i];
	}
}
template <typename T>
void readv(vector<vector<T>> &v, int offset = 0){
	for(int i = offset; i < v.size(); ++i){
		readv(v[i], offset);
	}
}

template <typename T>
istream& operator>>(istream &obj, vector<T> &v){
	readv(v);
	return obj;
}

/* Math Functions */
int64_t powermod(int64_t x, int64_t n, int64_t mod = MODVAL){
	if(n == 0){
		return 1;
	}
	else if(n % 2){
		return (x * powermod(x, n - 1, mod)) % mod; 
	}
	int64_t temp = powermod(x, n / 2, mod);
	return (temp * temp) % mod;
}
int64_t power(int64_t x, int64_t n){
	if(n == 0){
		return 1;
	}
	else if(n % 2){
		return (x * power(x, n - 1)); 
	}
	int64_t temp = power(x, n / 2);
	return (temp * temp);
}
map<int64_t, int64_t> modinv;
int64_t inv(int64_t n, int64_t mod = MODVAL){
	if(modinv[n] == 0){
		modinv[n] = powermod(n, mod - 2, mod);
	}
	return modinv[n];
}

/* Main */
int main(){

	#ifdef ENABLE_FASTIO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	#endif

	#ifdef ENABLE_FILEIO
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	#endif
    
 	return 0;
}
