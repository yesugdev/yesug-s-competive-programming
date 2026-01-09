#include<bits/stdc++.h>
using namespace std;


template<typename T>
class minStack{

    private:
        stack<T>st;
        stack<T>mn;

    public:

        void push(T x){
            st.push(x);
            if(mn.empty() || x <= mn.top()){

                mn.push(x);
            }
        }
        void pop(){
            if(st.empty()) return;
            if(st.top() == mn.top()){
                mn.pop();
            }
            st.pop();
        }
        T top(){
            return st.top();
        }
        T getMin(){
            return mn.top();
        }
        bool empty(){
            return st.empty();
        }
        int size(){
            return st.size();
        }

};

int main(){


minStack<int> ms;
ms.push(1);
ms.push(2);
ms.push(3);
    cout << "Stack iin min :  " << ms.getMin() << endl;
    cout << "Stack iin top : ";
    cout << ms.top() << endl;

}