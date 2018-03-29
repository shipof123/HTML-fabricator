#ifndef CSS_H_
#define CSS_H_
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
namespace css
{
	int startup(string cssfile)
	{
		string choice3;
		ofstream outf(cssfile.c_str(),ios::app);
		cout<<"What elements would you like to alter?\n \t1. p\n\t2. background\n\t\t\t";
		cin>> choice3;
			if(choice3=="1")
		{
			putchar(7);
		}
		else if(choice3=="2")
		{
			putchar(7);
		}
		else
		{
		putchar(7);
		}
		return 0;
	}
}
#endif
