#ifndef NFILE_H_
#define NFILE_H_
#include <string>
#include <fstream>
#include "html.h"
#include <iostream>
using namespace std;
namespace nfile
{
int nfile()
{
	int choice2;
	int thing2 =0;
	string header;
	string filename;
	cout <<"What would you like to name your file?\n";
	cout << "(don't put in the .html)\n";
	cin >> filename;
	string cssfile = filename;
	filename = filename +".html";
	ofstream outf(filename.c_str());
	outf << "<!DOCTYPE html>\n<html>\n<head><link rel=\"stylesheet\" href=\""<<cssfile<<".css\">\n<center><h1>"<< header << "<left></h1></head>\n<body>"<<endl;
		while(thing2==0)
		{
			std::cout<<"Would you like to add ...."<<endl;
			std::cout<<"1\t..a link"<<endl;
			std::cout<<"2\t..an image"<<endl;
			std::cout<<"3\t..a table "<<endl;
			//std::cout<<"4\t.."<<endl;
			std::cout<<"5\tquit"<<endl;
			cin>>choice2;
			if (choice2==5)
		{
			thing2++;
		}
		else if(choice2==1)
			{
				html::link(filename);
			}	
		}
return 0;
}

}
#endif 
