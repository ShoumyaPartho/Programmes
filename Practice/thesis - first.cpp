// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

const int workLen = 64;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

double getVal(double r, double x) {
	double val = 0.0;

	if (x < 0.5)
		val = r * x;

	else
		val = r * (1 - x);

	return val;
}

string getBin(int ascii) {
	string str = "";

	while (ascii) {
		if (ascii & 1)
			str += "1";

		else
			str += "0";

		ascii >>= 1;
	}

	reverse(str.begin(), str.end());

	return str;
}

string getXor(string &x1, string &x2) {
	string str;
	str.append(workLen, '0');

	for (int i = 0; i < workLen; i++) {
		if (x1[i] == x2[i])
			str[i] = '0';

		else
			str[i] = '1';
	}

	return str;
}

string getBinDouble(double value) {
	// Interpret the double value as an unsigned long long

	unsigned long long binaryValue;
	memcpy(&binaryValue, &value, sizeof(binaryValue));

	// Convert the unsigned long long value to its binary representation
	string binaryString = bitset<sizeof(binaryValue) * 8>(binaryValue).to_string();

	// Ensure the string is 64 characters long
	if (binaryString.length() < workLen)
		binaryString = string(workLen - binaryString.length(), '0') + binaryString;

	return binaryString;
}

double binaryStringToDouble(const string& binaryStr) {
	// Convert binary string to unsigned long long
	unsigned long long intVal = bitset<workLen>(binaryStr).to_ullong();

	// Interpret the bits as double
	double result;
	memcpy(&result, &intVal, sizeof(result));

	return result;
}

double normalize(double v) {
	double ans = 1.7 + (v) * 0.3;

	return ans;
}

string getTentMapBin(const string &k0, const string &s0) {
	double val1 = binaryStringToDouble(k0);
	double val2 = binaryStringToDouble(s0);

	val1 		= normalize(val1);

	double res  = getVal(val1, val2);

	string ans  = getBinDouble(res);

	return ans;
}

string binaryToHex(const string& binaryStr) {
	string hexStr;
	for (int i = 0; i < binaryStr.length(); i += 4) {
		string chunk = binaryStr.substr(i, 4);
		int decimalValue = bitset<4>(chunk).to_ulong();
		char hexDigit = (decimalValue < 10) ? '0' + decimalValue : 'A' + (decimalValue - 10);
		hexStr += hexDigit;
	}
	return hexStr;
}
//3FFD4BC6A7EEB69A
//3FFD4BC6A7EEBB1B

void solve() {
	double r = 1.80, t = 0.00000001;
	//string m = "As the core of cryptography, hash is the basic technique for information security. Many of the hash functions generate the message digest through a randomizing process of the original message. Subsequently a chaos system also generates a random behavior, but at the same time a chaos system is completely deterministic";
	string m = "A";
	string binary_string = "";

	// Getting all the binaries
	for (int i = 0; i < m.size(); i++) {
		int ascii = (int) m[i];
		string str = getBin(ascii);
		binary_string += str;
	}

	int len = binary_string.size(), flag = 1;
	int remain = len % 1024;

	while (remain < 1024) {
		if (flag) {
			binary_string += "1";
			flag = 0;
		}

		else
			binary_string += "0";

		remain++;
	}

	// Algorithm section begins

	double ko = 1.831;
	string k0 = getBinDouble(ko), x1, x2, h1;
	cout << k0 << endl;
	int n = binary_string.size() / workLen;

	for (int i = 0; i < n; i++) {
		string s0 = binary_string.substr(i * n, n);
		x2 = k0;
		x1 = getTentMapBin(k0, s0);

		h1 = getXor(x1, x2);

		k0 = h1;
	}

	string ans = binaryToHex(h1);

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}