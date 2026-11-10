#include <iostream>
#include <string>
using namespace std;
string dup(string , bool);

int main(){
    string s;
    cout <<"enter string : ";
    cin >> s;
    cout<<dup(s,false);
    
}

string dup (string n, bool done){
    if (done) {
        return n;
    }
    int a = n.length();

    if( a == 0){
        return "0";
    }
    if(a % 2 != 0){
        return "0";
    }

    int mid = a/2;
    string right = n.substr(0, mid);
    string left = n.substr(mid,mid);

    if (right == left){
        left.erase(0,1);
        right.erase(0,1);
        return dup(right + left,true);
    }
    return "error";
}