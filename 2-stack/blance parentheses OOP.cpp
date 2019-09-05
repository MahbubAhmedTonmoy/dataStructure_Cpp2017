#include<bits/stdc++.h>
using namespace std;
class balance
{
private:
   int top = 0;
    int Stack[10000];
public:
    void push(char item)
    {
      Stack[top] = item;
      top++;
    }
char pop()
    {
      return(Stack[top--]);
    }
int check_paranthesis(char expression[])
{
      int i;
      char temp;
      for(i = 0; i < strlen(expression); i++)
      {
            if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
            {
                  push(expression[i]);
            }
            if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
            {

                        temp = pop();
            }
      }
      if(top == 0)
      {
            printf("The Expression is Valid\n");
      }
      else
      {
            printf("The Expression is Invalid\n");
      }
}
};
int main()
{
    balance b;
      char expression[1000];
      int validity;
      cout <<"nEnter an Algebraic Expression:\t";
      cin >> expression;
      //scanf("%s", expression);
      b.check_paranthesis(expression);

}

/*

#include<bits/stdc++.h>
using namespace std;

#define MAX 25

class balance
{
private:
   int top = -1;
    int Stack[MAX];
public:
    void push(char item)
{
      if(top == (MAX - 1))
      {
            printf("Stack is Full\n");
            return;
      }
      top++;
      Stack[top] = item;
}

char pop()
{
      if(top == -1)
      {
            printf("Stack is Empty\n");
            exit(1);
      }
      return(Stack[top--]);
}

int match_paranthesis(char a, char b)
{
      if(a == '[' && b == ']' || a == '{' && b == '}' || a == '(' && b == ')')
      {
            return 1;
      }
      return 0;
}

int check_paranthesis(char expression[])
{
      int i;
      char temp;
      for(i = 0; i < strlen(expression); i++)
      {
            if(expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
            {
                  push(expression[i]);
            }
            if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
            {
                  if(top == -1)
                {
                        printf("The Right Parentheses are more than the Left Parentheses\n");
                        return 0;
                  }
                  else
                  {
                        temp = pop();
                        if(!match_paranthesis(temp, expression[i]))
                        {
                              printf("The Mismatched Parentheses in the Expression are:\t%c and %c\n", temp, expression[i]);
                              return 0;
                        }
                  }
            }
      }
      if(top == -1)
      {
            printf("\nThe Expression has Balanced Parentheses\n");
            return 1;
      }
      else
      {
            printf("The Expression has unbalanced parentheses\n");
            return 0;
      }
}

};



int main()
{
    balance b;
      char expression[MAX];
      int validity;
      printf("\nEnter an Algebraic Expression:\t");
      scanf("%s", expression);
      validity = b.check_paranthesis(expression);
      if(validity == 1)
      {
            printf("The Expression is Valid\n");
      }
      else
      {
            printf("The Expression is Invalid\n");
      }
      return 0;
}
*/
