#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);
// NOTICE, REORGANIZE THE CODE!!!


// Note for Coders: All intakes, positive is INTAKE/SCORE, Negative is OUTAKE
// Pnuematics are their given names... Eg. Wings are Wings 
void nineleft() {
    //7 BALL
PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
RunSecondStage(-40);
RunBottom(100);
TurnMaxTimePID(AngPara, -27,0.5, true);
MoveEncoderPID(TestPara, 80,14, 0.2,-25,true);//go toward 3 balls
wait(200,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,10, 0.1,-25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, -135,0.5, true);
wait(100,msec);
//Lift.set(true);
//MoveEncoderPID(TestPara,-70,20, 0.1,-135,true);//curve towards 2 balls
//RunSecondStage(100);
//wait(400,msec);
MoveEncoderPID(TestPara,80,35, 0.3,-135,true);
wait(50,msec);
TurnMaxTimePID(AngPara, 180,0.5, true);
MoveEncoderPID(TestPara,45,21, 0.3,180,true);
wait(350,msec);
MoveEncoderPID(TestPara,-100,35, 0.3,180,true);
RunSecondStage(100);
wait(1100,msec);
MoveEncoderPID(TestPara,70,18, 0.2,180,true);
MoveEncoderPID(TestPara,-70,17, 0.2,-150,true);
MoveEncoderPID(TestPara,-70,25, 0.2,180,true);
//MoveEncoderPID(TestPara,70,15, 0.2,180,true);
//Addcodehere


}
void nineright(){
    //4+3
   PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 right
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,36, 0.2,0,true);//go toward 3 balls
wait(100,msec);
TurnMaxTimePID(AngPara, -90,0.3, true);
wait(50,msec);
MoveEncoderPID(TestPara, 50,14, 0.3,-90,true);//curve towards long goal
wait(250,msec);
MoveEncoderPID(TestPara, -80,42, 0.1,-90,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);
wait(950,msec);
RunSecondStage(-40);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,10, 0.1,-90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, 137,0.3, true);
MoveEncoderPID(TestPara, 80,21.5, 0.1,140,true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 40,5, 0.1,140,true);
wait(200,msec);
TurnMaxTimePID(AngPara, -40,0.8, true);
wait(50,msec);
Lift.set(true);
MoveEncoderPID(TestPara, -80,27, 0.3,-40,true);
RunSecondStage(30);
wait(500,msec);
MoveEncoderPID(TestPara, 80,41, 0.2,-42,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -90,0.4, true);
MoveEncoderPID(TestPara, -70,24, 0.2,-90,true);
  
}
void AWP(){
    // declare initial conditions
    //AWP
    //6+3Right
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 right
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,36, 0.2,0,true);//go toward 3 balls
wait(200,msec);
TurnMaxTimePID(AngPara, 90,0.3, true);
wait(50,msec);
MoveEncoderPID(TestPara, 50,13, 0.3,90,true);//curve towards long goal
wait(200,msec);
MoveEncoderPID(TestPara, -80,42, 0.1,90,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);
wait(950,msec);
RunSecondStage(-40);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,10, 0.1,90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -137,0.3, true);
MoveEncoderPID(TestPara, 80,22.5, 0.1,-140,true);
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,11, 0.1,-140,true);
wait(200,msec);
TurnMaxTimePID(AngPara, 180,0.3, true);
Scrapper.set(false);
MoveEncoderPID(TestPara, 80,51, 0.1,180,true);
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 100,12, 0.1,180,true);
wait(200,msec);
TurnMaxTimePID(AngPara, 130,0.3, true);
Lift.set(true);
MoveEncoderPID(TestPara, -80,20.5, 0.1,135,true);
wait(50,msec);
RunSecondStage(25);
wait(400,msec);
Lift.set(false);
RunSecondStage(-40);
wait(50,msec);
MoveEncoderPID(TestPara, 80,58, 0.1,135,true);
wait(50,msec);
Scrapper.set(true);
TurnMaxTimePID(AngPara, 90,0.3, true);
MoveEncoderPID(TestPara, 60,19, 0.2,90,true);//curve towards long goal
wait(200,msec);
//TurnMaxTimePID(AngPara, 80,0.3, true);
MoveEncoderPID(TestPara, -100,50, 0.1,87,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);

}
void testskills(){
    //Skills
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.4,0.03,0.13};
    PIDDataSet SpecialPara={2,0.01,0.27};
    //NOTE:time inbetween matchloaders (second and bottom stage) is determind by moves
    RunSecondStage(-40);
    RunBottom(100);
    //Lift.set(true);
    Scrapper.set(true);
    Wings.set(true);
    MoveEncoderPID(TestPara, 80,40, 0.2,0,true);//go toward 3 balls
    wait(200,msec);
    TurnMaxTimePID(AngPara, 90,0.4, true);
    wait(50,msec);
    MoveEncoderPID(TestPara, 50,15, 0.3,90,true);//curve towards long goal
    wait(700,msec);
    MoveEncoderPID(TestPara, 80,1, 0.3,90,false);
    wait(700,msec);
    MoveEncoderPID(TestPara, -80,13.5, 0.1,90,true);
    TurnMaxTimePID(AngPara, -45,0.4, true);
    Scrapper.set(false);
    //Next side movement
    MoveEncoderPID(TestPara, 80,20, 0.1,-40,true);
    //RunSecondStage(0);
    RunSecondStage(0);
    RunBottom(0);
    TurnMaxTimePID(AngPara, -90,0.5, true);
    MoveEncoderPID(TestPara, 100,95, 0.1,-90,true);
    wait(100,msec);
    TurnMaxTimePID(AngPara, 0,0.7, true);
    MoveEncoderPID(TestPara, 70,11, 0.1,0,true);
    MoveEncoderPID(TestPara, -70,12.5, 0.1,0,true);
    TurnMaxTimePID(AngPara, -90,0.5, true);
    MoveEncoderPID(TestPara, -80,19, 0.1,-90,true);
    RunBottom(100);
    RunSecondStage(100);
    wait(1500,msec);
    RunSecondStage(-40);
    Scrapper.set(true);
    MoveEncoderPID(TestPara, 50,36, 0.1,-90,true);
    wait(700,msec);
    MoveEncoderPID(TestPara, 80,1, 0.1,-90,true);
    wait(700,msec);
    MoveEncoderPID(TestPara, -80,36, 0.1,-90,true);
    RunSecondStage(100);
    wait(1600,msec);
    RunSecondStage(-40);
    //Middlegoal1
    Scrapper.set(false);
    MoveEncoderPID(TestPara, 80,16, 0.1,-90,true);
    wait(200,msec);  
    TurnMaxTimePID(AngPara, 137,0.5, true);
    MoveEncoderPID(TestPara, 80,28, 0.1,140,true);
    wait(50,msec);
    Scrapper.set(true);
    wait(50,msec);
    MoveEncoderPID(TestPara, 80,4, 0.1,140,true);
    TurnMaxTimePID(AngPara, -45,0.5, true);
    Lift.set(true);
    MoveEncoderPID(TestPara, -80,28, 0.1,-45,true);
    RunSecondStage(40);
    wait(900,msec);
    Scrapper.set(false);
    //Lift.set(false);
    RunSecondStage(-40);
    MoveEncoderPID(TestPara, 80,30, 0.1,-45,true);
    TurnMaxTimePID(AngPara, -90,0.3, true);
    MoveEncoderPID(TestPara, 80,47, 0.1,-90,true);
    //MoveEncoderPID(TestPara, -80,1.5, 0.1,-90,true);
    TurnMaxTimePID(AngPara, -177,0.5, true);
    MoveEncoderPID(TestPara, 80,60, 0.1,-176,true);
    wait(100,msec);
    MoveEncoderPID(TestPara, 70,70, 0.1,-180,true);
    wait(100,msec);
    MoveEncoderPID(TestPara,-30,10, 0.1,180,false);
    wait(100,msec);
    TurnMaxTimePID(AngPara, 150,0.5, true);
    MoveEncoderPID(TestPara,80,48, 0.1,150,true);
    TurnMaxTimePID(AngPara, 180,0.5, true);
    //MoveEncoderPID(TestPara,80,15, 0.1,180,false);
    MoveTimePID(TestPara, -80, 0.5,0.1,180, true);
    wait(300,msec);
    MoveEncoderPID(TestPara,-80,11.25, 0.1,180,true);
    TurnMaxTimePID(AngPara, -90,0.5, true);
    Lift.set(false);
    MoveEncoderPID(TestPara,-80,23, 0.1,-90,true);
    RunSecondStage(100);
    Scrapper.set(true);
    wait(1400,msec);
    RunSecondStage(-40);
    MoveEncoderPID(TestPara, 70,36, 0.1,-90,true);
    wait(800,msec);
    MoveEncoderPID(TestPara, 80,1, 0.1,-90,true);
    wait(800,msec);
    MoveEncoderPID(TestPara, -80,37, 0.1,-90,true);
    RunSecondStage(100);
    wait(1500,msec);
    RunSecondStage(-40);
    //next area
    Scrapper.set(false);
    TurnMaxTimePID(AngPara, -90,0.2, true);
    MoveEncoderPID(TestPara, 80,19, 0.1,-90,true);
    wait(200,msec);  
    TurnMaxTimePID(AngPara, 135,0.5, true);
    MoveEncoderPID(TestPara, 80,20, 0.1,135,true);
    TurnMaxTimePID(AngPara, 90,0.5, true);
    MoveEncoderPID(TestPara, 80,80, 0.1,90,true);
    

    TurnMaxTimePID(AngPara, 45,0.5, true);
    MoveEncoderPID(TestPara, 80,19, 0.1,45,true);
    Scrapper.set(true);
    TurnMaxTimePID(AngPara, 90,0.5, true);
    
    MoveEncoderPID(TestPara, 80,35, 0.1,90,true);
    wait(1000,msec);
    Lift.set(true);
    MoveEncoderPID(TestPara, -80,18, 0.1,90,true);
    TurnMaxTimePID(AngPara, 140,0.5, true);
    MoveEncoderPID(TestPara, -80,56, 0.1,140,true);
    RunSecondStage(50);
    wait(1000,msec);
    RunSecondStage(-40);
    MoveEncoderPID(TestPara, 80,14, 0.1,140,true);
    TurnMaxTimePID(AngPara, 90,0.5, true);
    Scrapper.set(false);
    MoveEncoderPID(TestPara, 80,45, 0.1,90,true);
     MoveTimePID(TestPara, -80, 1,0.1,90, true);
    TurnMaxTimePID(AngPara, 10,0.5, true);
    MoveEncoderPID(TestPara, 80,60, 0.1,15,true);
    MoveEncoderPID(TestPara, 80,10, 0.1,0,true);

}
//Ignore all code after this point for now
void test4(){
    //Possible 9 BALL
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 right
  Wings.set(true);
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
//
MoveEncoderPID(TestPara, 100,9, 0.1,0,false);//go toward 3 balls
MoveEncoderPID(TestPara, 100,59.5, 0.1,90,false);
TurnMaxTimePID(AngPara, 30,0.3, false);
TurnMaxTimePID(AngPara, 0,0.2, false);
MoveEncoderPID(TestPara, 70,7, 0.1,0,false);
Scrapper.set(true);
wait(300,msec);
TurnMaxTimePID(AngPara, 30,0.2, false);
MoveEncoderPID(TestPara, -100,3, 0.1,30,true);
TurnMaxTimePID(AngPara, -90,0.3, true);
MoveEncoderPID(TestPara, 100,33.5, 0.1,-90,false);
TurnMaxTimePID(AngPara, -30,0.2, false);
MoveEncoderPID(TestPara, 50,8, 0.1,-30,false);
MoveEncoderPID(TestPara, 50,21, 0.1,-90,false);
wait(300,msec);
MoveEncoderPID(TestPara, -100,44, 0.1,-90,true);
RunSecondStage(100);
wait(1300,msec);
//Second part
RunSecondStage(-100);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,10, 0.1,-90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, 137,0.3, true);
MoveEncoderPID(TestPara, 80,21.5, 0.1,140,true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 40,6, 0.1,140,true);
wait(200,msec);
TurnMaxTimePID(AngPara, -42,0.9, true);
wait(50,msec);
Lift.set(true);
MoveEncoderPID(TestPara, -80,31, 0.3,-43,true);
RunSecondStage(30);
wait(600,msec);
Wings.set(false);
MoveEncoderPID(TestPara, 80,40, 0.2,-43,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -90,0.4, true);
MoveEncoderPID(TestPara, -60,24, 0.2,-90,true);
//MoveEncoderPID(TestPara, -100,60, 0.1,90,true);

}
void test5(){
// Use this to tune PID values
 PIDDataSet TestPara={2.4,0.02,0.31};
 PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 right
  Wings.set(true);
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
//
MoveEncoderPID(TestPara, 100,8.75, 0.1,0,false);//go toward 3 balls
MoveEncoderPID(TestPara, 100,54, 0.1,-90,false);
TurnMaxTimePID(AngPara, -30,0.3, false);
TurnMaxTimePID(AngPara, 0,0.2, false);
MoveEncoderPID(TestPara, 45,4.5, 0.1,0,false);
//wait(100,msec);
Scrapper.set(true);
wait(200,msec);
TurnMaxTimePID(AngPara, -30,0.2, false);
MoveEncoderPID(TestPara, -100,2, 0.1,-20,true);
TurnMaxTimePID(AngPara, 90,0.3, true);
MoveEncoderPID(TestPara, 100,33.5, 0.1,90,false);
TurnMaxTimePID(AngPara, 30,0.2, false);
MoveEncoderPID(TestPara, 40,11.25, 0.1,30,false);
MoveEncoderPID(TestPara, 50,24, 0.1,90,false);
wait(250,msec);
MoveEncoderPID(TestPara, -100,44, 0.1,95,false);
TurnMaxTimePID(AngPara, 90,0.1, true);
MoveEncoderPID(TestPara, -100,0.5, 0.1,90,true);
RunSecondStage(100);
wait(1300,msec);
//Second part
RunSecondStage(-100);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,13, 0.1,90,true);
wait(250,msec);
TurnMaxTimePID(AngPara, -137,0.3, true);
RunBottom(80);
MoveEncoderPID(TestPara, 80,24, 0.1,-137,true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 40,6, 0.1,-137,true);
wait(300,msec);
Scrapper.set(false);
wait(100,msec);
RunBottom(0);
MoveEncoderPID(TestPara, 70,25, 0.3,-140,true);
RunBottom(-10);
MoveEncoderPID(TestPara, 50,1, 0.1,-140,true);
//RunSecondStage(30);
//Scrapper.set(true);
RunBottom(-75); 
wait(1000,msec);
Wings.set(false);
RunBottom(100);
MoveEncoderPID(TestPara, -80,36, 0.1,-140,true);
wait(10,msec);
TurnMaxTimePID(AngPara, -90,0.4, true);
MoveEncoderPID(TestPara, 100,24, 0.2,-90,true);
//MoveEncoderPID(TestPara, -100,60, 0.1,90,true);
TurnMaxTimePID(AngPara, -150,0.3, true);

}


