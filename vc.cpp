#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	
	int n;
	int count;
	cin>>n;
	vector<int> no(n);
	for(int i=0;i<n;i++){
		cin>>no[i];
	}
	int m;
	cin>>m;
	vector<int> lo(m);
	for(int i=0;i<m;i++){
		cin>>lo[i];
	}
	int s;
	cin>>s;
	vector<int> up(s);
	for(int i=0;i<s;i++){
		cin>>up[i];
	}
	vector<int> result(s);
	sort(no.begin(),no.end());
/*	for(auto x:no){
		cout<<x;
	}*/
    for(int i=0;i<m;i++){
    	count=0;
    	for(int j=0;j<n;j++){
    		if(no[j]==lo[i]){
    			count++;
			}
			else if(no[j]==up[i]){
				count++;
			}
			else if(no[j]>lo[i] && no[j]<up[i]){
				count++;
			}
		}
		result[i]=count;
	}	
	
	for(auto x: result){
		cout<<x;
	}
	
}
