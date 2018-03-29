#ifndef HTML_H_
#define HTML_H_
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
namespace html
{
	int link(string filename)
	{
		string link;
		string text;
		ofstream outf(filename.c_str(),ios::app);
		cout<<"ENTER THE LINK(https::// is alreadey there)"<<endl;
		cin>> link;
		cout<<"ENTER THE TEXT(NO SPACES)"<<endl;
		cin>> text;
		outf<<"<a href=\"https:://"<< link <<"\" target=\"_blank\">"<<text<<"</a>";	
		return 0;	
	}
}
#endif
