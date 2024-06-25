/**
 * @file main.cpp
 * @author Aashrita Chemakura (achemaku@umd.edu)
 * @author Kaustubh Saurabhraj Bhatt (kbhatt25@umd.edu)
 * @brief Main file
 * @version 0.1
 * @date 2022-11-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <string>
#include <cstdlib>
#include <time.h>

#include "simulator/simulator.h"
#include "robot/robot.h"


int main(int argc, char *argv[])
{
    char direction;
    char current_direction = 'n';

    char north = 'n';
    char east = 'e';
    char south = 's';
    char west = 'w';

    int x = 0;
    int y = 0;
    int pose = (x, y);

    srand(time(0));
    int f1 = rand() % 15;
    int f2 = rand() % 15;
    if (f1 == 0 || f1 == 15)
    {
        f2 = rand() % 15;
        if (f2 == 0)
        {
            f2++;
        }
    }
    else if (f1 % 2)
    {
        f2 = 0;
    }
    else
    {
        f2 = 15;
    }
    //Setting the Outer Walls
    int i;
    int j;

    for (i = 0; i <= 15; i++)
    {
        for (j = 0; j <= 15; j++)
        {
            if (i == 0)
            {
                Simulator::setWall(i, j, 'w');
            }
            if (i == 15)
            {
                Simulator::setWall(i, j, 'e');
            }
            if (j == 0)
            {
                Simulator::setWall(i, j, 's');
            }
            if (j == 15)
            {
                Simulator::setWall(i, j, 'n');
            }
        }
    }

    // colorize and add text
    Simulator::setColor(0, 0, 'G');
    Simulator::setText(0, 0, "A");
    Simulator::setColor(0, 15, 'G');
    Simulator::setText(0, 15, "B");
    Simulator::setColor(15, 15, 'G');
    Simulator::setText(15, 15, "C");
    Simulator::setColor(15, 0, 'G');
    Simulator::setText(15, 0, "D");
    Simulator::setColor(f1, f2, 'Y');
    Simulator::setText(f1, f2, "G");

    rwa2group10::algorithm algo;
    char* cd{&current_direction};
    int* x_p{&x};
    int* y_p(&y);

//Left Wall Algorithm
    if (*argv[1] == 'l')
    {
        while (!(x == f1 && y == f2))

        {
            Simulator::setColor(*x_p, *y_p, 'G');
            algo.left_al(cd, x_p, y_p);
        }
    }
//Right Wall Algorithm
    if (*argv[1] == 'r')
    {
        while (!(x == f1 && y == f2))
        {
            Simulator::setColor(*x_p, *y_p, 'G');
            algo.right_al(cd, x_p, y_p);
        }
    }

}