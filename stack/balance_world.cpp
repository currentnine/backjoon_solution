#include <iostream>
#include <stack>

using namespace std;

int main()
{
    while (1)
    {
        string input;
        getline(cin, input);

        if (input ==".") {break;}
        stack <char> st;
        bool flag = false;
        for(int i = 0;i<int(input.length());i++)
        {
            char c = input[i];
            if(c =='(' || c=='[' )
            {
                st.push(c);
            }
            else if(c==')')
            {
                if(!st.empty() && st.top()=='(')
                {
                    st.pop();
                }
                else{
                    flag = true;
                    break;
                }
            }
            else if (c==']')
            {
                if(!st.empty() && st.top()=='[' )
                {
                    st.pop();
                }
                else{
                    flag = true;
                    break;
                }
            }
           
        }
        
        if (!flag && st.empty()) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
    

}