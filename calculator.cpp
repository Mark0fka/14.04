#include <iostream>
#include <cstdlib>
#include "pineapple.h"
using namespace std;
double Calc (double x, double y,  char op)
{
    switch (op)
    {
        case '+': return CalPlus (x, y); break;
        case '-': return CalMinus (x, y); break;
        case '*': return CalUmn (x, y); break;
        case '/': return CalDel (x, y); break;
    }
    return 0;
}
int main (int argc,char** argv)
{
    double x;
    double y;
    char op;
    if (argc >=3)
    {
        double x = atof (argv[1]);
        double y = atof (argv[3]);
        char op = argv [2] [0];
        double Result = Calc (x, y, op);
        cout <<"Result " << x << " " << op << " " << y << " " << "=" << " " << Result<<endl;
    }
    return 0;
}