void ninetest() {
  //7ball Right
  PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
RunSecondStage(-40);
RunBottom(100);
TurnMaxTimePID(AngPara, 27,0.5, true);
MoveEncoderPID(TestPara, 80,15, 0.2,25,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 50,10, 0.1,25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, 135,0.5, true);
wait(100,msec);
MoveEncoderPID(TestPara,80,37, 0.3,135,true);
wait(50,msec);
MoveEncoderPID(TestPara,50,4, 0.1,135,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 180,0.4, true);
MoveEncoderPID(TestPara,45,10, 0.1,180,true);
//MoveEncoderPID(TestPara,45,20, 0.1,180,true);
wait(150,msec);
MoveEncoderPID(TestPara,-100,35, 0.3,-178,true);
RunSecondStage(100);
wait(1100,msec);
MoveEncoderPID(TestPara,70,18, 0.2,180,true);
MoveEncoderPID(TestPara,-70,17, 0.2,-150,true);
MoveEncoderPID(TestPara,-70,21, 0.2,180,true);
//MoveEncoderPID(TestPara,70,15, 0.2,180,true);
//Addcodehere


    }

    void extra() {
      PIDDataSet TestPara={2.4,0.02,0.31};
      PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 right
RunSecondStage(-40);
RunBottom(100);
TurnMaxTimePID(AngPara, 27,0.5, true);
MoveEncoderPID(TestPara, 80,15, 0.2,25,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 50,10, 0.1,25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, 135,0.5, true);
wait(100,msec);
MoveEncoderPID(TestPara,80,38, 0.3,135,true);
MoveEncoderPID(TestPara,50,3, 0.1,135,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 180,0.4, true);
MoveEncoderPID(TestPara,45,10, 0.1,180,true);
//MoveEncoderPID(TestPara,45,20, 0.1,180,true);
wait(150,msec);
MoveEncoderPID(TestPara,-100,35, 0.3,-178,true);
RunSecondStage(100);
wait(600,msec);
RunSecondStage(-50);
Scrapper.set(false);
RunBottom(-10);
MoveEncoderPID(TestPara, 60,16, 0.1,180,true);
MoveEncoderPID(TestPara, 60,3, 0.1,180,true);
wait(250,msec);
TurnMaxTimePID(AngPara, -45,0.3, true);
MoveEncoderPID(TestPara, 80,62, 0.1,-45,true);
RunBottom(-75);
wait(1000,msec);
Wings.set(false);
RunBottom(100);
MoveEncoderPID(TestPara, -80,35, 0.1,-45,true);
wait(10,msec);
TurnMaxTimePID(AngPara, 0,0.4, true);
MoveEncoderPID(TestPara, 100,24, 0.2,0,true);
//MoveEncoderPID(TestPara, -100,60, 0.1,90,true);
TurnMaxTimePID(AngPara, -30,0.3, true);


    }
    void more() {

      
    }

