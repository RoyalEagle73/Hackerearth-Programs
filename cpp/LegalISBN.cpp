#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ISBN;
    int i, sum = 0;
    cin >> ISBN;
    for (int i = 0; i < ISBN.length(); i++)
    {
        sum = sum + (static_cast <int> (ISBN[i] - '0') * (i + 1));
    }
    if(sum % 11 == 0)
    cout << "Legal ISBN";
    else 
    cout << "illegal ISBN";
    return 0;
}