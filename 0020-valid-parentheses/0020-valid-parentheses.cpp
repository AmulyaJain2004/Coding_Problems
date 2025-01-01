class Stack {
public:
    Stack(int size) : size(size), top(-1) {
        pta.resize(size);
    }

    void push(char element) {
        if (top != size - 1) {
            pta[++top] = element;
        }
    }

    char pop() {
        if (top != -1) {
            return pta[top--];
        }
        return -1;
    }

    char tos() const {
        if (top != -1) {
            return pta[top];
        }
        return -1;
    }

    bool isEmpty() const {
        return top == -1;
    }

private:
    int size;
    int top;
    std::vector<char> pta;
};

class Solution {
public:
    bool isValid(string s) {
        Stack st(s.length());

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.isEmpty()) return false;

            char topChar = st.tos();
            if ((topChar == '(' && ch == ')') ||
                (topChar == '{' && ch == '}') ||
                (topChar == '[' && ch == ']')) {
                st.pop();
            } else {
                return false;
            }
        }
    }

    return st.isEmpty();
    }
};