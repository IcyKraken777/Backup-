#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);
// NOTICE, REORGANIZE THE CODE!!!

/*//4+3
   PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};

RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
Hood.set(true);
Scrapper.set(true);
wait(500,msec);
MoveEncoderPID(TestPara, 100,40, 0.1,0,true);//go toward 3 balls
wait(100,msec);
TurnMaxTimePID(AngPara, -90,0.3, true);
wait(50,msec);
MoveEncoderPID(TestPara, 80,14, 0.2,-90,true);//curve towards long goal
wait(250,msec);
MoveEncoderPID(TestPara, -80,42, 0.1,-90,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);
MoveTimePID(TestPara,40,0.8,0.1,-90,true);
RunSecondStage(-40);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,16, 0.1,-90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, 135,0.3, true);
MoveEncoderPID(TestPara, 80,25.5, 0.1,135,true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 70,10, 0.1,135,true);
wait(200,msec);
TurnMaxTimePID(AngPara, -40,0.7, true);
wait(50,msec);
Lift.set(true);
MoveEncoderPID(TestPara, -80,26.5, 0.3,-40,true);
RunSecondStage(40);
wait(1200,msec);
Wings.set(false);
MoveEncoderPID(TestPara, 80,46, 0.2,-43,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -90,0.4, true);
MoveEncoderPID(TestPara, -70,33, 0.2,-90,true);
TurnMaxTimePID(AngPara, -70,0.4, true);
while(true){
    LF.setStopping(hold);
    LM.setStopping(hold);
    LB.setStopping(hold);
    RF.setStopping(hold);
    RM.setStopping(hold);
    RB.setStopping(hold);
 */

// Note for Coders: All intakes, positive is INTAKE/SCORE, Negative is OUTAKE
// Pnuematics are their given names... Eg. Wings are Wings 
void nineleft() {
  
    //7 BALL left
PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
RunSecondStage(0);
RunBottom(100);
Lift.set(false);
Wings.set(true);
TurnMaxTimePID(AngPara, -27,0.5, true);
MoveEncoderPID(TestPara, 80,16, 0.2,-25,true);//go toward 3 balls
wait(200,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,10, 0.1,-25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, -135,0.5, true);
wait(100,msec);
//MoveEncoderPID(TestPara,-70,20, 0.1,-135,true);//curve towards 2 balls
//RunSecondStage(100);
//wait(400,msec);
MoveEncoderPID(TestPara,80,42, 0.3,-135,true);
wait(50,msec);
TurnMaxTimePID(AngPara, 180,0.5, true);
MoveEncoderPID(TestPara,45,21, 0.3,180,true);
wait(200,msec);
MoveEncoderPID(TestPara,-100,35, 0.3,180,true);
Hood.set(true);
RunSecondStage(100);
wait(1100,msec);
Hood.set(false);
//MoveEncoderPID(TestPara,70,18, 0.2,180,true);
//MoveEncoderPID(TestPara,-70,17, 0.2,-150,true);
//MoveEncoderPID(TestPara,-70,25, 0.2,180,true);
//MoveEncoderPID(TestPara,70,15, 0.2,180,true);
//Addcodehere

}
void nineright(){
   PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
//4+3 Right
  
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
MoveEncoderPID(TestPara, -80,50, 0.1,-90,true);//curve towards 2 balls
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
    //9test left
Hood.set(true);
Wings.set(true);
Lift.set(false);


//This is AWP
Hood.set(true);
RunSecondStage(0);
RunBottom(100);
//Lift.set(true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,48, 0.2,0,true);//go toward 3 balls
wait(180,msec);
TurnMaxTimePID(AngPara, 90,0.3, true);
wait(50,msec);
MoveEncoderPID(TestPara, 50,16, 0.3,90,true);//curve towards long goal
wait(180,msec);
MoveEncoderPID(TestPara, -80,45, 0.1,90,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);
wait(950,msec);
RunSecondStage(-40);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,11, 0.1,90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -143,0.3, true);
MoveEncoderPID(TestPara, 80,34.5, 0.1,-143,true);
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,11, 0.1,-143,true);
wait(200,msec);
TurnMaxTimePID(AngPara, 180,0.3, true);
Scrapper.set(false);
MoveEncoderPID(TestPara, 80,45, 0.1,180,true);
wait(50,msec);
Scrapper.set(true);
Lift.set(true);
MoveEncoderPID(TestPara, 100,10, 0.1,180,true);
wait(200,msec);
TurnMaxTimePID(AngPara, 130,0.3, true);
MoveEncoderPID(TestPara, -60,15, 0.1,130,true);
wait(50,msec);
RunSecondStage(100);
wait(600,msec);
Lift.set(false);
RunSecondStage(-40);
wait(50,msec);
MoveEncoderPID(TestPara, 80,80, 0.1,135,true);
wait(50,msec);
Scrapper.set(true);
TurnMaxTimePID(AngPara, 90,0.3, true);
MoveEncoderPID(TestPara, 60,19, 0.2,90,true);//curve towards long goal
wait(250,msec);
//TurnMaxTimePID(AngPara, 80,0.3, true);
MoveEncoderPID(TestPara, -90,50, 0.1,90,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);

  //6+3 right
