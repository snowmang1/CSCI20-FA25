#include <stack>
#include <cstdio>
#include <cstdlib>

using std::stack;
using std::printf;

/*
encode operations: + = 9999, - = 9998, * = 10000

calc is using prefix notation, prefix stacking equations
1 + 1 => +11
1 + 1 + 2   => +(+11)2
            => not +11+2
*/

stack<int> addition_on_numbers(stack<int> st, int op) {
    if(op == 9999) {
        int new_op = st.top();
        st.pop();
        addition_on_numbers(st, new_op);
        return ;
    }
    else {
        // numbers
        printf("your result is %d", (op + st.top()));
        st.pop();
        return 0;
    }
}

void choice(stack<int> st, int op) {
    if(op == 9999) {
        // addition
        int new_op = st.top();
        st.pop();
        addition_on_numbers(st, new_op);
    }
    else {
        // we can see both numbers
        printf("WRONG FUNCTION first number %d, second number %d", op, st.top());
    }
    return ;
}

int main() {
    // making a stack from the stack library
    stack<int> st;

    // push the equation +11
    st.push(1);
    st.push(1);
    st.push(9999);

    // we know that 9999 = +
    // stack : 9999 1 1

    int op = st.top();
    st.pop();
    choice(st, op);

    return 0;
}