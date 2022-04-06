#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

class Book{
public:
    string author,title;

    inline bool operator<(const Book & another){
        if(author!=another.author) return author<another.author;
        return title<another.title;
    }
};

void ReadBooks(vector<Book> & allbook){
    string temp;
    Book book;
    bool fword=true;

    while(cin>>temp,temp!="END"){
        fword=true;
        while(*(temp.end()-1)!='"'){
            if(!fword) book.title+=" ";
            else book.title="";

            book.title+=temp;
            fword=false;
            cin>>temp;
        }
        if(!fword) book.title+=" ";
        else book.title="";

        book.title+=temp;
        cin>>temp;
        cin.ignore();
        getline(cin,book.author);

        allbook.push_back(book);
    }
}

int main(){
    vector<Book> allbook;
    ReadBooks(allbook);

    sort(allbook.begin(),allbook.end());

    int booknum=allbook.size();
    map<string,int> m;
    for(int i=0;i<booknum;i++) m[allbook[i].title]=i;

    vector<bool> borrowed(booknum,false);
    vector<bool> returned(booknum,false);
    string command, bname;

    while(cin>>command,command!="END"){
        if(command=="BORROW"){
            cin.ignore();
            getline(cin,bname);
            borrowed[m[bname]]=true;
            returned[m[bname]]=false;
        }
        else if(command=="RETURN"){
            cin.ignore();
            getline(cin,bname);
            returned[m[bname]]=true;
        }
        else{
            int prev=-1;

            for(int i=0;i<booknum;i++){
                if(!borrowed[i]) prev=i;
                else if(returned[i]){
                    if(prev==-1) cout<<"Put "<<allbook[i].title<<" first"<<endl;
                    else cout<<"Put "<<allbook[i].title<<" after "<<allbook[prev].title<<endl;
                    returned[i]=false;
                    borrowed[i]=false;
                    prev=i;
                }
            }
            cout<<"END"<<endl;
        }
    }
    return 0;
}
