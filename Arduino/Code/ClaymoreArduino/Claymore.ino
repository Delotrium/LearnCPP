

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int i = 9;
String nums[] = {"1","2","3","4","5","6","7","8","9"};

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  Serial.write("Initialised");
  pinMode(13, OUTPUT);
}

void loop() {
  while (i > 0) {
    lcd.setCursor(0, 0);
  	lcd.print(nums[i-1]);
	Serial.write(i);
    delay(1000);
    i--;
  }
  if (i == 0) {
    lcd.setCursor(0, 0);
  	lcd.print("BOOM!");
    PinStrobe(13);
  }
}

void PinStrobe(int pin)
{
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100); 
  digitalWrite(pin, HIGH);
  delay(100); 
  digitalWrite(pin, LOW);
  delay(500); 
}
