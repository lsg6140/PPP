#include "std_lib_facilities.h"






int main() {
cout<<"Expression: ";
int lval = 0;
int rval;
char op;
int res;
cin>>lval>>op>>rval;  // read something like 1+3

if (op=='+')
  res = lval+rval;  // addition
 else if(op=='-')
   res = lval-rval;  // subtraction

cout<<"Result: "<<res<<'\n';
return 0;
}
