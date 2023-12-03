

#include <iostream>
#include<time.h>
using namespace std;
int main() {
    // Write C++ code here
 /*   int number;
    cin>>number;
    int guess;
    while(number!=guess)
    {
        cout<<"Enter guess:";
        cin>>guess;
    }
   cout<<" You win"<<endl;
 */ 
 srand(time(0));
for(int i =0;i<4;i++)
{
cout<<rand() % 20<<" "<<endl;
}
}

