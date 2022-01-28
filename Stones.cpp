#include <iostream>
using namespace std;
int main(){
    int s=0,n;
    string ch;
    cin >> n;
    cin>>ch;
    for(int i=0;i<n;i++)
    { 
        if(ch[i]==ch[i+1])
        {
            s++;
        }
    }
    cout << s;
}