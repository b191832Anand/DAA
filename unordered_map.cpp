#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{    // unordered map are not follow the order
	unordered_map<int,string>m;
	m[1]="adc";
	m[5]="agb";
	m[3]="wer";
	// and all function is same as the map 
	//but the time complexity is differnt  
	// pairs are not used in the unordered_map;
	cout<<m[5]<<endl;
	for(auto &i:m)
		cout<<i.first<<"  "<<i.second<<endl;
}