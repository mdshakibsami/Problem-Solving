#include <bits/stdc++.h>
using namespace std;

int main()
{
   char fruit[]="mango";
   char inFruit[60];
   do
   {
    cout<<"guess the fruit?"<<endl;
    cin>>inFruit;
   } while (strcmp(inFruit,fruit) !=0);
    cout<<fruit<<" is a correct answer"<<endl;
    return 0;
}