#include <iostream>

void memoryLeak()
{
    std::string* panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
    panther = NULL;
}

int main() {

    memoryLeak();
    return 0;
}
