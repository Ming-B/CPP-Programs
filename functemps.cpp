#include <iostream>

template <typename T> T maximum(T a, T b);

template <typename T> T multiply(T a, T b);

 int main(){
    //useful for method overloading. ie a lot of functions with different return types but generally the same process

    //set up a function blueprint
    //give mechanism to set up bllueprint for a function, them compiler generates actual functions depending on what you call in the code.
    //temps are just blueprints. not C++ code. Compier generates real code looking at the arguments you call your function with.
    //the real c++ function generated by the compiler is called a template instance.
    //once the template instance will be reused when a similar function call is issued. no duplicates are generated by the compiler.

    int a = 10;
    int b = 23;
    double c = 34.7;
    double d = 23.4;

    std::string e = "Hello";
    std::string f = "World";

    std::cout << maximum(a, b) << '\n';
    std::cout << maximum(c, d) << '\n';
    std::cout << multiply(a,b) << '\n';


 }

 template <typename T> T maximum(T a, T b){
   return (a > b) ? a : b; //a and b must support > operator. else error
 }

 template <typename T> T multiply(T a, T b){
   return a * b; //multiplying strings with this template will not work.
 }