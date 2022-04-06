// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

#define endl "\n"
#define ll long long int

class Bigint {
public:

	// representations and structures
	string a; // to store the digits
	int sign; // sign = -1 for negative numbers, sign = 1 otherwise

	// constructors
	Bigint() {} // default constructor

	Bigint( string b ) { (*this) = b; } // constructor for string

	// some helpful methods
	int size() { // returns number of digits

		return a.size();
	}

	Bigint inverseSign() { // changes the sign

		sign *= -1;
		return (*this);
	}

	Bigint normalize( int newSign ) { // removes leading 0, fixes sign

		for ( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- )
			a.erase(a.begin() + i);

		sign = ( a.size() == 1 && a[0] == '0' ) ? 1 : newSign;
		return (*this);
	}

	// assignment operator
	void operator = ( string b ) { // assigns a string to Bigint

		a = b[0] == '-' ? b.substr(1) : b;
		reverse( a.begin(), a.end() );
		this->normalize( b[0] == '-' ? -1 : 1 );
	}

	// conditional operators
	bool operator < ( const Bigint &b ) const { // less than operator

		if ( sign != b.sign )
			return sign < b.sign;

		if ( a.size() != b.a.size() )
			return sign == 1 ? a.size() < b.a.size() : a.size() > b.a.size();

		for ( int i = a.size() - 1; i >= 0; i-- ) {

			if ( a[i] != b.a[i] )
				return sign == 1 ? a[i] < b.a[i] : a[i] > b.a[i];
		}

		return false;
	}

	bool operator == ( const Bigint &b ) const { // operator for equality

		return a == b.a && sign == b.sign;
	}

	// mathematical operators
	Bigint operator + ( Bigint b ) { // addition operator overloading

		if ( sign != b.sign )
			return (*this) - b.inverseSign();

		Bigint c;

		for (int i = 0, carry = 0; i < a.size() || i < b.size() || carry; i++ ) {

			carry += (i < a.size() ? a[i] - 48 : 0) + (i < b.a.size() ? b.a[i] - 48 : 0);
			c.a += (carry % 10 + 48);
			carry /= 10;
		}

		return c.normalize(sign);
	}

	Bigint operator - ( Bigint b ) { // subtraction operator overloading

		if ( sign != b.sign )
			return (*this) + b.inverseSign();

		int s = sign; sign = b.sign = 1;

		if ( (*this) < b )
			return ((b - (*this)).inverseSign()).normalize(-s);

		Bigint c;

		for ( int i = 0, borrow = 0; i < a.size(); i++ ) {

			borrow = a[i] - borrow - (i < b.size() ? b.a[i] : 48);
			c.a += borrow >= 0 ? borrow + 48 : borrow + 58;
			borrow = borrow >= 0 ? 0 : 1;
		}

		return c.normalize(s);
	}

	Bigint operator * ( Bigint b ) { // multiplication operator overloading

		Bigint c("0");

		for ( int i = 0, k = a[i] - 48; i < a.size(); i++, k = a[i] - 48 ) {

			while (k--)
				c = c + b; // ith digit is k, so, we add k times

			b.a.insert(b.a.begin(), '0'); // multiplied by 10
		}

		return c.normalize(sign * b.sign);
	}

	Bigint operator / ( Bigint b ) { // division operator overloading

		if ( b.size() == 1 && b.a[0] == '0' )
			b.a[0] /= ( b.a[0] - 48 );

		Bigint c("0"), d;

		for ( int j = 0; j < a.size(); j++ )
			d.a += "0";

		int dSign = sign * b.sign; b.sign = 1;

		for ( int i = a.size() - 1; i >= 0; i-- ) {

			c.a.insert( c.a.begin(), '0');
			c = c + a.substr( i, 1 );

			while ( !( c < b ) )
				c = c - b, d.a[i]++;
		}

		return d.normalize(dSign);
	}

	Bigint operator % ( Bigint b ) { // modulo operator overloading

		if ( b.size() == 1 && b.a[0] == '0' )
			b.a[0] /= ( b.a[0] - 48 );

		Bigint c("0");
		b.sign = 1;

		for ( int i = a.size() - 1; i >= 0; i-- ) {

			c.a.insert( c.a.begin(), '0');
			c = c + a.substr( i, 1 );

			while ( !( c < b ) )
				c = c - b;
		}

		return c.normalize(sign);
	}

	// output method
	void print() {

		if ( sign == -1 ) cout << "-";

		for ( int i = a.size() - 1; i >= 0; i-- )
			cout << a[i];
	}
};

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	vector<Bigint> ara(10010);
	ara[1] = to_string(1); ara[2] = to_string(1);

	for (int i = 3; i < 10005; i++)
		ara[i] = ara[i - 1] + ara[i - 2];

	int n;

	while (scanf("%d", &n) != EOF) {
		ara[n].print();
		cout << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}