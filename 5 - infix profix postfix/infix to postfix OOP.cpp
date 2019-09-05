#include<iostream>
#include<cstring>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

class mahbub
{
private:
    char infix[];
    int size;
    char postfix[];
public:

    int getWeight(char ch) {
   switch (ch) {
      case '/':
      case '*': return 2;
      case '+':
      case '-': return 1;
      default : return 0;
   }
}

void infix2postfix(char infix[], char postfix[], int size) {
   stack<char> s;
   int weight;
   int i = 0;
   int k = 0;
   char ch;

   while (i < size) {
      ch = infix[i];
      if (ch == '(') {

         s.push(ch);
         i++;
         continue;
      }
      if (ch == ')') {

         while (!s.empty() && s.top() != '(') {
            postfix[k++] = s.top();
            s.pop();

         }

         if (!s.empty()) {
            s.pop();
         }
         i++;
         continue;
      }
      weight = getWeight(ch);
      if (weight == 0) {
         postfix[k++] = ch;

      }
      else {
         //if (s.empty()) {
           //s.push(ch);
         //}
         //else {
            while (!s.empty() && s.top() != '(' &&
                  weight <= getWeight(s.top())) {
               postfix[k++] = s.top();
               s.pop();

            }
            // push the current operator onto stack
            s.push(ch);
         //}
      }
      i++;
   }
   while (!s.empty()) {
      postfix[k++] = s.top();
      s.pop();
   }
  postfix[k] = 0;
}

};

int main() {
    mahbub m;
   char infix[] = "A*(B+C)/D+c";
   int size = strlen(infix);
   char postfix[size];
   m.infix2postfix(infix,postfix,size);
   cout<<"\nInfix Expression :: "<<infix;
   m.infix2postfix(infix,postfix,size);
   cout<<"\nPostfix Expression :: "<<postfix;
   cout<<endl;
   return 0;
}

