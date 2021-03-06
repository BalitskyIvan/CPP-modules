#include "Pony.hpp"

static void printPonyParameters(Pony *pony)
{
    std::cout << "Hello, I am " + pony->getName() + " and my color is " + pony->getColor() +
    ", I can accelerate to " + std::to_string(pony->getMaxSpeed()) + " and my rating is " +
    std::to_string(pony->getRate()) + "\n" << std::endl;
}

static void ponyOnTheHeap()
{
    Pony *pinky = new Pony("PinkyPie", "pink", 30, 5);
    Pony *flatter = new Pony("Flatter", "yellow", 40, 7);
    Pony *dash = new Pony("Dash", "blue", 50, 10);

    printPonyParameters(pinky);
    printPonyParameters(flatter);
    printPonyParameters(dash);

    delete pinky;
    std::cout << "PinkyPie was deallocated" << std::endl;
    delete flatter;
    std::cout << "Flatter was deallocated" << std::endl;
    delete dash;
    std::cout << "Dash was deallocated" << std::endl;

    pinky = NULL;
    flatter = NULL;
    dash = NULL;
}

static void ponyOnTheStack(){
    Pony pinky("PinkyPie", "pink", 30, 5);
    Pony flatter("Flatter", "yellow", 40, 7);
    Pony dash("Dash", "blue", 50, 10);

    printPonyParameters(&pinky);
    printPonyParameters(&flatter);
    printPonyParameters(&dash);
}

int main()
{
    std::cout << "--------------- Ponys on the stack ---------------\n" << std::endl;
    ponyOnTheStack();
    std::cout << "\n--------------- Ponys on the heap ---------------\n" << std::endl;
    ponyOnTheHeap();
    std::cout << "\n" << std::endl;
    return 0;
}
