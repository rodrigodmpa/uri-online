#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,l,m,n;
	char ar[2000],br[1000],cr[1000];
	stack<char>arif;
	while(cin >> n && n){
		for(i=0;i<n;i++)
		cin >> ar[i];
		for(i=0;i<n;i++)
		cin >> br[i];
		m = k = 0;
		while(1){
			if(!arif.empty() && m<n && arif.top() == br[m]){
				arif.pop();
				cout <<"R";
				m++;
			}else if(k<n){
				cout<<"I";
				arif.push(ar[k]);
				k++;
			}else break;
		}
		if(arif.empty()) cout<<endl;
		else cout <<" Impossible\n";
		while(!arif.empty())
		arif.pop();
	}
  return 0;
}