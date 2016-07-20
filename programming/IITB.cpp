#include<iostream>
using namespace std;/*int main()
{

    int c, b, n = 58;
   for (c = -4; c <= 4; c++) {
        b = c*c*c + c*c - c;
        if (c*c*c >= c*c || b == 1)
             n++;
   }
   cout << b<<"\n";
   cout << n;
}*/
int main() {
    int a = 9, b = 5, sense, strive;
    int loop=0;

    sense = 8*a + 9*b;
    strive = 3*a + 4*b;

    while(sense > strive) {
            loop++;
        sense = sense - 3;
        strive = strive + 2;
    }
    cout<<loop;
    return 0;
}
