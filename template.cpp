//#define ENABLE_BOOST
//#define ENABLE_DISPLAY_TIME_ELAPSED
#define ENABLE_FAST_IO
//#define ENABLE_FILE_IO
//#define ENABLE_PBDS

#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
template <typename T>
using vc = vector<T>;
template <typename T>
using min_priority_queue = priority_queue<T, vc<T>, greater<T>>;
template <typename T>
using max_priority_queue = priority_queue<T, vc<T>, less<T>>;

/* Optional Units */
#ifdef ENABLE_BOOST
#include <boost/multiprecision/cpp_int.hpp>
using cpp_int = boost::multiprecision::cpp_int;
#endif

#ifdef ENABLE_DISPLAY_TIME_ELAPSED
#include <chrono>
using time_point = chrono::steady_clock::time_point;
time_point now(){
	return chrono::steady_clock::now();
}
#endif

#ifdef ENABLE_PBDS
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T1, typename T2>
using ordered_map = tree<T1, T2, less<T1>, rb_tree_tag, tree_order_statistics_node_update>;
#endif

/* Constants */
constexpr ll MODVAL = 1e9 + 7;

/* Input Helpers */
template <typename T1, typename T2>
istream& operator>>(istream &obj, pair<T1, T2> &p){
	obj >> p.first >> p.second;
	return obj;
}	

template <typename T>
void readv(vc<T> &v, int offset = 0){
	for(int i = offset; i < v.size(); ++i){
		cin >> v[i];
	}
}
template <typename T>
void readv(vc<vc<T>> &v, int offset = 0){
	for(int i = offset; i < v.size(); ++i){
		readv(v[i], offset);
	}
}

template <typename T>
istream& operator>>(istream &obj, vc<T> &v){
	readv(v);
	return obj;
}

/* Math Functions */
ll powermod(ll x, ll n, ll mod = MODVAL){
	if(n == 0){
		return 1;
	}
	else if(n % 2){
		return (x * powermod(x, n - 1, mod)) % mod; 
	}
	ll temp = powermod(x, n / 2, mod);
	return (temp * temp) % mod;
}
ll power(ll x, ll n){
	if(n == 0){
		return 1;
	}
	else if(n % 2){
		return (x * power(x, n - 1)); 
	}
	ll temp = power(x, n / 2);
	return (temp * temp);
}
map<ll, ll> modinv;
ll inv(ll n, ll mod = MODVAL){
	if(modinv[n] == 0){
		modinv[n] = powermod(n, mod - 2, mod);
	}
	return modinv[n];
}

/* Main */
int main(){

	#ifdef ENABLE_DISPLAY_TIME_ELAPSED
	time_point startTimeOfProgram = now();
	#endif

	#ifdef ENABLE_FAST_IO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	#endif

	#ifdef ENABLE_FILE_IO
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	#endif

	//START OF PROBLEM LOGIC
	//int T; cin >> T; while(T--){

	//}
	//END OF PROBLEM LOGIC

	#ifdef ENABLE_DISPLAY_TIME_ELAPSED
	time_point endTimeOfProgram = now();
	cout << "Time Elapsed: " << chrono::duration_cast<chrono::milliseconds>(endTimeOfProgram - startTimeOfProgram).count() << " ms\n";
	#endif 

 	return 0;
}