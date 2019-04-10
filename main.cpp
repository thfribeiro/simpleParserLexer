#include <iostream>
#include <string>
#include "util.h"
#define EOF -1
using namespace std;

char lookahead;
int contador = 0;
int aux;
string input;

int main()
{
    getline(cin,input);
    lookahead = nextToken();
    expr();
}
char nextToken()
{
    if(contador == input.length())
    {
        return EOF;
    }
    return input[contador++];
}

void expr()
{
    term();
    rest();
    cout << aux;
}

void rest()
{
    if(lookahead == '+')
    {
        match('+');
        term();
        rest();
    }
    else if(lookahead == '-')
    {
        match('-');
        term();
        rest();
    }
    else
    {

    }
}

void term()
{
    if(lookahead == '1')
    {
        match('1');
    }
    else if(lookahead == '2')
    {
        match('2');
    }
    else if(lookahead == '3')
    {
        match('3');
    }
    else if(lookahead == '4')
    {
        match('4');
    }
    else if(lookahead == '5')
    {
        match('5');
    }
    else if(lookahead == '6')
    {
        match('6');
    }
    else if(lookahead == '7')
    {
        match('7');
    }
    else if(lookahead == '8')
    {
        match('8');
    }
    else if(lookahead == '9')
    {
        match('9');
    }
    else if(lookahead == '0')
    {
        match('0');
    }
}

void match(char t)
{
    int ia;
    char aux1;

    if(t == '+')
    {
        aux1 = nextToken();
        ia = aux1 - '0';
        aux += ia;
        lookahead= nextToken();
    }
    else if(t=='-')
    {
        aux1 = nextToken();
        ia = aux1 - '0';
        aux -= ia;
        lookahead= nextToken();
    }
    else if(lookahead == t)
    {
        ia = t - '0';
        aux = ia;
        lookahead= nextToken();
    }
    else
    {
        cout << "Syntax Error";
    }

}

void print(char c)
{
    cout <<c;
}
