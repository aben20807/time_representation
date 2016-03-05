#include"timef.h"
int main()
{
    string mode;
    while(1)
    {
        printIntro();
        cin>>mode;
        if(mode=="e")
            break;
        else if(mode=="h")
            printHelp();
    }
    return 0;
}
