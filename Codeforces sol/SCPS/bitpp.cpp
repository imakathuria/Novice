/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;
    n-=1;
    while(n--){
        string ss;
        cin>>ss;
        if(ss=="X++" || ss=="++X"){
            x++;
        }else{
            x--;
        }
    }
    string s;
    cin>>s;
    if(s=="X++" || s=="X--"){
        cout<<x<<endl;
    }else{
        if(s=="++X"){
            cout<<++x;
        }else if(s=="--X"){
            cout<<--x;
        }
    }
    
    return 0;
}
