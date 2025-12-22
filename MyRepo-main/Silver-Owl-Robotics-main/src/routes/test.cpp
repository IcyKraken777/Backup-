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

}

  
}
void AWP(){
    // declare initial conditions
    //AWP
    
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};

RunSecondStage(-40);
RunBottom(100);
//Lift.set(true);
Scrapper.set(true);
MoveEncoderPID(TestPara, 80,36, 0.2,0,true);//go toward 3 balls
wait(200,msec);
TurnMaxTimePID(AngPara, 90,0.3, true);
wait(50,msec);
MoveEncoderPID(TestPara, 50,13, 0.3,90,true);//curve towards long goal
MoveTimePID(TestPara,-40,0.2,0.1,-90,true);
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
    PIDDataSet AngPara={2.1,0.03,0.13};
    PIDDataSet SpecialPara={2,0.01,0.27};
    //NOTE:time inbetween matchloaders (second and bottom stage) is determind by moves
    
    RunSecondStage(-100);
    RunBottom(100);
    //Lift.set(true);
    Hood.set(true);
    Scrapper.set(true);
    Wings.set(true);
    MoveEncoderPID(TestPara, 100,44 , 0.2,0,true);//go toward 3 balls
    wait(200,msec);
    TurnMaxTimePID(AngPara, 90,0.5, true);
    wait(50,msec);
    MoveEncoderPID(TestPara, 50,15, 0.3,90,true);//curve towards long goal
    wait(700,msec);
    MoveEncoderPID(TestPara, 50,1, 0.1,90,false);
    wait(600,msec);
    MoveEncoderPID(TestPara, -80,13.5, 0.1,90,true);
    TurnMaxTimePID(AngPara, -45,0.4, true);
    Scrapper.set(false);
    //Next side movement
    MoveEncoderPID(TestPara, 80,23, 0.1,-40,true);
    //RunSecondStage(0);
    RunSecondStage(0);
    RunBottom(0);
    TurnMaxTimePID(AngPara, -88,0.5, true);
    MoveEncoderPID(TestPara, 100,100, 0.1,-86,false);
    wait(200,msec);
    MoveEncoderPID(TestPara, 50,2, 0.1,-89,true);
    wait(100,msec);
    TurnMaxTimePID(AngPara, 0,0.5, true);
    MoveTimePID(TestPara, -40, 0.5,0.1,0, true);
    //Gyro.calibrate();
    //waitUntil(!Gyro.isCalibrating());
    double offset;
    offset = Gyro.heading(degrees);
    if (offset>180)
    {
        offset -= 360;
    }
    MoveEncoderPID(TestPara, -80,14, 0.1,0,true);
    TurnMaxTimePID(AngPara, -90,0.7, true);
    MoveEncoderPID(TestPara, -80,22, 0.1,(-90-offset),true);
    RunBottom(100);
    RunSecondStage(100);
    Scrapper.set(true);
    MoveTimePID(TestPara, 40, 1.4,0.1,(-90-offset), true);
    RunSecondStage(-100);
    TurnMaxTimePID(AngPara, (-90-offset),0.2, true);
    MoveEncoderPID(TestPara, 50,37, 0.1,(-90-offset),true);
    MoveTimePID(TestPara, -50, 1.3,0.1,(-90-offset), true);
    MoveEncoderPID(TestPara, -80,36, 0.1,(-90-offset),true);
    RunSecondStage(100);
    MoveTimePID(TestPara, 50, 1.5,0.1,(-90-offset), true);
    RunSecondStage(-100);
    //Middlegoal1
    Scrapper.set(false);
    MoveEncoderPID(TestPara, 80,19, 0.1,(-90-offset),true);
    wait(200,msec);  
    TurnMaxTimePID(AngPara, 137,0.5, true);
    MoveEncoderPID(TestPara, 80,28, 0.1,140,true);
    wait(50,msec);
    Scrapper.set(true);
    wait(50,msec);
    MoveEncoderPID(TestPara, 80,4, 0.1,140,true);
    TurnMaxTimePID(AngPara, 240,0.3, true);
    TurnMaxTimePID(AngPara, (-38-offset),0.4, true);
    Lift.set(true);
    MoveEncoderPID(TestPara, -80,29.5, 0.1,(-40-offset),true);
    RunSecondStage(40);
    wait(900,msec);
    Scrapper.set(false);
    //Lift.set(false);
    RunSecondStage(-40);
    MoveEncoderPID(TestPara, 80,20, 0.1,(-38-offset),true);
    TurnMaxTimePID(AngPara, (-90+offset),0.5, true);
    MoveEncoderPID(TestPara, 80,65, 0.1,(-90-offset),true);
    offset == Gyro.heading(degrees);
    //Brain.Screen.print(offset+90);
    //MoveEncoderPID(TestPara, -80,1.5, 0.1,-90,true);s
    TurnMaxTimePID(AngPara, -170,0.5, true);
    Lift.set(false);
    MoveEncoderPID(TestPara, 100,70, 0.1,-160,true);
    wait(300,msec);
    MoveEncoderPID(TestPara, 100,80, 0.1,-165,true);
    wait(100,msec);
    MoveTimePID(TestPara,30,0.5, 0.1,180,false);
    wait(100,msec);
    TurnMaxTimePID(AngPara, 150,0.5, true);
    MoveEncoderPID(TestPara,80,40, 0.1,150,true);
    TurnMaxTimePID(AngPara, 180,0.5, true);
    //MoveEncoderPID(TestPara,80,15, 0.1,180,false);
    MoveTimePID(TestPara, -80, 1,0.1,180, true);
    //Teting Offset
    offset == Gyro.heading(degrees)-180;
    wait(300,msec);
    MoveEncoderPID(TestPara,-80,11, 0.1,180,true);
    TurnMaxTimePID(AngPara, (-90-offset),0.5, true);
    MoveEncoderPID(TestPara,-80,23, 0.1,(-90-offset),true);
    RunSecondStage(100);
    Scrapper.set(true);
    MoveTimePID(TestPara, 50, 1.3,0.1,(-90-offset), true);
    RunSecondStage(-40);
    MoveEncoderPID(TestPara, 80,36, 0.1,(-90-offset),true);
    MoveTimePID(TestPara, -50, 1.3,0.1,(-90-offset), true);
    MoveEncoderPID(TestPara, -80,37, 0.1,(-90-offset),true);
    RunSecondStage(100);
    MoveTimePID(TestPara, 50, 1.3,0.1,(-90-offset), true);
    RunSecondStage(-40);
    //next area
    Scrapper.set(false);
    TurnMaxTimePID(AngPara, (-90- offset),0.1, true);
    MoveEncoderPID(TestPara, 80,19, 0.1,(-90-offset),true);
    wait(200,msec);  
    TurnMaxTimePID(AngPara, 135,0.5, true);
    MoveEncoderPID(TestPara, 80,22, 0.1,135,true);
    TurnMaxTimePID(AngPara, (95+offset),0.5, true);
    MoveEncoderPID(TestPara, 80,100, 0.1,(95+offset),true);
    

    TurnMaxTimePID(AngPara, 45,0.5, true);
    MoveEncoderPID(TestPara, 80,19, 0.1,45,true);
    TurnMaxTimePID(AngPara, 180,0.5, true);
    MoveEncoderPID(TestPara, 80,23, 0.1,180,true);
    offset == Gyro.heading(degrees)-180;
    MoveEncoderPID(TestPara, -80,14, 0.1,180,true);
    Scrapper.set(true);
    TurnMaxTimePID(AngPara, (90-offset),0.5, true);
    
    MoveEncoderPID(TestPara, 50,35, 0.1,(90-offset),true);
    wait(500,msec);
    MoveEncoderPID(TestPara, 80,1, 0.3,(90-offset),false);
    wait(500,msec);
    //Lift.set(true);
    MoveEncoderPID(TestPara, -80,37, 0.1,(94-offset),true);
    //TurnMaxTimePID(AngPara, 140,0.5, true);
    //MoveEncoderPID(TestPara, -80,56, 0.1,140,true);
    RunSecondStage(100);
    MoveTimePID(TestPara,40,0.5,0.1,92,true);
    //RunSecondStage(-40);
    MoveEncoderPID(TestPara, 80,14, 0.1,94,true);
    TurnMaxTimePID(AngPara, 94,0.5, true);
    Scrapper.set(false);
    //RunBottom(-100);
    MoveEncoderPID(TestPara, 80,45, 0.1,45,true);
     MoveTimePID(TestPara, -80, 1,0.1,90, true);
    TurnMaxTimePID(AngPara, 20,0.5, true);
    MoveEncoderPID(TestPara, 100,40, 0.1,17,true);
    //Scrapper.set(true);
    wait(300,msec);
    MoveEncoderPID(TestPara, 70,30, 0.1,0,true);


}
void skillrisk (){
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.2,0.03,0.13};
    PIDDataSet SpecialPara={2,0.01,0.27};
    RunBottom(100);
    RunSecondStage(-40);
    Wings.set(true);
    Hood.set(true);
    //Move to Mid Goal
    MoveEncoderPID(TestPara, 80,9, 0.2,0,true);
    TurnMaxTimePID(AngPara, -40,0.5, true);
    MoveEncoderPID(TestPara, 80,11.5, 0.2,-40,true);
    Scrapper.set(true);
    Lift.set(true);
    TurnMaxTimePID(AngPara, -135,0.5, true);
    MoveEncoderPID(TestPara, -80,21, 0.2,-135,true);
    //Score Mid 2
    RunSecondStage(50);
    wait(450,msec);
    RunSecondStage(-40);
    RunBottom(-40);
    Lift.set(false);
    wait(100,msec);
    RunBottom(100);
    //Matchloader
    MoveEncoderPID(TestPara, 70,82, 0.1,-130,true);
    MoveEncoderPID(TestPara, 70,1, 0.1,-130,true);
    TurnMaxTimePID(AngPara, 180,0.6, true);
    MoveEncoderPID(TestPara, 50,22, 0.2,180,true);
    MoveTimePID(TestPara, -40, 1,0.1,180, true);
    MoveEncoderPID(TestPara, -80,10, 0.2,180,true);
    Scrapper.set(false);
    TurnMaxTimePID(AngPara, 140,0.5, true);
    MoveEncoderPID(TestPara, -80,19, 0.2,140,true);
    TurnMaxTimePID(AngPara, 182,0.5, true);
    //To the Otherside
    RunBottom(0);
    RunSecondStage(0);
    MoveEncoderPID(TestPara, -75,113, 0.2,180,true);
    TurnMaxTimePID(AngPara, -90,0.5, true);
    MoveTimePID(TestPara, -40, 0.35,0.1,-90, true);
    MoveEncoderPID(TestPara, -80,10.5, 0.2,-90,true);
    TurnMaxTimePID(AngPara, 0,0.5, true);
    MoveEncoderPID(TestPara, -80,19, 0.2,0,true);
    //Score
    RunBottom(100);
    RunSecondStage(100);
    MoveTimePID(TestPara, 40, 1.5,0.1,0, true);
    RunSecondStage(-40);
    Scrapper.set(true);
    TurnMaxTimePID(AngPara, 0,0.2, true);
    //MAtchload2
    MoveEncoderPID(TestPara, 50,36, 0.2,0,true);
    MoveTimePID(TestPara, -40, 1.3,0.1,0, true);
    //Score#2
    MoveEncoderPID(TestPara, -80,35, 0.2,0,true);
    RunSecondStage(100);
    MoveTimePID(TestPara, 40, 1.5,0.1,0, true);
    
    Scrapper.set(false);
    //Next movemnet to park
    MoveEncoderPID(TestPara, 80,5, 0.2,0,true);
    TurnMaxTimePID(AngPara, 35,0.5, true);
    MoveEncoderPID(TestPara, 80,32, 0.2,35,true);
    RunSecondStage(-100);
    TurnMaxTimePID(AngPara, 0,0.5, true);
    MoveTimePID(TestPara, -45, 0.4,0.1,0, true);
    TurnMaxTimePID(AngPara, 72,0.5, true);
    MoveEncoderPID(TestPara, 90,60, 0.1,72,true);
    wait(500,msec);
    MoveEncoderPID(TestPara, 105,80, 0.1,72,true);
    MoveTimePID(TestPara, 60, 0.5,0.1,90, true);
    //To middle goal
    //MoveEncoderPID(TestPara, 80,10, 0.2,90,true);
    TurnMaxTimePID(AngPara, 180,0.5, true);
    MoveEncoderPID(TestPara, 80,3, 0.1,180,true);
    TurnMaxTimePID(AngPara, 170,0.5, true);
    MoveEncoderPID(TestPara, 80,46.5, 0.1,170,true);
    TurnMaxTimePID(AngPara, 47.5,0.5, true);
    Lift.set(true);
    MoveEncoderPID(TestPara, -80,18, 0.2,47.5,true);
    RunSecondStage(30);
    MoveTimePID(TestPara,15, 1.3,0.1,45, true);
    MoveEncoderPID(TestPara, 80,72, 0.2,45,true);
    Lift.set(false);
    RunSecondStage(-40);
    //Matchload
    Scrapper.set(true);
    TurnMaxTimePID(AngPara, 0,0.5, true);
    MoveEncoderPID(TestPara, 80,20, 0.2,0,true);
    MoveTimePID(TestPara, -25, 1,0.1,0, true);
    //Next side Movement
    MoveEncoderPID(TestPara, -80,10, 0.2,0,true);
    TurnMaxTimePID(AngPara, -30,0.5, true);
    MoveEncoderPID(TestPara, -80,20, 0.2,-30,true);
    Scrapper.set(false);
    TurnMaxTimePID(AngPara, 0,0.5, true);
    RunBottom(0);
    RunSecondStage(0);
    MoveEncoderPID(TestPara, -75,100, 0.2,0,true);
    //IDK
    TurnMaxTimePID(AngPara, 90,0.3, true);
    MoveTimePID(TestPara, -40, 0.35,0.1,90, true);
    MoveEncoderPID(TestPara, -80,11, 0.2,90,true);
    TurnMaxTimePID(AngPara, 180,0.3, true);
    MoveEncoderPID(TestPara, -80,19, 0.2,180,true);
    //...
    RunBottom(100);
    RunSecondStage(100);
    MoveTimePID(TestPara, 15, 1,0.1,180, true);
    RunSecondStage(-40);
    Scrapper.set(true);
    //???

    MoveEncoderPID(TestPara, 50,35, 0.2,180,true);
    MoveTimePID(TestPara, -10, 1,0.1,180, true);
    //Score#2
    MoveEncoderPID(TestPara, -80,35, 0.2,180,true);
    RunSecondStage(100);
    MoveTimePID(TestPara, 15, 1.4,0.1,180, true);
    RunSecondStage(-100);
    Scrapper.set(false);
    //TEST
    MoveEncoderPID(TestPara, 80,5, 0.2,180,true);
    TurnMaxTimePID(AngPara, -145,0.3, true);
    MoveEncoderPID(TestPara, 80,32, 0.2,-145,true);
    TurnMaxTimePID(AngPara, -95,0.3, true);
    MoveEncoderPID(TestPara, 80,50, 0.2,-95,true);
    MoveEncoderPID(TestPara, 80,20, 0.2,-95,true);



    //RunSecondStage(-40);

}
//Ignore all code after this point for now
void test4(){
    //Possible 9 BALL
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.1,0.03,0.13};
  //6+3 right
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

}


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

