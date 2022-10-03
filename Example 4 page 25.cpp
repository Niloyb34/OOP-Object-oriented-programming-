/*It is important to understand that the return type alone is  not a sufficient difference to allow function overloading
.If two function differ only in the type of data they return,the compiler will not always be able to select the proper one to call
for example,this fragment is incorrect because it is inherently ambiguous*/
///this below program is incorrect and will not compile
///here both f1 have same number of parameters and same data type of parameters
///but only their return type of function is different
///one is integer and one is double
///but this is not enough for function overloading
int f1(int a);
double f1(int a);


f1(10);
///We will get a error in this case
///compiler will get confused kake se dakbe
