#include <IRremote.h>

//Define our segments

#define IR_INPUT 12
#define SegG 8
#define SegF 7
#define SegA 6
#define SegB 5
#define SegE 4
#define SegD 3
#define SegC 2
#define SegDP 1

// Create Arrays with 8 elements to display 

int ArrZero[8] = {SegA, SegB, SegC, SegD, SegE, SegF, NULL, NULL};
int ArrOne[8] = {NULL, SegB, SegC, NULL, NULL, NULL, NULL, NULL};
int ArrTwo[8] = {SegA, SegB, NULL, SegD, SegE, NULL, SegG, NULL};
int ArrThree[8] = {SegA, SegB, SegC, SegD, NULL, NULL, SegG, NULL};
int ArrFour[8] = {NULL, SegB, SegC, NULL, NULL, SegF, SegG, NULL};
int ArrFive[8] = {SegA, NULL, SegC, SegD, NULL, SegF, SegG, NULL};
int ArrSix[8] = {SegA, NULL, SegC, SegD, SegE, SegF, SegG, NULL};
int ArrSeven[8] = {SegA, NULL, SegC, NULL, NULL, NULL, NULL, NULL};
int ArrEight[8] = {SegA, SegB, SegC, SegD, SegE, SegF, SegG, NULL};
int ArrNine[8] = {SegA, SegB, SegC, SegD, NULL, SegF, SegG, NULL};

//

IRrecv irrecv(IR_INPUT);

decode_results results;

void IRsensor();
void DisplayZero(int time);
void Display(int pins[8], int time);
void RunSegmentDisplay();
void DisplayOFF();

void setup() {
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
  pinMode(13,OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}


void loop(){
 IRsensor();
}

void IRsensor() {
   if (irrecv.decode(&results)) {
     Serial.println(results.value, DEC);
     RunSegmentDisplay();
     irrecv.resume(); // Receive thxt value
  }
  delay(100);
}

void DisplayOFF() {
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}

void Display(int pins[8], int time) {
  DisplayOFF();
  for(int i = 0; i <= 8; ++i) {
    digitalWrite(pins[i], HIGH);
  }
  delay(time);
  DisplayOFF();
}

void RunSegmentDisplay() {
  if (results.value == 16580863){
     digitalWrite(13,HIGH); 
  };
  if (results.value == 16593103) {
     Display(ArrZero, 1000);
  };
  if (results.value == 16582903) {
     Display(ArrOne, 1000);
  };
  if (results.value == 16615543) {
     Display(ArrTwo, 1000);
  };
  if (results.value == 16599223) {
     Display(ArrThree, 1000);
  };
}
