#ifndef OFILE_H_
#define OFILE_H_
#include <string>
#include "CSS.h"
#include <stdio.h>
#include <fstream>
#include <iostream>
#include "html.h"
using namespace std;
namespace ofile
{
	int ofile()
	{
		string filename;
		int choice2;
		int thing2 =0;
		printf("Enter filename(w/o .html)\n");
		string cssfile=filename+".css";
		cin >>filename;
		filename=filename+".html";
		while(thing2<1)
		{
			std::cout<<"Would you like to add ...."<<endl;
			std::cout<<"0\t..text"<<endl;
			std::cout<<"1\t..a link"<<endl;
			std::cout<<"2\t..an image"<<endl;
			std::cout<<"3\t..a table "<<endl;
			std::cout<<"4\t..a css page"<<endl;
			std::cout<<"5\tquit"<<endl;
			cin>>choice2;
		if (choice2==5)
			{
				thing2++;
			}
		else if(choice2==0)
		{
			putchar(7);
		}
		else if(choice2==1)
			{
				html::link(filename);
			}	
		else if(choice2==2)
			{
				html::image(filename);
			}
		else if(choice2==3)
			{
				putchar(7);
				//html::table(filename);
			}
		else if(choice2==4)
		{
			css::startup(cssfile);
		}
		}
			return 0;
	}
}
#endif
