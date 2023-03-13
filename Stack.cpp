#include<bits/stdc++.h>
#include "MyStack.h"

using namespace std;

int main()
{
    Stack st;
    st.push(2);
    st.push(6);
    st.push(54);
    st.push(88);
    st.push(99);
    cout<< st.pop()<<endl;
    cout<< "Size==="<< st.size()<<endl;
    cout<< "Top ==="<<st.Top()<<endl;

    while(!st.empty())
    {
        cout<< st.pop()<<endl;
    }

    
    return 0;

}
