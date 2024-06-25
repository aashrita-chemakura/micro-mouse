/**
 * @file robot.cpp
 * @author Aashrita Chemakura (achemaku@umd.edu)
 * @author Kaustubh Saurabhraj Bhatt (kbhatt25@umd.edu)
 * @brief Robot file
 * @version 0.1
 * @date 2022-11-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "robot.h"
#include "../simulator/simulator.h"
#include <cstdlib>
#include <iostream>

//Move Forth and Back 
void rwa2group10::robot::turn_left(char current_direction){
    if (current_direction == 'n')
    {
        current_direction = 'w';
    }
    else if (current_direction == 's')
    {
        current_direction = 'e';
    }
    else if (current_direction == 'e')
    {
        current_direction = 'n';
    }
    else if (current_direction == 'w')
    {
        current_direction = 's';
    }
}

void rwa2group10::robot::turn_right(char current_direction){
    std::cerr << "---turn right---" << std::endl;
    if (current_direction == 'n')
    {
        current_direction = 'e';
    }
    else if (current_direction == 's')
    {
        current_direction = 'w';
    }
    else if (current_direction == 'e')
    {
        current_direction = 's';
    }
    else if (current_direction == 'w')
    {
        current_direction = 'n';
    }
}
    
void rwa2group10::robot::move_forward(char current_direction, int x, int y){
    std::cerr << "---go forward---" << std::endl;
    if (current_direction == 'n')
    {
        y = y + 1;
        x = x;
    }
    else if (current_direction == 'w')
    {
        x = x - 1;
        y = y;
    }
    else if (current_direction == 's')
    {
        x = x;
        y = y - 1;
    }
    else if (current_direction == 'e')
    {
        x = x + 1;
        y = y;
    }
}
//Left Wall Algorithm

void rwa2group10::algorithm::left_al(char* current_direction, int* x, int* y){
    if (!(Simulator::wallLeft()))
    {
        if (*current_direction == 'n')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 'n';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 's';
        }
        std::cerr << "--- turn left ---" << std::endl;

        Simulator::turnLeft();
    }
    else if (!(Simulator::wallFront()))
    {
        std::cerr << "---go forward---" << std::endl;
    }

    else if (!(Simulator::wallRight()))
    {
        std::cerr << "---turn right---" << std::endl;
        if (*current_direction == 'n')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 's';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 'n';
        }

        Simulator::turnRight();
    }
    else
    {
        std::cerr << "---turn left---" << std::endl;
        if (*current_direction == 'n')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 'n';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 's';
        }

        Simulator::turnLeft();
        std::cerr << "---turn left---" << std::endl;
        if (*current_direction == 'n')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 'n';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 's';
        }

        Simulator::turnLeft();
        }
        if(*current_direction == 'n')
        {
            *y = *y + 1;
            *x = *x;
        }
        else if (*current_direction == 'w')
        {
            *x = *x - 1;
            *y = *y;
        }
        else if (*current_direction == 's')
        {
            *x = *x;
            *y = *y - 1;
        }
        else if (*current_direction == 'e')
        {
            *x = *x + 1;
            *y = *y;
        }
        
        Simulator::moveForward();
        if (Simulator::wallLeft())
        {
            if (*current_direction == 'n')
            {
                Simulator::setWall(*x, *y, 'w');
            }
            else if (*current_direction == 's')
            {
                Simulator::setWall(*x, *y, 'e');
            }
            else if (*current_direction == 'e')
            {
                Simulator::setWall(*x, *y, 'n');
            }
            else if (*current_direction = 'w')
            {
                Simulator::setWall(*x, *y, 's');
            }
        }
        if (Simulator::wallFront())
        {
            if (*current_direction == 'n')
            {
                Simulator::setWall(*x, *y, 'n');
            }
            else if (*current_direction == 's')
            {
                Simulator::setWall(*x, *y, 's');
            }
            else if (*current_direction == 'e')
            {
                Simulator::setWall(*x, *y, 'e');
            }
            else if (*current_direction == 'w')
            {
                Simulator::setWall(*x, *y, 'w');
            }
        }
        if (Simulator::wallRight())
        {
            if (*current_direction == 'n')
            {
                Simulator::setWall(*x, *y, 'e');
            }
            else if (*current_direction == 's')
            {
                Simulator::setWall(*x, *y, 'w');
            }
            else if (*current_direction == 'e')
            {
                Simulator::setWall(*x, *y, 's');
            }
            else if (*current_direction == 'w')
            {
                Simulator::setWall(*x, *y, 'n');
            }
        }

    }
// Right Wall Algorithm

void rwa2group10::algorithm::right_al(char *current_direction, int *x, int *y){
    if (!(Simulator::wallRight()))
    {
        std::cerr << "---turn right---" << std::endl;
        if (*current_direction == 'n')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 's';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 'n';
        }
        Simulator::turnRight();
    }
    else if (!(Simulator::wallFront()))
    {
        std::cerr << "---go forward---" << std::endl;
    }
    else if (!(Simulator::wallLeft()))
    {
        if (*current_direction == 'n')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 'n';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 's';
        }
        std::cerr << "--- turn left ---" << std::endl;

        Simulator::turnLeft();
    }
    else
    {
        std::cerr << "---turn right---" << std::endl;
        if (*current_direction == 'n')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 's';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 'n';
        }

        Simulator::turnRight();
        std::cerr << "---turn right---" << std::endl;
        if (*current_direction == 'n')
        {
            *current_direction = 'e';
        }
        else if (*current_direction == 's')
        {
            *current_direction = 'w';
        }
        else if (*current_direction == 'e')
        {
            *current_direction = 's';
        }
        else if (*current_direction == 'w')
        {
            *current_direction = 'n';
        }

        Simulator::turnRight();
    }
    //Setting the walls on Left side

        if (Simulator::wallLeft())
        {
            if (*current_direction == 'n')
            {
                Simulator::setWall(*x, *y, 'w');
            }
            else if (*current_direction == 's')
            {
                Simulator::setWall(*x, *y, 'e');
            }
            else if (*current_direction == 'e')
            {
                Simulator::setWall(*x, *y, 'n');
            }
            else if (*current_direction = 'w')
            {
                Simulator::setWall(*x, *y, 's');
            }
        }

        if (Simulator::wallFront())
        {
            if (*current_direction == 'n')
            {
                Simulator::setWall(*x, *y, 'n');
            }
            else if (*current_direction == 's')
            {
                Simulator::setWall(*x, *y, 's');
            }
            else if (*current_direction == 'e')
            {
                Simulator::setWall(*x, *y, 'e');
            }
            else if (*current_direction == 'w')
            {
                Simulator::setWall(*x, *y, 'w');
            }
        }
        if (Simulator::wallRight())
        {
            if (*current_direction == 'n')
            {
                Simulator::setWall(*x, *y, 'e');
            }
            else if (*current_direction == 's')
            {
                Simulator::setWall(*x, *y, 'w');
            }
            else if (*current_direction == 'e')
            {
                Simulator::setWall(*x, *y, 's');
            }
            else if (*current_direction == 'w')
            {
                Simulator::setWall(*x, *y, 'n');
            }
        }

    if (*current_direction == 'n')
    {
        *y = *y + 1;
        *x = *x;
    }
    else if (*current_direction == 'w')
    {
        *x = *x - 1;
        *y = *y;
    }
    else if (*current_direction == 's')
    {
        *x = *x;
        *y = *y - 1;
    }
    else if (*current_direction == 'e')
    {
        *x = *x + 1;
        *y = *y;
    }

    Simulator::moveForward();
}
//Setting the outer walls

void rwa2group10::cell::outer_wall(int x, int y){
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
}

void rwa2group10::cell::wall_left(char current_direction , int x, int y){
    if (current_direction == 'n')
    {
        Simulator::setWall(x, y, 'w');
    }
    else if (current_direction == 's')
    {
        Simulator::setWall(x, y, 'e');
    }
    else if (current_direction == 'e')
    {
        Simulator::setWall(x, y, 'n');
    }
    else if (current_direction = 'w')
    {
        Simulator::setWall(x, y, 's');
    }
}
void rwa2group10::cell::wall_front(char current_direction , int x, int y){
    if (current_direction == 'n')
    {
        Simulator::setWall(x, y, 'n');
    }
    else if (current_direction == 's')
    {
        Simulator::setWall(x, y, 's');
    }
    else if (current_direction == 'e')
    {
        Simulator::setWall(x, y, 'e');
    }
    else if (current_direction == 'w')
    {
        Simulator::setWall(x, y, 'w');
    }
}
void rwa2group10::cell::wall_right(char current_direction , int x, int y){
    if (current_direction == 'n')
    {
        Simulator::setWall(x, y, 'e');
    }
    else if (current_direction == 's')
    {
        Simulator::setWall(x, y, 'w');
    }
    else if (current_direction == 'e')
    {
        Simulator::setWall(x, y, 's');
    }
    else if (current_direction == 'w')
    {
        Simulator::setWall(x, y, 'n');
    }
}


