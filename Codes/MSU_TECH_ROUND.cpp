
F26-GA-Interview - Partho Choudhury Shoumya

1)      What type of loop will execute at least once?
Do - While loop

2)      Write a loop to print odd numbers from 2 to 100
for(int i=3;i<100;i+=2)
	print(i);


3)      What will the following code do
#include<stdio.h>
#include <iostream>
using namespace std;
 
int main(){
 
  int number;
  int first, second;
  long answer =0;
 
  cout << "Enter first value: ";
  cin >> first;
 
  cout << "Enter a second number larger than the first value: ";
  cin >> second;
 
  for(number = first; number <= second; number++)
    if(number % 2 !=0)
      answer = answer + number;
 
  cout << "Printed result is: " << answer;
 
  return 0;
}
Ans: It will print the sum of odd numbers of given interval (from ‘first’ to ‘second’)
4)      What is the output?
 
#include <iostream>
using namespace std;
 
int main() {
 
int arr[] = {2, 4, 6, 8, 10};
int sum = 0;
 
for (int i = 0; i < 5; i += 2)
  	   sum += arr[i];
	
cout << sum;
return 0;
}

Ans: It will print the sum of elements of indexes 0,2 and 4 which would be 18

5)	What is the output?

#include <iostream>
using namespace std;

void do_nothing(int a[], int n) {
    for (int i = 0; i < n; i++)
        a[i] += i;
}

int main() {
    int a[] = {1, 1, 1, 1, 1};
    do_nothing (a, 5);
    cout << a[3];
    return 0;
}

Ans: 1

6)      What is the output?
 
#include <iostream>
using namespace std;
 
int main() {
	int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
	cout << mat[1][2] + mat[0][0];
	return 0;
}

Ans: 7

7)      Can a variable declared inside a function retain its value between function calls?
Ans: No it will not retain its value.

8)      Give an example of a function (or loop) with complexity O(1)
Ans: 
void print_it(int n){
	print(n);
}

9)       Give an example of a function (or loop) with complexity O(n)
void take_input(int n){
	Int x;
	cin>>x;
	for(int i=1;i<=n;i++){
		print(x);
}
}

