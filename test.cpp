
#include <iostream>
#include<string>
#include<cmath>
using namespace std;
string next(string s)
{
	for (int i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == '1')
		{
			s[i] = '0';
			return s;
		}
		else
			s[i] = '1';
	}
}
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		cin>>s;
		string u;
		for(int i=0;i<s.size();i++)
			{
				u+='0';
			}
		if(u==s)
		{
		for(int i=0;i<s.size();i++)
			{
				cout<<1;
			}
			cout<<endl;
			continue;	
		}
		s = next(s);
		cout << s << endl;
	}
}


