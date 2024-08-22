// C++ code


int redPin1 = 2;
int redPin2 = 3;
int yellowPin1 = 4;
int yellowPin2 = 5;
int greenPin1 = 6;
int greenPin2 = 7;

void setup()
{
  pinMode(redPin1, OUTPUT);
  pinMode(redPin2, OUTPUT);
  pinMode(yellowPin1, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(greenPin1, OUTPUT);
  pinMode(greenPin2, OUTPUT);
}

void loop()
{
  digitalWrite(redPin1, HIGH);
  delay(500);
  digitalWrite(redPin2, LOW);
  digitalWrite(greenPin2, HIGH);
  delay(7000);
  digitalWrite(yellowPin2, HIGH);
  digitalWrite(greenPin2, LOW);
  delay(750);
  digitalWrite(yellowPin2, LOW);
  
  digitalWrite(redPin2, HIGH);
  delay(500);
  digitalWrite(redPin1, LOW);
  digitalWrite(greenPin1, HIGH);
  delay(7000);
  digitalWrite(yellowPin1, HIGH);
  digitalWrite(greenPin1, LOW);
  delay(750);
  digitalWrite(yellowPin1, LOW);
  
}