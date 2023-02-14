// atcoder.jp/contests/abc002/submissions/32077689 一部改変
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,tomoa,tomob,maxes=1,count;
    cin >> n >> m;
    vector<int> hatou(n);
    vector<vector<bool>> siriai(n, vector<bool>(n));
    for(int i=0;i<m;i++){
        cin >> tomoa >> tomob;
        siriai[tomoa-1][tomob-1] = true;
    }
    for(int bit=0;bit<(1<<n);bit++){
        count=0;
        for(int i=0;i<n;i++){
            if(bit&(1<<i)){
                hatou[count]=i;
                count++;
            }
        }
        for(int i=0;i<count;i++)for(int j=i+1;j<count;j++)if(!siriai[hatou[i]][hatou[j]])goto badhatou;
        maxes=max(maxes,count);
        badhatou:
        n=n;
    }
    cout << maxes << endl;
}
