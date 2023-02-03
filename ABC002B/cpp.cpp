//atcoder.jp/contests/abc002/submissions/31734853
#include <iostream>
using namespace std;
int main(){
    string i;
    cin >> i;
    for(int j=0;j<i.size();j++){
        if(!(i.at(j)=='a'||i.at(j)=='e'||i.at(j)=='i'||i.at(j)=='o'||i.at(j)=='u')){
            cout << i.at(j) ;
        }
    }
    cout << endl;
}