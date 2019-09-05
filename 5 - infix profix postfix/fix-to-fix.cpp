#include<bits/stdc++.h>
using namespace std;


class Stack{
private:
    const static int MAXN =150;
    char A[MAXN];
    int top;

public:
    Stack(){
        top=0;
    }

    void push(char data){
        A[top] = data;
        top++;
    }

    char pop(){
       return A[--top];
    }

    char peek(){
        return A[top-1];
    }

    bool isEmpty(){
        return top==0;
    }
};




int main(){

    Stack s, t;


    int n;
    char ch;
    string line, rian;

    cout << "Enter the number of your choice: " << endl;
    cout << "1. Infix " << endl;
    cout << "2. Prefix " << endl;
    cout << "3. Postfix " << endl;

    cin >> n;
    getc(stdin);

    //for infix
    if(n == 1){
            cout << "Enter your infix expression:" << endl;
            //input problem line
            getline(cin, line);

        //infix to postfix
        cout << "postfix: ";
        for(int i=0; line[i]; i++){

                if(line[i] == ' ') continue;
                else if(line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == '('){
                    if(s.isEmpty()) s.push(line[i]);
                    else if(line[i] == '(' ) s.push(line[i]);
                    else if(line[i] == '*' || line[i] == '/' ) s.push(line[i]);
                    else if(line[i] == '+' || line[i] == '-' ){
                        while(s.peek() == '*' || s.peek() == '/' ){
                                if(s.isEmpty())break;
                                t.push(s.peek());
                                s.pop();
                              }
                              s.push(line[i]);
                        while(!t.isEmpty()){
                                s.push(t.peek());
                                t.pop();
                        }
                    }
                   }
                   else if(line[i] == ')' ){
                    while(!s.isEmpty()){
                            ch = s.peek();
                            if(ch != '(')
                            cout << s.peek() << " ";
                            s.pop();
                          }
                   }
                   else cout << line[i] << " ";
        }
        while(!s.isEmpty()){
            ch=s.peek();
            if(ch != '(')
            cout << ch << " ";
            s.pop();
        }
        cout << endl;


        //infix to prefix
        cout << "prefix: ";
        for(int i= line.length()-1 ; i>=0; i--){
            if(line[i] == ' ')continue;
            else if(line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == ')'){
                if(s.isEmpty()) s.push(line[i]);
                else if(line[i] == ')') s.push(line[i]);
                else if(line[i] == '*' || line[i] == '/') s.push(line[i]);
                else if(line[i] == '+' || line[i] == '-'){
                    while(s.peek() == '*' || s.peek() == '/' || s.peek() == '+' || s.peek() == '-'){
                        t.push(s.peek());
                        s.pop();
                    }
                    s.push(line[i]);
                }
            }
            else if(line[i] == '('){
                        while(s.peek() != ')'){
                            t.push(s.peek());
                            s.pop();
                        }
                        s.pop();
            }
            else t.push(line[i]);

        }

        while(!s.isEmpty()){
            t.push(s.peek());
            s.pop();
        }

        while(!t.isEmpty()){
            ch = t.peek();
            if(ch=='(' || ch==')')continue;
            cout << ch << " ";
            t.pop();
        }
        cout << endl;
    }

    //for prefix
    else if(n == 2){
        cout << "Enter your prefix expression:" << endl;
        //input problem line
        getline(cin, line);

        //prefix to infix
        cout << "infix: ";
        for(int i= line.length()-1 ; i>=0; i--){

            if(line[i] == ' ') continue;
            else if(line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/'){
                if(s.peek() != '('){
                    t.push(s.pop());
                    t.push(line[i]);
                    if(s.peek() != '('){
                        t.push(s.pop());
                    }
                    else{
                        int m=0, k=0;
                        while (true) {
                            if(s.peek() == '(') m++;
                            if(s.peek() == ')') k++;

                            t.push(s.pop());
                            if(k==m) break;
                        }
                    }
                    s.push(')');
                    while (!t.isEmpty()) {
                        s.push(t.pop());
                    }
                    s.push('(');
                    continue;
                }
                else{
                    int m=0, k=0;
                    while (true) {
                        if(s.peek() == '(') m++;
                        if(s.peek() == ')') k++;

                        t.push(s.pop());
                        if(k==m) break;
                    }
                    t.push(line[i]);
                    if(s.peek() != '('){
                        t.push(s.pop());
                    }
                    else{
                        int o=0, p=0;
                        while (true) {
                            if(s.peek() == '(') o++;
                            if(s.peek() == ')') p++;

                            t.push(s.pop());
                            if(o==p) break;
                        }
                    }
                    s.push(')');
                    while (!t.isEmpty()) {
                        s.push(t.pop());
                    }
                    s.push('(');
                    continue;
                }
            }
            else{
                s.push(line[i]);
                continue;
            }
        }
        while (!t.isEmpty()) {
            t.pop();
        }

        while (!s.isEmpty()) {
            rian += s.peek();
            ch=s.peek();
            cout << ch;
            s.pop();
        }
        cout << endl;


        //prefix to postfix
        cout << "postfix: ";
        for(int i=0; rian[i]; i++){

                if(rian[i] == ' ') continue;
                else if(rian[i] == '+' || rian[i] == '-' || rian[i] == '*' || rian[i] == '/' || rian[i] == '('){
                    if(s.isEmpty()) s.push(rian[i]);
                    else if(rian[i] == '(' ) s.push(rian[i]);
                    else if(rian[i] == '*' || rian[i] == '/' ) s.push(rian[i]);
                    else if(rian[i] == '+' || rian[i] == '-' ){
                        while(s.peek() == '*' || s.peek() == '/' ){
                                if(s.isEmpty())break;
                                t.push(s.peek());
                                s.pop();
                              }
                              s.push(rian[i]);
                        while(!t.isEmpty()){
                                s.push(t.peek());
                                t.pop();
                        }
                    }
                   }
                   else if(rian[i] == ')' ){
                    while(!s.isEmpty()){
                            ch = s.peek();
                            if(ch != '(')
                            cout << s.peek() << " ";
                            s.pop();
                          }
                   }
                   else cout << rian[i] << " ";
        }
        while(!s.isEmpty()){
            ch=s.peek();
            if(ch != '(')
            cout << ch << " ";
            s.pop();
        }
        cout << endl;

    }

    //for postfix
    else if(n == 3){
        cout << "Enter your postfix expression:" << endl;
        //input problem line
        getline(cin, line);

        //postfix to infix
        cout << "infix: ";
        for(int i=0; line[i]; i++){

            if(line[i] == ' ') continue;
            else if(line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/'){
                if(s.peek() != ')'){
                    t.push(s.pop());
                    t.push(line[i]);
                    if(s.peek() != ')'){
                        t.push(s.pop());
                    }
                    else{
                        int m=0, k=0;
                        while (true) {
                            if(s.peek() == ')') m++;
                            if(s.peek() == '(') k++;

                            t.push(s.pop());
                            if(k==m) break;
                        }
                    }
                    s.push('(');
                    while (!t.isEmpty()) {
                        s.push(t.pop());
                    }
                    s.push(')');
                    continue;
                }
                else{
                    int m=0, k=0;
                    while (true) {
                        if(s.peek() == ')') m++;
                        if(s.peek() == '(') k++;

                        t.push(s.pop());
                        if(k==m) break;
                    }
                    t.push(line[i]);
                    if(s.peek() != ')'){
                        t.push(s.pop());
                    }
                    else{
                        int o=0, p=0;
                        while (true) {
                            if(s.peek() == ')') o++;
                            if(s.peek() == '(') p++;

                            t.push(s.pop());
                            if(o==p) break;
                        }
                    }
                    s.push('(');
                    while (!t.isEmpty()) {
                        s.push(t.pop());
                    }
                    s.push(')');
                    continue;
                }
            }
            else{
                s.push(line[i]);
                continue;
            }
        }
        while (!t.isEmpty()) {
            t.pop();
        }

        while (!s.isEmpty()) {

            t.push(s.pop());
        }

        while (!t.isEmpty()) {
            ch=t.peek();
            rian += ch;
            cout << ch;
            t.pop();
        }
        cout << endl;
        //cout << rian << endl;

        //postfix to prefix
        cout << "prefix: ";
        for(int i= rian.length()-1 ; i>=0; i--){
            if(rian[i] == ' ')continue;
            else if(rian[i] == '+' || rian[i] == '-' || rian[i] == '*' || rian[i] == '/' || rian[i] == ')'){
                if(s.isEmpty()) s.push(rian[i]);
                else if(rian[i] == ')') s.push(rian[i]);
                else if(rian[i] == '*' || rian[i] == '/') s.push(rian[i]);
                else if(rian[i] == '+' || rian[i] == '-'){
                    while(s.peek() == '*' || s.peek() == '/' || s.peek() == '+' || s.peek() == '-'){
                        t.push(s.peek());
                        s.pop();
                    }
                    s.push(rian[i]);
                }
            }
            else if(rian[i] == '('){
                        while(s.peek() != ')'){
                            t.push(s.peek());
                            s.pop();
                        }
                        s.pop();
            }
            else t.push(rian[i]);

        }

        while(!s.isEmpty()){
            t.push(s.peek());
            s.pop();
        }

        while(!t.isEmpty()){
            ch = t.peek();
            if(ch=='(' || ch==')')continue;
            cout << ch << " ";
            t.pop();
        }
        cout << endl;

    }


return 0;
}
