//
//  main.cpp
//  Øving_3
//
//  Created by Felix Aarekol Forseth on 11/07/2022.
//

#include <iostream>
#include "canonball.h"
#include "utilities.hpp"

void testDeviation(double compareOperand, double toOperand, double maxError, string name);
void playTargetPractice();

int main(int argc, const char * argv[]) {
    /* Task 3 */
    // All tests gave correct answers.
    // double maxError = 0.0001;
    // testDeviation(posX(0.0,50.0,5.0), 250.0, maxError, "posX(0.0,50.0,5.0)");
    // testDeviation(posX(0.0,50.0,2.5), 125.0, maxError, "posX(0.0,50.0,5.0)");
    // testDeviation(posY(0,25.0,5.0), 2.375, maxError, "posX(0.0,50.0,5.0)");
    
    /* Task 4*/
    // All tests gave correct answers.
    // double dist = getDistanceTraveled(10, 9.81);
    // double diff = targetPractice(20,10,9.81);
    
    /* Tast 5*/
    playTargetPractice();

    return 0;
}

void testDeviation(double compareOperand, double toOperand, double maxError, string name)
{
    if (abs(compareOperand - toOperand) <= maxError){
        cout<<"The values are within the margin of error."<<endl;
    }
    else{
        cout<<"The values are not within the margin of error, giving a error of: "\
        <<abs(compareOperand - toOperand)<<endl;
    }
}

void playTargetPractice()
{
    int target = randomWithLimits(100, 1000); // Initializes the target.
    for (int i = 1; i <= 10; i++){
        
        if(i == 10){
            cout<<"Im so sorry, you have lost the game after 10 tries :("<<endl;
            break;
        }
        double deg = getUserInputTheta();
        double theta = degToRad(deg);
        double absvel = getUserInputAbsVelocity();
        vector<double> vel = getVelocityVector(theta, absvel);  // Creates velocity vector.
        double diff = targetPractice(target,vel[0],vel[1]);
        double traveltime = flightTime(vel[1]);
        
        if (abs(diff) < 5){
            cout<<"Congratulations, you hit the target after "<<i<<" attempts :)"<<endl;
            break;
        }
        else if(diff < 0){
            cout<<"You missed the target by "<<abs(diff)<<"m infront of the target."<<endl;
            cout<<"The flighttime was: ";
            printTime(traveltime);
            continue;
        }
        else if(diff > 0){
            cout<<"You missed the target by "<<abs(diff)<<"m behind of the target."<<endl;
            cout<<"The flighttime was: ";
            printTime(traveltime);
            continue;
        }
    }
}
