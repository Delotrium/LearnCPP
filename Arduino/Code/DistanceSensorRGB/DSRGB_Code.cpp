/*
For board setup and code explanation check the discription folder in the repo folder. The following code has been tested on a Arduino UNO.
*/

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
#define RedLED 13 //Attach Red LED to pin 13
#define BlueLED 12 //Attach Blue LED to pin 12
#define GreenLED 11 //Attach Green LED to pin 11

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement
void Sensor(); //Declare Sensor function
void LEDReset(int pinLed, int pinLed2); //Declare LEDReset function

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(RedLED,OUTPUT); // Set the LEDs as outputs
  pinMode(BlueLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
}

void loop() {
  Sensor(); //Loop the Sensor function
}

void Sensor() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); //Send a ultrasonic pulse out
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); //Recieve duration of pulse
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)

  if (distance > 25 && distance < 100) {
  	digitalWrite(GreenLED, HIGH);
    LEDReset(13, 12);
  }
  if (distance > 99 && distance < 200) {
    digitalWrite(BlueLED, HIGH);
    LEDReset(13, 11);
  }
  if (distance > 199 && distance < 300) {
   	digitalWrite(RedLED, HIGH);
    LEDReset(12, 11);
  }
  if (distance > 299) {
    digitalWrite(RedLED, HIGH);
    digitalWrite(BlueLED, HIGH);
    digitalWrite(GreenLED, HIGH);
  }
}

void LEDReset(int pinLed, int pinLed2) {
  digitalWrite(pinLed, LOW);
  digitalWrite(pinLed2, LOW);
}
