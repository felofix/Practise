//
//  canonball.cpp
//  Øving_3
//
//  Created by Felix Aarekol Forseth on 11/07/2022.
//

#include <iostream>
#include <stdio.h>
#include "canonball.h"
#include <math.h>
#include <vector>

double acclY()
{
    double accly = -9.81; // m/s^2
    return accly;
}

double velY(double initVelocityY, double time)
{
    double vely = initVelocityY + acclY()*time;
    return vely;
}

double posX(double initPosition, double initVelocity, double time)
{
    double posX = initPosition + initVelocity*time;
    return posX;
}

double posY(double initPosition, double initVelocity, double time)
{
    double posY = initPosition + initVelocity*time + (acclY()*pow(time, 2))/(2);
    return posY;
}

void printTime(double time){
    int hours = time/3600;
    int minutes = (time - hours*3600)/60;
    int seconds = (time - hours*3600 - minutes*60);
    
    cout<<hours<<" hours, "<<minutes<<" minutes og "<<seconds<<" seconds.\n";
}

double flightTime(double initVelocityY)
{
    int time = -2*(initVelocityY)/(acclY());
    return time;
}

double getUserInputTheta()
{
    double theta;
    cout<<"Please give an angle in degrees: ";
    cin>>theta;
    return theta;
}

double getUserInputAbsVelocity()
{
    double absvelocity;
    cout<<"Please give an absolute velocity: ";
    cin>>absvelocity;
    return absvelocity;
}

double degToRad(double deg)
{
    double rad = (M_PI/180)*deg;
    return rad;
}

double getVelocityX(double theta, double absVelocity)
{
    double velX = absVelocity*cos(theta);
    return velX;
}
double getVelocityY(double theta, double absVelocity)
{
    double velY = absVelocity*sin(theta);
    return velY;
}

vector<double> getVelocityVector(double theta, double absVelocity)
{
    vector<double> vel(2);
    vel[0] = getVelocityX(theta, absVelocity);
    vel[1] = getVelocityY(theta, absVelocity);
    return vel;
}

double getDistanceTraveled(double velocityX, double velocityY)
{
    double time = 0;
    for (double i = 0.01; i < 100; i+= 0.01){ // Kunne løst andregradsligning her.
        double posy = posY(0, velocityY, i);
        if (posy <= 0){
            time = i;
            break;
        }
    }
    double dist = posX(0, velocityX, time);
    return dist;
}

double targetPractice(double distanceToTarget,double velocityX,double velocityY)
{
    double dist = getDistanceTraveled(velocityX, velocityY);
    double diff = dist-distanceToTarget;
    return diff;
}
