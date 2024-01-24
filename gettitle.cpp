#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class bill
{
   private:
   	string title;
   	
	public:
		void settitle(string x)
		{
			title=x;
		}
	void gettitle()
	{
		return title;
	}
	
};
int main()
{
	 bill b;
	 b.settitle("print");
	 cout<<b.gettitle();
	return 0;
}