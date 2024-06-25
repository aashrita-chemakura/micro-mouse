#ifndef __ROBOT_H__
#define __ROBOT_H__

/**
 * @file robot.h
 * @author Aashrita Chemakura (achemaku@umd.edu)
 * @author Kaustubh Saurabhraj Bhatt (kbhatt25@umd.edu)
 * @brief Functions to control the robot and get the direction of the robot.
 * @version 0.1
 * @date 2022-11-07
 *
 * @copyright Copyright (c) 2022
 *
 */
#pragma once

#include <string>

namespace rwa2group10
{
    class robot{
    public:
    /**
     * @brief Turn the robot left.
     * 
     * @param current_direction current direction of the robot may be 'n','s','e','w'.
    */
        void turn_left(char current_direction);
        /**
         * @brief Turn the robot right.
         * 
         * @param current_direction current direction of the robot may be 'n','s','e','w'.
         */
        void turn_right(char current_direction);
        /**
         * @brief Move the robot forward.
         * 
         * @param current_direction current direction of the robot may be 'n','s','e','w'.
         * @param x Number of cells to move the robot left or right in x coordinate.
         * @param y Number of cells to move the robot forward or backward in y coordinate.
         */
        void move_forward(char current_direction, int x, int y);
    };

    class algorithm{
    public:
    /**
     * @brief Left Wall following algorithm of the robot.
     * 
     * @param current_direction current direction of the robot may be 'n','s','e','w'.
     * @param x X coordinate of the cell.
     * @param y Y coordinate of the cell.
     */
        void left_al(char* current_direction, int* x, int* y);
        /**
         * @brief Right Wall following algorithm of the robot.
         * 
         * @param current_direction current direction of the robot may be 'n','s','e','w'.
         * @param x X coordinate of the cell.
         * @param y X coordinate of the cell.
         */
        void right_al(char* current_direction, int* x, int* y);
    };

    class cell{
    public:
    /**
     * @brief Setting the outer walls of the maze.
     * 
     * @param x X coordinate of the cell.
     * @param y Y coordinate of the cell.
     */
        void outer_wall(int x, int y);
        /**
         * @brief Check if there is a wall to the left of the robot.
         * 
         * @param current_direction current direction of the robot may be 'n','s','e','w'.
         * @param x X coordinate of the cell.
         * @param y Y coordinate of the cell.
         */
        void wall_left(char current_direction, int x, int y);
        /**
         * @brief Check if there is a wall in the front of the robot.
         * 
         * @param current_direction current direction of the robot may be 'n','s','e','w'.
         * @param x X coordinate of the cell.
         * @param y Y coordinate of the cell.
         */
        void wall_front(char current_direction, int x, int y);
        /**
         * @brief Check if there is a wall to the right of the robot.
         * 
         * @param current_direction current direction of the robot may be 'n','s','e','w'.
         * @param x X coordinate of the cell.
         * @param y Y coordinate of the cell.
         */
        void wall_right(char current_direction, int x, int y);
};
};
#endif