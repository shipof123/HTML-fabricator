    #include <vector>
    #include "html.h"
    #include "test.h"
    #include <iostream>
    #include <stdio.h>
    //includes from other headers
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
            cin>>answer;
            if(answer==1)
                {
                    //function call
                }
            if(answer==2)
            {
                //function call
            }
            if (answer==3)
            {
                thing++;
            }
            if (answer==5)
                test::test();
            else
                cls();
        }
    return 0;
    }
