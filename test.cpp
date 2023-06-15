#include <iostream>
using namespace std;
int main()
{

    int a;
    cin >> a;
    while(a--)
    {
        int x,y;
        cin >> x >> y;
        if(x<y)
        cout << "<" << endl;
        else if(x == y)
        cout << '=' << endl;
        else cout << ">" << endl;
        
    }
}