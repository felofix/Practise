//
//  canonball.h
//  Øving_3
//
//  Created by Felix Aarekol Forseth on 11/07/2022.
//

#ifndef canonball_h
#define canonball_h
    
using namespace std;
double acclY(); // Acceleration in y-direction.
double velY(double initVelocityY, double time); // Velocity in y-direction.
double posX(double initPosition, double initVelocity, double time); // Position in x-direction.
double posY(double initPosition, double initVelocity, double time); // Position in y-direction.
void printTime(double time); // Printing the time.
double flightTime(double initVelocityY); // Returns flighttime in seconds.
double getUserInputTheta(); // Asks for an angle.
double getUserInputAbsVelocity(); // Asks for an absolute velocity.
double degToRad(double deg); // Converts from degrees to radians.
double getVelocityX(double theta, double absVelocity); // Gives speed in x-direction.
double getVelocityY(double theta, double absVelocity); // Gives speed in y-direction.
vector<double> getVelocityVector(double theta, double absVelocity); // Creates a vector for velocities.
double getDistanceTraveled(double velocityX, double velocityY); // Distance travelled.
double targetPractice(double distanceToTarget,double velocityX,double velocityY); // Distance from target.

#endif /* canonball_h */
