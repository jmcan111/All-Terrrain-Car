
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
const int F = 10;
const int B = 11;
const int R = 12;
const int L = 13;
const int F_Trig = 8;
const int F_Echo = 9;
const int B_Trig = 6;
const int B_Echo = 7;
const int R_Trig = 4;
const int R_Echo = 5;
const int L_Trig = 2;
const int L_Echo = 3;

long dur_F;
int dis_F;
long dur_B;
int dis_B;
long dur_R;
int dis_R;
long dur_L;
int dis_L;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

 pinMode(F_Trig, OUTPUT);
 pinMode(F_Echo, INPUT);
 pinMode(B_Trig, OUTPUT);
 pinMode(B_Echo, INPUT);
 pinMode(R_Trig, OUTPUT);
 pinMode(R_Echo, INPUT);
 pinMode(L_Trig, OUTPUT);
 pinMode(L_Echo, INPUT);
  
  pinMode(F, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(L, OUTPUT);

  delay(1000); //delays 20 seconds to set down (set one second for now)
}

// the loop function runs over and over again forever
void loop() {


  dis_F = calc_dist_F();
  dis_B = calc_dist_B();
  dis_R = calc_dist_R();
  dis_L = calc_dist_L();

  
  if(dis_F >= 40){
      digitalWrite(F, LOW); 
      delay(20);
  }

   if(dis_B >= 40){
      digitalWrite(B, LOW); 
      delay(20);  
  }

   if(dis_R >= 40){
      digitalWrite(R, LOW); 
      delay(20);  
  }

   if(dis_L >= 40){
      digitalWrite(L, LOW); 
      delay(20);  
  }

  if(dis_F <= 40){
      digitalWrite(F, HIGH); 
      delay(20);
  }

   if(dis_B <= 40){
      digitalWrite(B, HIGH); 
      delay(20);  
  }

   if(dis_R <= 40){
      digitalWrite(R, HIGH); 
      delay(20);  
  }

   if(dis_L <= 40){
      digitalWrite(L, HIGH); 
      delay(20);  
  }
 
  //digitalWrite(F, LOW);    
  //delay(1);                      
  //digitalWrite(B, LOW);    
  //delay(1);
  //digitalWrite(R, LOW);    
  //delay(1);
  //digitalWrite(L, LOW);    
  //delay(1);
}

int calc_dist_F() {
  digitalWrite(F_Trig, LOW);
  delayMicroseconds(2);

    digitalWrite(F_Trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(F_Trig, LOW);

    dur_F = pulseIn(F_Echo, HIGH);
    dis_F = dur_F*0.034/2;

    return dis_F;
}

int calc_dist_B() {
  digitalWrite(B_Trig, LOW);
  delayMicroseconds(2);

    digitalWrite(B_Trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(B_Trig, LOW);

    dur_B = pulseIn(B_Echo, HIGH);
    dis_B = dur_B*0.034/2;

    return dis_B;
}

int calc_dist_R() {
  digitalWrite(R_Trig, LOW);
  delayMicroseconds(2);

    digitalWrite(R_Trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(R_Trig, LOW);

    dur_R = pulseIn(R_Echo, HIGH);
    dis_R = dur_R*0.034/2;

    return dis_R;
}

int calc_dist_L() {
  digitalWrite(L_Trig, LOW);
  delayMicroseconds(2);

    digitalWrite(L_Trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(L_Trig, LOW);

    dur_L = pulseIn(L_Echo, HIGH);
    dis_L = dur_L*0.034/2;

    return dis_L;
}


const int trigPin = 11
const int echoPin = 10;
const int in1 = 9;
const int in2 = 8;
const int in3 = 4;
const int in4 = 3;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode (in1, OUTPUT); 
  PinMode (in2, OUPUT);
  pinMode (in3, OUTPUT);
  pinMode (in4, OUTPUT);

void loop()
{
  digitalWrite (trigPin, LOW);
  delayMicroseconds (?); 
  digital Write (trigPin, High);
  delatyMicroseconds (?);
  digitalWrite (trigPin, LOW);
  duration = pulseIn (echoPin, HIGH); 
  distance = duration/?;
  if(distance<30)
    
