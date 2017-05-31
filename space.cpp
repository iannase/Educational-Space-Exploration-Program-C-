// Travel through space with this educational C++ application
// Created by Ian Annase

#include <iostream>
using namespace std;

// function definitions
void Menu();
void Spaceship();
void BackToEarth();

int main( )
{
    int choice;
    double distance = 0;
    char liftoff[8];

    // loop through the menu
    do
    {
        cout << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
        cout << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
        cout << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl << endl << endl;
        cout << "Distance to space objects!" << endl << endl;
        Menu();
        cin >> choice;

        // determine the right distance
        if (choice == 1)
            distance = 238900;
        if (choice == 2)
            distance = 92960000;
        if (choice == 3)
            distance = 248655;
        if (choice == 4)
            distance = 11700000000;
        if (choice == 5)
            distance = 25.67;
        if (choice == 6)
            distance = 14.25;
        if (choice == 7)
            distance = 600000000;
        if (choice == 8)
            distance = 14.12;

       // determine the user's choice
        switch(choice)
        {
            case 1: // moon
                for (long i = 1; i <= distance; i+=10)
                {
                    cout << i << " miles" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << i++ << " miles" << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << i++ << " miles" << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome to the Moon!" << endl << endl;
                cout << "- The surface area of the moon is 14,658,000 square miles or 9.4 billion acres." << endl << endl;
                cout << "- When a month has two full moons, the second full moon is called a blue moon." << endl << endl;
                cout << "- The moon is the only extraterrestrial body that has ever been visited by humans." << endl << endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;

            case 2: // sun
                for (long i = 1; i <= distance; i+=10000)
                {
                    cout << i << " miles" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << i++ << " miles" << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << i++ << " miles" << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome to the Sun!" << endl << endl;
                cout << "- The Sun contains 99.86% of the mass in the Solar System." << endl << endl;
                cout << "- After its red giant phase, the Sun will collapse, retaining its enormous mass, but containing the approximate volume of our planet." << endl << endl;
                cout << "- Eventually, the Sun will consume the Earth." << endl <<endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;

            case 3: // humans
                for (long i = 1; i <= distance; i+=10)
                {
                    cout << i << " miles" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << i++ << " miles" << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << i++ << " miles" << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome Apollo 13!" << endl << endl;
                cout << "- In April 1970, the crew of NASA's Apollo 13 mission swung around the far side of the moon at an altitude of 158 miles." << endl << endl;
                cout << "- Apollo 13 crew members had a problem on their flight and said 'Houston, we have a problem'." << endl << endl;
                cout << "- At the time of the accident, Apollo 13 was on a path that would cause it to miss Earth by 2,500 miles" << endl << endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;

            case 4: // space object
                for (long i = 1; i <= distance; i+=1000000)
                {
                    cout << i << " miles" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << i++ << " miles" << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << i++ << " miles" << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome to Voyager 1!" << endl << endl;
                cout << "- Voyager 1 is a space probe launched by NASA on September 5, 1977." << endl << endl;
                cout << "- Though it is not heading towards any particular star, in about 40,000 years, it will pass within 1.6 light-years of the star Gliese 445." << endl << endl;
                cout << "- Each Voyager space probe carries a gold-plated audio-visual disc in the event that the spacecraft is ever found by intelligent life forms from other planetary systems" << endl << endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;

            case 5: // star
                for (double i = 0.0; i <= distance; i+=0.001)
                {
                    cout << i << " trillion miles" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome to the Alpha Centauri star system!" << endl << endl;
                cout << "- Alpha Centauri is part of a double, or triple, star system. The two main components are Alpha Centauri A and Alpha Centauri B. The third star, a red dwarf called Proxima Centauri, is thought to be about 4.22 light-years distant and is actually our sun's closest neighbor among the stars." << endl << endl;
                cout << "- To the naked eye, the Alpha Centauri system appears as a single star with a visual magnitude of -0.28, making it the third brightest star behind Sirius (-1.46) and Canopus (-0.72)." << endl << endl;
                cout << "- Alpha Centauri A is a yellow star much like our sun, Alpha Centauri B is an orange star, and Proxima Centauri is a red dwarf roughly seven times smaller than our sun." << endl << endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;

            case 6: // galaxy
                for (double i = 0.0; i <= distance; i+=0.001)
                {
                    cout << i << " quintillion miles" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome to the Andromeda Galaxy!" << endl << endl;
                cout << "- The spiral arms of the Andromeda Galaxy are being distorted by gravitational interactions with two companion galaxies, M32 and M110." << endl << endl;
                cout << "- The Andromeda Galaxy is the most distant object you can spot with the naked eye." << endl << endl;
                cout << "- The Andromeda Galaxy has a very crowded double nucleus. Not only does it have a massive star cluster right at its heart, but it also has at least one supermassive black hole hidden at the core." << endl << endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;

            case 7: // quasar
                for (long i = 1; i <= distance; i+=100000)
                {
                    cout << i << " light years" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << i++ << " light years" << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << i++ << " light years" << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome to the Markarian 231!" << endl << endl;
                cout << "- Quasars lie at the core of some galaxies and are the brightest objects in the known universe." << endl << endl;
                cout << "- Binary black holes are pairs of black holes that orbit one another. Scientists realized that such a duo danced at the core of quasar Mrk 231 when they looked at the data on the ultraviolet (UV) radiation that it emits." << endl << endl;
                cout << "- The structure of our universe, such as those giant galaxies and clusters of galaxies, grows by merging smaller systems into larger ones, and binary black holes are natural consequences of these mergers of galaxies." << endl << endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;

            case 8: // edge of the galaxy
                for (double i = 0; i <= distance; i+=0.001)

                {
                    cout << i << " gigaparsecs" << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
                    cout << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
                    cout << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
                }
                cout << endl << endl;
                cout << "Welcome to the edge of the known universe!" << endl << endl;
                cout << "- There are at least two trillion galaxies in the observable universe." << endl << endl;
                cout << "- We know that the galaxies must extend much further than we can see, but we do not know whether the universe is infinite or not." << endl << endl;
                cout << "- The universe is at least 78 billion light-years wide." << endl << endl;
                cout << "Type 'liftoff' to return home: " << endl << endl;
                Spaceship();
                cin >> liftoff;
                BackToEarth();
                break;
        }
    }
    while (choice != 0);
}

void Menu()
{
    cout << "1 - The moon" << endl;
    cout << "2 - The sun" << endl;
    cout << "3 - The furthest humans have ever traveled" << endl;
    cout << "4 - The farthest manmade object from Earth" << endl;
    cout << "5 - The center of the milky way" << endl;
    cout << "6 - The closest galaxy" << endl;
    cout << "7 - The closest quazar" << endl;
    cout << "8 - The distance to the edge of the known universe" << endl << endl;
    cout << "Enter your choice (1-8): " << endl;
    cout << endl << endl;
    Spaceship();
}

void Spaceship()
{
    cout << "             /\\" << endl;
    cout << "            /  \\" << endl;
    cout << "           /^^^^\\" << endl;
    cout << "           |----|" << endl;
    cout << "           /    \\" << endl;
    cout << "          (|(||)|)" << endl;
    cout << "           |^^^^|" << endl;
    cout << "           /----\\" << endl;
    cout << "          /      \\" << endl;
    cout << "         /        \\" << endl;
    cout << "      O-[{[[||||]]}]-O" << endl;
    cout << "        /|        |\\" << endl;
    cout << "       / |        | \\" << endl;
    cout << "      /  |        |  \\" << endl;
    cout << "     / -[{[[||||]]}]- \\" << endl;
    cout << "    /####|        |####\\" << endl;
    cout << "   / I ^ /(::::::)\\ ^ I \\" << endl;
    cout << "  ^--____{|!....!|}____--^" << endl;
    cout << "         /--------\\" << endl;
    cout << "        /_|######|_\\" << endl;
    cout << "          ^^^^^^^^" << endl;
}

void BackToEarth()
{
    for (long i = 1; i <= 20000; i+=1)
    {
        cout << " *      *                     *             *      *            *                  *                            *            *                           *         *" << endl;
        cout << " *          *      *                *                        *        *                   *                                *                 *               " << endl;
        cout << "                   *        *                  *         *                      *                 *     *           *                *                *           " << endl;
    }
}
