#ifndef HTML_H_
#define HTML_H_
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
namespace html
{
	int image(string filename)
	{
		ofstream outf(filename.c_str(),ios::app);
		string image, width, height;
		cout<<"ENTER THE IMAGE LOCATION(THE FILE ADRESS)"<<endl;
		cin >> image;
		cout<<"ENTER WIDTH\n";
		cin >> width;
		cout <<"ENTER HIEGHT\n";
		cin >> height;
		outf <<"<img src=\""<<image<<"\"width=\""<<width<<"\"\""<<height<<"\">";
		return 0;
	}
	int link(string filename)
	{
		string link;
		string text;
		ofstream outf(filename.c_str(),ios::app);
		cout<<"ENTER THE LINK(https::// is already there)"<<endl;
		cin>> link;
		cout<<"ENTER THE TEXT(NO SPACES)"<<endl;
		cin>> text;
		outf<<"<a href=\"https:://"<< link <<"\" target=\"_blank\">"<<text<<"</a>";	
		return 0;	
	}
}
#endif
