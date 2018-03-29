    #include <vector>
    #include "nfile.h"
    #include "ofile.h"
    #include <iostream>
    #include <stdio.h>
     void cls()
    {
        for(int i=1;i<26;i++)
        printf("\n");
    }
    int main()
    {
        using namespace std;
        cout<<"WELCOME to REALLY BAD PROGRAM Shipof MADE!!!!"<<endl;
        cout <<"--------------------------------------------"<<endl;
        int answer;
        int thing = 0;
        while(thing<1)
        {
            cout<<"Please select an option "<<endl;
            cout<<"\t\t1-Create new project"<<endl;
            cout<<"\t\t2-Append old project"<<endl;
            cout<<"\t\t3-Quit"<<endl;
            cout<<"\t\t";
            cin>>answer;
            if(answer==1)
                {
                ofile::ofile();
                }
            if(answer==2)
            {
                nfile::nfile();
            }
            if (answer==3)
            {
                thing++;
            }
            else
            {
				cls();
            }
        }
        printf("\n");
    return 0;
    }
