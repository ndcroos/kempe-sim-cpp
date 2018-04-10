#ifndef PHYSICS_H
#define PHYSICS_H

#include "state.h"
#include "force.h"

class Physics
{
public:
    Physics();

    void evalForces(State state);
    void timeStep(State state, std::set<Force*> forces, double duration);
};

#endif // PHYSICS_H
