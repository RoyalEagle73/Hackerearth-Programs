#include <iostream>
#include <math.h>
int main()
{
    int T, Floor_Num, A = 1, B = 7, Diff1 = 0, Diff2 = 0;
    std :: cin >> T;
    while(T--)
    {
        std :: cin >> Floor_Num;
        Diff1 = abs(A - Floor_Num);
        Diff2 = abs(B - Floor_Num);
        if(Diff1 < Diff2)
        {
            std :: cout << "A";
            A = Floor_Num;
        }
        else if( Diff2 < Diff1)
        {
            std :: cout << "B";
            B = Floor_Num;
        }
        else
        {
            std :: cout << "A";
            A = Floor_Num;
        }
    }
    return 0;
}