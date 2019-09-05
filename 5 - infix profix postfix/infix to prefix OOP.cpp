#include<bits/stdc++.h>
using namespace std;

class mahbub
{
private:
   char infix[];
   char prefix[];
   int l;
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

void infix2prefix(char infix[], char prefix[], int size) {
   stack<char> s;
   int weight;
   int i ;
   int k = 0;
   char ch;

   for(i=size-1;i>=0;) {
      ch = infix[i];

      if (ch == ')') {

         s.push(ch);
         i--;
         continue;
      }
      if (ch == '(') {

         while (!s.empty() && s.top() != ')') {
            prefix[k++] = s.top();
            s.pop();
         }
         if (!s.empty()) {
            s.pop();
         }
         i--;
         continue;
      }
      weight = getWeight(ch);
      if (weight == 0) {
         prefix[k++] = ch;

      }
      else {
         if (s.empty()) {
            s.push(ch);
         }
         else {
            while (!s.empty() && s.top() != ')' && weight <= getWeight(s.top())) {
               prefix[k++] = s.top();
               s.pop();
            }
            // push the current operator onto stack
            s.push(ch);
         }
      }
      i--;
   }

   while (!s.empty()) {
      prefix[k++] = s.top();
      s.pop();
   }
   prefix[k] = 0;

}


};

int main() {
   /*
    char expression[MAX];
      int validity;
      printf("\nEnter an Algebraic Expression:\t");
      scanf("%s", expression);

     */
     mahbub m;
   char infix[] = "(a+b*c)-(d-k)";
   int size = strlen(infix);
   char prefix[size];
   m.infix2prefix(infix,prefix,size);
   cout<<"\nInfix Expression :: "<<infix;
   cout<<"\n before reverse prefix expression :: "<<prefix;
   cout<<"\nPrefix Expression :: ";
   int len = strlen(prefix);
   for(int i=len;i>=0;i--)
    cout << prefix[i];
   cout<<endl;
   return 0;
}


