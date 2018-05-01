//
// Created by alexweiss on 4/30/2018.
//

#ifndef CUSTOMSPLINES_TRAJECTORY_H
#define CUSTOMSPLINES_TRAJECTORY_H

#include <string>
#include <vector>

class Trajectory {
public:
    class Pair {
    public:
        Trajectory left;
        Trajectory right;
        Pair(Trajectory l, Trajectory r);
    };
    class Segment {
    public:
        double pos, vel, acc, jerk, heading, dt, x, y;
        Segment();
        Segment(double pos, double vel, double acc, double jerk,
                double heading, double dt, double x, double y);
        explicit  Segment(Segment to_copy);
        std::string toString();
    };
    std::vector<Segment> segments;
    bool inverted_y = false;
    explicit Trajectory(int length);
    explicit Trajectory(std::vector<Segment> segments);
    void setInvertedY(bool setting);
    int getNumSegments();
    Segment getSegment(int index);
    void setSegment(int index, Segment seg);
    void scale(double scale_factor);
    void append(Trajectory to_append);
    Trajectory copy();
    std::vector<Segment> copySegments(std::vector<Segment>);
    std::string toString();
    std::string toStringProfile();
    std::string toStringEuclidean();
};


#endif //CUSTOMSPLINES_TRAJECTORY_H
