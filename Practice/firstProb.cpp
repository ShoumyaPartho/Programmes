// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class ListNode {
public:
	int val;
	ListNode * next;

	ListNode() {
		val = 0;
		next = NULL;
	}

	ListNode(int num) {
		val = num;
		next = NULL;
	}
};

ListNode * head = NULL, * headEven = NULL, * headOdd = NULL, * endOdd = NULL;

void insertNode(int num) {
	ListNode * tmp = new ListNode(num);
	ListNode * ptr = new ListNode();

	if (head == NULL) {
		head = tmp;
		return;
	}

	ptr = head;

	while (1) {
		if (ptr->next == NULL) {
			ptr->next = tmp;
			break;
		}
		ptr = ptr->next;
	}
}

void insertOddNode(int num) {
	ListNode * tmp = new ListNode(num);
	ListNode * ptr = new ListNode();

	if (headOdd == NULL) {
		headOdd = tmp;
		return;
	}

	ptr = headOdd;
	endOdd = ptr;

	while (1) {
		if (ptr->next == NULL) {
			ptr->next = tmp;
			endOdd = tmp;
			break;
		}
		ptr = ptr->next;
	}
}

void insertEvenNode(int num) {
	ListNode * tmp = new ListNode(num);
	ListNode * ptr = new ListNode();

	if (headEven == NULL) {
		headEven = tmp;
		return;
	}

	ptr = headEven;

	while (1) {
		if (ptr->next == NULL) {
			ptr->next = tmp;
			break;
		}
		ptr = ptr->next;
	}
}

void printList() {
	if (head == NULL)
		return;

	ListNode * ptr = new ListNode();
	ptr = head;

	while (1) {
		cout << ptr->val << " ";
		if (ptr->next == NULL) {
			cout << endl;
			break;
		}

		ptr = ptr->next;
	}
}

void reGroup() {
	if (head == NULL)
		return;

	ListNode * ptr = new ListNode();
	ptr = head;

	while (1) {
		if ((ptr->val) % 2)
			insertOddNode(ptr->val);

		else
			insertEvenNode(ptr->val);

		if (ptr->next == NULL)
			break;
		ptr = ptr->next;
	}

	if (headOdd == NULL)
		head = headEven;

	else if (headEven == NULL)
		head = headOdd;

	else {
		endOdd->next = headEven;
		head = headOdd;
	}

	headOdd = NULL;
	headEven = NULL;

}

void solve() {
	int n = 7, num, x;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		insertNode(x);
	}

	printList();

	reGroup();

	printList();
}

int main() {
	fastIO();

	solve();

	return 0;
}