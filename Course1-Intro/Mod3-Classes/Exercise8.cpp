// Copyright A.T. Chamillard. All Rights Reserved.

#include "Die.h"
#include "Random.h"

#include <iostream>

using namespace exercise8;

/**
 * Exercise 8 Solution
 * @return exit status
*/
int main()
{
    // initialize random number generator
    Random::Initialize();

    // create two dice
    Die Die1(6);
    Die Die2(20);

    // tell the dice to roll themselves
    Die1.Roll();
    Die2.Roll();

    int Die1TopSide = Die1.GetTopSide();
    int Die2TopSide = Die2.GetTopSide();

    // print the top sides and the sum of the dice
    std::cout << Die1TopSide << " " << Die2TopSide << "\n";
    std::cout << Die1TopSide + Die2TopSide << "\n";

}
