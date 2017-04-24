#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;

string makeOutWord(string out, string word);

int main()
{
    
    assert(makeOutWord("<<>>", "Yay") == "<<Yay>>");
    assert(makeOutWord("<<>>", "WooHoo") == "<<WooHoo>>");
    assert(makeOutWord("[[]]", "word") == "[[word]]");
    assert(makeOutWord("{{}}", "Hello") == "{{Hello}}");
    assert(makeOutWord("(())", "BOOM") == "((BOOM))");


    return 0;
}

string makeOutWord(string out, string word)
{
      
    return out.insert(2, word);

}
