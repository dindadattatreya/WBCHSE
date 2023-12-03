#include <iostream>
using namespace std;
class Even
{
public:
void check (int num)
{if (num % 2 == 0)
cout << "Even no" << endl;
else
cout << "ODD no" << endl;
}
};
int main ()
{int num;
Even ob;
cout << "enter a no." << endl;
cin >> num;
ob.check (num);
return 0;
}
