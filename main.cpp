
#include <vector>
#include <iostream>
#include "suffixtree.h"

int main()
{
    std::string text = "banana";

    SuffixTree suffixTree(text);

    std::vector<std::string> patterns = { "ban", "anna", "ana", "nana" };

    int pos;

    for(int i = 0; i < patterns.size(); i++)
    {
        pos = suffixTree.find(patterns[i]); // check if pattern is in the text "banana" and returns its position in the text, if the pattern is not in the text returns -1
        
        if(pos != -1)
            std::cout << patterns[i] << " | found at position " << pos << std::endl;
        else
            std::cout << patterns[i] << " | -1 " << std::endl;
    }
}
