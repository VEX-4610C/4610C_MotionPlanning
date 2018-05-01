//
// Created by alexweiss on 4/30/2018.
//

#ifndef CUSTOMSPLINES_PATH_H
#define CUSTOMSPLINES_PATH_H

#include <string>
#include "Trajectory.cpp"

class Path {
protected:
    Trajectory::Pair trajectories;
    std::string name;
    bool go_left;
public:
    explicit Path();
    std::string getName;
    void goLeft();
    void goRight();
    Trajectory getLeftWheelTrajectory();
    Trajectory getRightWheelTrajectory();
    Trajectory::Pair getPair();
    double getEndHeading();
};


#endif //CUSTOMSPLINES_PATH_H
