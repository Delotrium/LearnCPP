#define SegG 10
#define SegF 9
#define SegA 8
#define SegB 7
#define SegE 6
#define SegD 5
#define SegC 4
#define SegDP 3

void setup()
{
  pinMode(SegG,OUTPUT);
  pinMode(SegF, OUTPUT);
  pinMode(SegA, OUTPUT);
  pinMode(SegB, OUTPUT);
  pinMode(SegC, OUTPUT);
  pinMode(SegD, OUTPUT);
  pinMode(SegE, OUTPUT);
  pinMode(SegDP, OUTPUT);
}

void loop()
{
  WriteZero();
  WriteOne();
  WriteTwo();
  WriteThree();
  WriteFour();
  WriteFive();
  WriteSix();
  WriteSeven();
  WriteEight();
  WriteNine();
}

void WriteZero()
{
  digitalWrite(SegF, HIGH);
  digitalWrite(SegA, HIGH);
  digitalWrite(SegB, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegD, HIGH);
  digitalWrite(SegE, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteOne()
{
  digitalWrite(SegC, HIGH);
  digitalWrite(SegB, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteTwo()
{
  digitalWrite(SegA, HIGH);
  digitalWrite(SegB, HIGH);
  digitalWrite(SegG, HIGH);
  digitalWrite(SegE, HIGH);
  digitalWrite(SegD, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteThree()
{
  digitalWrite(SegA, HIGH);
  digitalWrite(SegB, HIGH);
  digitalWrite(SegG, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegD, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteFour()
{
  digitalWrite(SegB, HIGH);
  digitalWrite(SegG, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegF, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteFive()
{
  digitalWrite(SegA, HIGH);
  digitalWrite(SegF, HIGH);
  digitalWrite(SegG, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegD, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteSix()
{
  digitalWrite(SegF, HIGH);
  digitalWrite(SegA, HIGH);
  digitalWrite(SegG, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegD, HIGH);
  digitalWrite(SegE, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteSeven()
{
  digitalWrite(SegA, HIGH);
  digitalWrite(SegB, HIGH);
  digitalWrite(SegC, HIGH);
  delay(1000);
  ClearDisplay(); 
}

void WriteEight()
{
  digitalWrite(SegF, HIGH);
  digitalWrite(SegA, HIGH);
  digitalWrite(SegB, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegD, HIGH);
  digitalWrite(SegE, HIGH);
  digitalWrite(SegG, HIGH);
  delay(1000);
  ClearDisplay();
}

void WriteNine()
{
  digitalWrite(SegF, HIGH);
  digitalWrite(SegA, HIGH);
  digitalWrite(SegB, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegD, HIGH);
  digitalWrite(SegG, HIGH);
  delay(1000);
  ClearDisplay();
}


void ClearDisplay()
{
  digitalWrite(SegG, LOW);
  digitalWrite(SegF, LOW);
  digitalWrite(SegA, LOW);
  digitalWrite(SegB, LOW);
  digitalWrite(SegC, LOW);
  digitalWrite(SegD, LOW);
  digitalWrite(SegE, LOW);
  digitalWrite(SegDP, LOW);
}
