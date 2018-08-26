#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

string q[9][1000];
string t[9]={" ","入门难度","普及--","普及/提高--","普及+/提高","提高+/省选--","省选/NOI--","NOI/NOI+/CTSC","难度未知"};
string v[9]={" ","e74c3c","e67e22","f1c40f","5eb95e","3498db","9b59b6","34495e","bbbbbb"};
int cnt[9];
int main() {
	freopen("problem.in","r",stdin);
	freopen("result.txt","w",stdout);
	
	string a,b;
	for(int i=1; ; i++) {
		cin>>a;
		if(a=="end") break;
		else cin>>b;
		if(b=="入门难度") {
			cnt[1]++;
			q[1][cnt[1]]=a;
		}
		if(b=="普及-") {
			cnt[2]++;
			q[2][cnt[2]]=a;
		}
		if(b=="普及/提高-") {
			cnt[3]++;
			q[3][cnt[3]]=a;
		}
		if(b=="普及+/提高") {
			cnt[4]++;
			q[4][cnt[4]]=a;
		}
		if(b=="提高+/省选-") {
			cnt[5]++;
			q[5][cnt[5]]=a;
		}
		if(b=="省选/NOI-") {
			cnt[6]++;
			q[6][cnt[6]]=a;
		}
		if(b=="NOI/NOI+/CTSC") {
			cnt[7]++;
			q[7][cnt[7]]=a;
		}
		if(b=="难度未知") {
			cnt[8]++;
			q[8][cnt[8]]=a;
		}
	}
	
	for(int k=1; k<=8; k++) {
		cout<<"* ![]("<<"https://img.shields.io/badge/"<<cnt[k]<<"-"<<t[k]<<"-"<<v[k]<<".svg)"<<endl<<endl;
		for(int i=1; i<=cnt[k]; i++) {
			cout<<"[![](https://img.shields.io/badge/"<<q[k][i]<<"-"<<t[k]<<"-"<<v[k]<<".svg)](https://www.luogu.org/problemnew/show/"<<q[k][i]<<")  ";
			if(i==cnt[k])cout<<endl;
		}
	}
}
