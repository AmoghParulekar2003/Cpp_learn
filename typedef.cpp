#include<iostream>
#include<vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
using number_t = int;

int main() {

    //typedef = reserved keyword used to create an additional name
    //          (alias) for another data type.
    //          New identifier for an existing type
    //          helps with readability and reduces typos
    //          use when there is a clear benefit
    //          replaced with 'using' (works better w/ templates)

    text_t firstName = "Bro";
    number_t age = 20;
    std::cout<<firstName<<"\n";
    std::cout<<age<<"\n";
    return 0;
}