/*RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,43, 0.2,0,true);//go toward 3 balls
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
MoveEncoderPID(TestPara, 80,63, 0.1,135,true);
wait(50,msec);
Scrapper.set(true);
TurnMaxTimePID(AngPara, 90,0.3, true);
MoveEncoderPID(TestPara, 60,19, 0.2,90,true);//curve towards long goal
wait(200,msec);
//TurnMaxTimePID(AngPara, 80,0.3, true);
MoveEncoderPID(TestPara, -100,50, 0.1,87,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);
*/
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
    MoveEncoderPID(TestPara, 80,32, 0.1,-45,true);
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
    wait(700,msec);
    MoveEncoderPID(TestPara, 80,2, 0.1,90,false);
    wait(700,msec);
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
    Scrapper.set(true);

}
//Ignore all code after this point for now
void test4(){
    //Possible 9 BALL
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 right
  Wings.set(true);
  Hood.set(false);
RunSecondStage(0);
RunBottom(100);
//New 6+3 right route
Hood.set(false);
Wings.set(true);
RunSecondStage(0);
RunBottom(100);
TurnMaxTimePID(AngPara, 23,0.5, true);
MoveEncoderPID(TestPara, 80,20, 0.2,23,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,34, 0.2,25,true);//curve towards long goal
wait(100,msec);
Scrapper.set(false);
wait(100,msec);
TurnMaxTimePID(AngPara, 78,0.2, true);
wait(50,msec);
MoveEncoderPID(TestPara, 80,8.5, 0.1,75,true);
wait(50,msec);
Scrapper.set(true);
wait(100,msec);
MoveEncoderPID(TestPara, -80,15, 0.1,78,true);
TurnMaxTimePID(AngPara, 151,0.2, true);
RunSecondStage(0);
RunBottom(0);
MoveEncoderPID(TestPara, 80,66.5, 0.2,147,true);
TurnMaxTimePID(AngPara, 179,0.2, true);
RunSecondStage(0);
RunBottom(100);
MoveEncoderPID(TestPara, 60,20, 0.2,179,true);
Move(60,60);
wait(500,msec);
Hood.set(true);
MoveEncoderPID(TestPara, -60,35, 0.2,179,true);
Move(-35, -35);
RunSecondStage(100);
RunBottom(100);
wait(675,msec);
RunBottom(-10);
RunSecondStage(-20);
MoveEncoderPID(TestPara, 60,28, 0.2,-179.5,true);
Scrapper.set(false);
wait(50,msec);
TurnMaxTimePID(AngPara, -45,0.3, true);
RunSecondStage(0);
wait(50,msec);
MoveEncoderPID(TestPara, 70,78, 0.2,-45,true);
Hood.set(false);
RunBottom(-100);
RunSecondStage(-100);
wait(600,msec);
RunBottom(100);
RunSecondStage(0);
MoveEncoderPID(TestPara, -80,51, 0.2, -45,true);
wait(250,msec);
TurnMaxTimePID(AngPara, 0, 0.3, true);

//Lift.set(true);
//
//MoveEncoderPID(TestPara, 100,11, 0.1,0,false);//go toward 3 balls
//MoveEncoderPID(TestPara, 100,63, 0.1,-90,false);
//TurnMaxTimePID(AngPara, -30,0.3, false);
//TurnMaxTimePID(AngPara, 0,0.2, false);
//MoveEncoderPID(TestPara, 45,4.5, 0.1,0,false);
//wait(100,msec);
//Scrapper.set(true);
//wait(200,msec);
//TurnMaxTimePID(AngPara, -30,0.2, false);
//MoveEncoderPID(TestPara, -100,2, 0.1,-20,true);
//TurnMaxTimePID(AngPara, 90,0.3, true);
//MoveEncoderPID(TestPara, 100,33.5, 0.1,90,false);
//TurnMaxTimePID(AngPara, 30,0.2, false);
//MoveEncoderPID(TestPara, 40,11.25, 0.1,30,false);
//MoveEncoderPID(TestPara, 50,24, 0.1,90,false);
//wait(250,msec);
//MoveEncoderPID(TestPara, -100,44, 0.1,95,false);
//TurnMaxTimePID(AngPara, 90,0.1, true);
//MoveEncoderPID(TestPara, -100,0.5, 0.1,90,true);
//Hood.set(true);
//RunSecondStage(100);
//wait(1300,msec);
//Hood.set(false);
//Second part
//RunSecondStage(-100);
//Scrapper.set(false);
//MoveEncoderPID(TestPara, 60,13, 0.1,90,true);
//wait(250,msec);
//TurnMaxTimePID(AngPara, -137,0.3, true);
//RunBottom(80);
//MoveEncoderPID(TestPara, 80,24, 0.1,-137,true);
//Scrapper.set(true);
//MoveEncoderPID(TestPara, 40,6, 0.1,-137,true);
//wait(300,msec);
//Scrapper.set(false);
//wait(100,msec);
//RunBottom(0);
//MoveEncoderPID(TestPara, 70,25, 0.3,-140,true);
//RunBottom(-10);
//MoveEncoderPID(TestPara, 50,1, 0.1,-140,true);
//RunSecondStage(30);
//Scrapper.set(true);
//RunBottom(-75); 
//wait(1000,msec);
//Wings.set(false);
//RunBottom(100);
//MoveEncoderPID(TestPara, -80,36, 0.1,-140,true);
//wait(10,msec);
//TurnMaxTimePID(AngPara, -90,0.4, true);
//MoveEncoderPID(TestPara, 100,24, 0.2,-90,true);
//MoveEncoderPID(TestPara, -100,60, 0.1,90,true);
//TurnMaxTimePID(AngPara, -150,0.3, true);

}
void test5(){
// Use this to tune PID values
 PIDDataSet TestPara={2.4,0.02,0.31};
 PIDDataSet AngPara={2.1,0.03,0.13};
  //4+3 left
  
Hood.set(true);
Wings.set(true);
RunSecondStage(-40);
RunBottom(100);
TurnMaxTimePID(AngPara, -23,0.5, true);
MoveEncoderPID(TestPara, 80,20, 0.2,-23,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 50,10, 0.1,-25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, -135,0.5, true);
wait(100,msec);
MoveEncoderPID(TestPara,80,40, 0.3,-130,true);
MoveEncoderPID(TestPara,50,3, 0.1,-130,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 180,0.4, true);
MoveEncoderPID(TestPara,45,20, 0.1,180,true);
//MoveEncoderPID(TestPara,45,20, 0.1,180,true);
wait(200,msec);
MoveEncoderPID(TestPara,-100,35, 0.3,-177,true);
RunSecondStage(100);
wait(650,msec);
RunSecondStage(-60);
Scrapper.set(false);
RunBottom(10);
MoveEncoderPID(TestPara, 60,20.5, 0.1,180,true);
MoveEncoderPID(TestPara, 60,3, 0.1,180,true);
wait(250,msec);
Lift.set(true);
TurnMaxTimePID(AngPara, -135,0.3, true);
MoveEncoderPID(TestPara, -80,79, 0.1,-135,true);
RunSecondStage(80);
RunBottom(80);
wait(1000,msec);
Wings.set(false);
RunBottom(100);
MoveEncoderPID(TestPara, 80,46, 0.1,-135,true);
wait(10,msec);
TurnMaxTimePID(AngPara, 180,0.4, true);
MoveEncoderPID(TestPara, -100,24, 0.2,180,true);
//MoveEncoderPID(TestPara, -100,60, 0.1,90,true);
TurnMaxTimePID(AngPara, -150,0.3, true);
MoveEncoderPID(TestPara, -100,2, 0.2,-150,true);
while(true){
    LF.setStopping(hold);
    LM.setStopping(hold);
    LB.setStopping(hold);
    RF.setStopping(hold);
    RM.setStopping(hold);
    RB.setStopping(hold);
    
}
/*
//7 ball left
Hood.set(true);
Wings.set(false);
RunSecondStage(-40);
RunBottom(100);
TurnMaxTimePID(AngPara, -23,0.5, true);
MoveEncoderPID(TestPara, 80,20, 0.2,-23,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 50,10, 0.1,-25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, -135,0.5, true);
wait(100,msec);
MoveEncoderPID(TestPara,80,39, 0.3,-130,true);
MoveEncoderPID(TestPara,50,3, 0.1,-130,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 180,0.4, true);
MoveEncoderPID(TestPara,45,21, 0.1,180,true);
//MoveEncoderPID(TestPara,45,20, 0.1,180,true);
wait(190,msec);
MoveEncoderPID(TestPara,-100,35, 0.3,-177,true);
RunSecondStage(100);
wait(1600,msec);
RunBottom(0);
RunSecondStage(0);
MoveEncoderPID(TestPara,100,16, 0.1,120,false);
MoveEncoderPID(TestPara,-70,35, 0.3,178,true);
while(true){
    LF.setStopping(hold);
    LM.setStopping(hold);
    LB.setStopping(hold);
    RF.setStopping(hold);
    RM.setStopping(hold);
    RB.setStopping(hold);
    
}
    */
}
/*    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 left
  Wings.set(true);
  Hood.set(true);
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
//
MoveEncoderPID(TestPara, 90,10.75, 0.1,0,false);//go toward 3 balls
MoveEncoderPID(TestPara, 90,62.5, 0.1,90,false);
TurnMaxTimePID(AngPara, 30,0.3, false);
TurnMaxTimePID(AngPara, 15,0.3, true);
MoveEncoderPID(TestPara, 50,7, 0.1,15,false);
Scrapper.set(true);
wait(300,msec);
TurnMaxTimePID(AngPara, 30,0.2, false);
MoveEncoderPID(TestPara, -100,3, 0.1,30,true);
TurnMaxTimePID(AngPara, -90,0.5, true);

MoveEncoderPID(TestPara, 100,33.5, 0.1,-90,false);
TurnMaxTimePID(AngPara, -30,0.2, false);
MoveEncoderPID(TestPara, 50,15, 0.1,-30,false);
MoveEncoderPID(TestPara, 50,22, 0.1,-90,false);
MoveTimePID(TestPara,-40,0.25,0.1,-90,true);
MoveEncoderPID(TestPara, -100,44, 0.1,-90,true);
RunSecondStage(100);

MoveTimePID(TestPara,40,0.8,0.1,-90,true);
//Second part
RunSecondStage(-100);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,16, 0.1,-90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, 135,0.3, true);
MoveEncoderPID(TestPara, 80,25.5, 0.1,135,true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 70,10, 0.1,135,true);
wait(200,msec);
TurnMaxTimePID(AngPara, -40,0.7, true);
wait(50,msec);
Lift.set(true);
MoveEncoderPID(TestPara, -80,26.5, 0.3,-40,true);
RunSecondStage(40);
wait(1200,msec);
Wings.set(false);
MoveEncoderPID(TestPara, 80,46, 0.2,-43,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -90,0.4, true);
MoveEncoderPID(TestPara, -70,33, 0.2,-90,true);
TurnMaxTimePID(AngPara, -70,0.4, true);
while(true){
    LF.setStopping(hold);
    LM.setStopping(hold);
    LB.setStopping(hold);
    RF.setStopping(hold);
    RM.setStopping(hold);
    RB.setStopping(hold);

}*/
void ninetest() {
  
  //7ball Right
  PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
    Hood.set(true);
RunSecondStage(-40);
RunBottom(100);
TurnMaxTimePID(AngPara, 27,0.5, true);
MoveEncoderPID(TestPara, 80,17, 0.2,25,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 50,10, 0.1,25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, 132,0.5, true);
wait(100,msec);
wait(50,msec);
MoveEncoderPID(TestPara,100,45, 0.1,132,true);

MoveEncoderPID(TestPara,50,4, 0.1,132,true);
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

  //6+3 right
  /*
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
*/
    }

    void extra() {
      PIDDataSet TestPara={2.4,0.02,0.31};
      PIDDataSet AngPara={2.1,0.03,0.13};
      
//7 Right

Hood.set(false);
Wings.set(true);
RunSecondStage(0);
RunBottom(100);
TurnMaxTimePID(AngPara, 23,0.5, true);
MoveEncoderPID(TestPara, 80,20, 0.2,23,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 50,10, 0.1,25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, 135,0.5, true);
wait(100,msec);
MoveEncoderPID(TestPara,80,41, 0.3,130,true);
MoveEncoderPID(TestPara,50,3, 0.1,130,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 180,0.4, true);
MoveEncoderPID(TestPara,45,20.5, 0.1,180,true);
MoveEncoderPID(TestPara,45,1, 0.1,180,false);
//MoveEncoderPID(TestPara,45,20, 0.1,180,true);
wait(150,msec);
MoveEncoderPID(TestPara,-100,35, 0.3,180,true);
Hood.set(true);
RunSecondStage(100);
MoveTimePID(TestPara,40,1.6,0.05,180,true);
Wings.set(false);
Scrapper.set(false);
RunSecondStage(0);
RunBottom(0);


  //4+3 right
/*
  Hood.set(false);
Wings.set(true);
RunSecondStage(-40);
RunBottom(100);
TurnMaxTimePID(AngPara, 23,0.5, true);
MoveEncoderPID(TestPara, 80,20, 0.2,23,true);//go toward 3 balls
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 50,10, 0.1,25,true);//curve towards long goal
wait(100,msec);
TurnMaxTimePID(AngPara, 135,0.5, true);
wait(100,msec);
MoveEncoderPID(TestPara,80,44, 0.3,130,true);
MoveEncoderPID(TestPara,50,1, 0.1,130,true);
TurnMaxTimePID(AngPara, 180,0.4, true);
MoveEncoderPID(TestPara,45,15, 0.1,180,true);
wait(200,msec);
//MoveTimePID(TestPara,-40,0.075,0.05,180,true);
MoveEncoderPID(TestPara,-100,35, 0.3,178,true);
RunSecondStage(100);
MoveTimePID(TestPara,40,0.6,0.1,180,true);
RunSecondStage(-60);
Scrapper.set(false);
RunBottom(-10);
MoveEncoderPID(TestPara, 60,19, 0.1,180,true);
MoveEncoderPID(TestPara, 60,4, 0.1,180,true);
wait(250,msec);
TurnMaxTimePID(AngPara, -48,0.6, true);
MoveEncoderPID(TestPara, 80,76, 0.1,-48,true);
RunBottom(-70);
wait(1800,msec);
Wings.set(false);
RunBottom(100);
MoveEncoderPID(TestPara, -80,43, 0.1,-45,true);
wait(10,msec);
TurnMaxTimePID(AngPara, 0,0.4, true);
MoveEncoderPID(TestPara, 100,26, 0.2,0,true);
//MoveEncoderPID(TestPara, -100,60, 0.1,90,true);
TurnMaxTimePID(AngPara, -80,0.4, true);
//MoveEncoderPID(TestPara, 100,2, 0.2,-60,true);
*/
//6+3 Right
/*
Hood.set(true);
 Wings.set(true);
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
//
MoveEncoderPID(TestPara, 100,9.75, 0.1,0,false);//go toward 3 balls
MoveEncoderPID(TestPara, 100,67, 0.1,-90,false);
TurnMaxTimePID(AngPara, -30,0.3, false);
TurnMaxTimePID(AngPara, 0,0.2, false);
MoveEncoderPID(TestPara, 45,3.5, 0.1,0,false);
//wait(100,msec);
Scrapper.set(true);
wait(200,msec);
TurnMaxTimePID(AngPara, -30,0.2, false);
MoveEncoderPID(TestPara, -100,5, 0.1,-20,true);
TurnMaxTimePID(AngPara, 90,0.3, true);
MoveEncoderPID(TestPara, 100,33.5, 0.1,90,false);
TurnMaxTimePID(AngPara, 30,0.2, false);
MoveEncoderPID(TestPara, 40,21.25, 0.1,30,false);
MoveEncoderPID(TestPara, 50,28, 0.1,90,false);
wait(210,msec);
MoveEncoderPID(TestPara, -100,44, 0.1,90,false);
TurnMaxTimePID(AngPara, 90,0.1, true);
MoveEncoderPID(TestPara, -80,0.5, 0.1,90,true);
RunSecondStage(100);
wait(1000,msec);
//Second part
RunSecondStage(-100);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,21.5, 0.1,90,true);
wait(280,msec);
TurnMaxTimePID(AngPara, -137,0.3, true);
RunBottom(80);
MoveEncoderPID(TestPara, 80,30, 0.1,-135,true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 40,5, 0.1,-135,true);
wait(300,msec);
Scrapper.set(false);
wait(100,msec);
RunBottom(0);
MoveEncoderPID(TestPara, 70,22, 0.3,-137,true);
RunBottom(-10);
MoveEncoderPID(TestPara, 50,1, 0.1,-137,true);
//RunSecondStage(30);
//Scrapper.set(true);
RunSecondStage(-100);
RunBottom(-100); 
wait(1000,msec);
Wings.set(false);
RunBottom(100);
MoveEncoderPID(TestPara, -80,38.5, 0.1,-140,true);
wait(10,msec);
TurnMaxTimePID(AngPara, -90,0.4, true);
MoveEncoderPID(TestPara, 100,22, 0.2,-90,true);
//MoveEncoderPID(TestPara, -100,60, 0.1,90,true);
TurnMaxTimePID(AngPara, -150,0.3, true);
*/

//Solo awp
Hood.set(false);
Wings.set(true);
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,48, 0.2,0,true);//go toward 3 balls
wait(180,msec);
TurnMaxTimePID(AngPara, 90,0.3, true);
wait(50,msec);
MoveEncoderPID(TestPara, 50,16, 0.3,90,true);//curve towards long goal
wait(180,msec);
MoveEncoderPID(TestPara, -80,45, 0.1,90,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);
wait(950,msec);
RunSecondStage(-40);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,11, 0.1,90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -143,0.3, true);
MoveEncoderPID(TestPara, 80,34.5, 0.1,-143,true);
wait(50,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,11, 0.1,-143,true);
wait(200,msec);
TurnMaxTimePID(AngPara, 180,0.3, true);
Scrapper.set(false);
MoveEncoderPID(TestPara, 80,45, 0.1,180,true);
wait(50,msec);
Scrapper.set(true);
Lift.set(true);
MoveEncoderPID(TestPara, 100,10, 0.1,180,true);
wait(200,msec);
TurnMaxTimePID(AngPara, 130,0.3, true);
MoveEncoderPID(TestPara, -60,15, 0.1,130,true);
wait(50,msec);
RunSecondStage(100);
wait(600,msec);
Lift.set(false);
RunSecondStage(-40);
wait(50,msec);
MoveEncoderPID(TestPara, 80,78, 0.1,135,true);
wait(50,msec);
Scrapper.set(true);
TurnMaxTimePID(AngPara, 90,0.3, true);
MoveEncoderPID(TestPara, 60,19, 0.2,90,true);//curve towards long goal
wait(250,msec);
//TurnMaxTimePID(AngPara, 80,0.3, true);
MoveEncoderPID(TestPara, -90,50, 0.1,90,true);//curve towards 2 balls
wait(50,msec);
RunSecondStage(100);

    }
    void more() {
      PIDDataSet TestPara={2.4,0.02,0.31};
      PIDDataSet AngPara={2.1,0.03,0.13};
       Wings.set(true);
  Hood.set(true);
RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
//
MoveEncoderPID(TestPara, 90,10.75, 0.1,0,false);//go toward 3 balls
MoveEncoderPID(TestPara, 90,62.5, 0.1,90,false);
TurnMaxTimePID(AngPara, 30,0.3, false);
TurnMaxTimePID(AngPara, 15,0.3, true);
MoveEncoderPID(TestPara, 50,7, 0.1,15,false);
Scrapper.set(true);
wait(300,msec);
TurnMaxTimePID(AngPara, 30,0.2, false);
MoveEncoderPID(TestPara, -100,3, 0.1,30,true);
TurnMaxTimePID(AngPara, -90,0.5, true);

MoveEncoderPID(TestPara, 100,33.5, 0.1,-90,false);
TurnMaxTimePID(AngPara, -30,0.2, false);
MoveEncoderPID(TestPara, 50,15, 0.1,-30,false);
MoveEncoderPID(TestPara, 50,22, 0.1,-90,false);
MoveTimePID(TestPara,-40,0.25,0.1,-90,true);
MoveEncoderPID(TestPara, -100,44, 0.1,-90,true);
RunSecondStage(100);

MoveTimePID(TestPara,40,0.8,0.1,-90,true);
//Second part
RunSecondStage(-100);
Scrapper.set(false);
MoveEncoderPID(TestPara, 60,16, 0.1,-90,true);
wait(50,msec);
TurnMaxTimePID(AngPara, 135,0.3, true);
MoveEncoderPID(TestPara, 80,25.5, 0.1,135,true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 70,10, 0.1,135,true);
wait(200,msec);
TurnMaxTimePID(AngPara, -40,0.7, true);
wait(50,msec);
Lift.set(true);
MoveEncoderPID(TestPara, -80,26.5, 0.3,-40,true);
RunSecondStage(40);
wait(1200,msec);
Wings.set(false);
MoveEncoderPID(TestPara, 80,46, 0.2,-43,true);
wait(50,msec);
TurnMaxTimePID(AngPara, -90,0.4, true);
MoveEncoderPID(TestPara, -70,33, 0.2,-90,true);
TurnMaxTimePID(AngPara, -70,0.4, true);

      
    }

