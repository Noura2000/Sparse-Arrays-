#include <iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
    multiset<string>st;
    int n,q;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        st.insert(s);
    }
    cin>>q;
    while(q--)
    {
       cin>>s;
       cout<<st.count(s)<<endl;
    }
    return 0;
}
