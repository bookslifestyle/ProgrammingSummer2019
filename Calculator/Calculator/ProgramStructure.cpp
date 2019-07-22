#include "std_lib_facilities.h"
class Token { /* . . . */ }; 
class Token_stream { /* . . . */ }; 
void Token_stream::putback(Token t) { /* . . . */ } 
Token Token_stream::get() { /* . . . */ }
Token_stream ts;               // provides get() and putback() 
double expression();          // declaration so that primary() can call expression()
double primary() { /* . . . */ }   // deal with numbers and parentheses 
double term() { /* . . . */ }      // deal with * and / 
double expression() { /* . . . */ }  // deal with + and –
int main() { /* . . . */ }         // main loop and deal with errors
