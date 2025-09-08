#include <bits/stdc++.h>
using namespace std;
int uc(long long n, long long m){
	while(m != 0){
		long long r = n % m;
		n = m;
		m = r;
	}
	return n;
}
struct Phanso{
	long long a, b;	
};
void nhap(Phanso& p){
	cin >> p.a >> p.b;
}
void rutgon(Phanso& p) {
    long long x = __gcd(p.a, p.b);
    p.a /= x; p.b /= x;
}
void in(Phanso& p){	
	cout << p.a << "/" << p.b;
}
int main(){
	struct Phanso p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}