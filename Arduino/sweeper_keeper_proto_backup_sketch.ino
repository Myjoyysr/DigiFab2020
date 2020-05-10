#include <Servo.h>

int pos = 0;
int move = 10;

Servo servo_left;
Servo servo_right;

const int pingPin1 = 5;
const int pingPin2 = 6;
const int buttonPin = 12; //button test
bool turn_left = true;
bool robo_on = false;


long duration, cm1, cm2;

void setup(){
  Serial.begin(9600);
  servo_left.attach(9);
  servo_right.attach(10);
  pinMode(buttonPin, INPUT_PULLUP); //button test

}
//PingPin
long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
//Movement for testing
// Stop
int stop (int move){
  servo_left.writeMicroseconds(1500);
  servo_right.writeMicroseconds(1500);
  delay(move);
  return move;
}
// Forward
int forward(int move){
  servo_left.writeMicroseconds(1300);
  servo_right.writeMicroseconds(1700);
  delay(move);
  return move;
}
// Reverse
int reverse(int move){
  servo_left.writeMicroseconds(1700);
  servo_right.writeMicroseconds(1300);
  delay(move);
  return move;
}
// Right
int right(int move){
  servo_left.writeMicroseconds(1700);
  servo_right.writeMicroseconds(1700);
  delay(move);
  return move;
}
//Left
int left(int move){
  servo_left.writeMicroseconds(1300);
  servo_right.writeMicroseconds(1300);
  delay(move);
  return move;
}
//Turning
void turning_left(){
  pos = stop(100);
  pos = left (700);
  pos = forward (300);
  pos = left (700);
  turn_left = false;
  Serial.print("Turned 180 degrees to left.");
  Serial.println();
}
void turning_right(){
  pos = stop(100);
  pos = right (700);
  pos = forward (300);
  pos = right (700);
  turn_left = true;
  Serial.print("Turned 180 degrees to right.");
  Serial.println();
}
//Pings
//Right
int ping_right(){
  //long duration, cm1;

  pinMode(pingPin1, OUTPUT);
  digitalWrite(pingPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin1, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin1, LOW);

  pinMode(pingPin1, INPUT);
  duration = pulseIn(pingPin1, HIGH);

  cm1 = microsecondsToCentimeters(duration);
  Serial.print(cm1);
  Serial.print("cm p1");
  Serial.println();
  return cm1;
}
//Left
int ping_left(){
  //long duration, cm2;

  pinMode(pingPin2, OUTPUT);
  digitalWrite(pingPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin2, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin2, LOW);

  pinMode(pingPin2, INPUT);
  duration = pulseIn(pingPin2, HIGH);

  cm2 = microsecondsToCentimeters(duration);
  Serial.print(cm2);
  Serial.print("cm p2");
  Serial.println();
  return cm2;
}
//********//

//With this code robot cleans table when you
//position robot to the corner of the table and
//press the button. Robot will keep doing zigzag
//and after reaching other end of the table it will come back
//doing zigzag to the otherway. For more complicated cleaning
//we would need infrasensor for wheels to measure distance.
//Robot stops when you press button again.
//in order to stop moving need to keep button pressed down for
//couple seconds because of hard coded turning... (need to
//measure distance to get rid of that or do checks in turning code)
void loop(){
  int buttonValue = digitalRead(buttonPin);//button test
  
  if (buttonValue == LOW){//button test
    Serial.print("Pressed button");
    Serial.println();
    if (robo_on){
		robo_on = false;
    }
    else{
      	robo_on = true;
    }
  	delay(1000);
  }

  if (robo_on){
  	cm1 = ping_right();
  	cm2 = ping_left();  
  	delay(10);  
  
  	if (cm1 < 3 || cm2 < 3){
    	pos = forward(150);
    	if(cm1 > 3){
      	turn_left = true;
    	}
    	else{
      	turn_left = false;
    	}
  	}
  	if (cm1 > 3 && cm2 > 3){
    	if (turn_left){
			turning_left();
    	}
    	else{
			turning_right();
    	}
  	}
  }   //buttontest
  else{// (buttonValue == HIGH){
    stop(100);
  }
}

/* Sketch for something else
void loop(){
  if (ping_right() > 3){
    turning_left();
  }
  else if (ping_left() > 3){
     turning_right();   
   }
   else{
     forward(150);   
   }
   delay(10);
}
*/

      
      
      
      
      
      
      
      
      