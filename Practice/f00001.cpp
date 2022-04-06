#include<iostream>
using namespace std;

int main() {

    int secretnumber=69,guess;

    do {
        cout<<"Please enter your guess: ";
        cin>>guess;
        if(guess!=secretnumber) cout<<"Wrong! Try again"<<endl;
    }while(guess!=secretnumber);

    cout<<"You WIN!!!"<<endl;

    return 0;
}
