/*
* created by: Charlotte B
* Created on: March 2025
*RGB LED blinking
*/

int pin11 = 11;
int pin12 = 12;
int pin13 = 13;

void setup()
{
  pinMode(pin11, OUTPUT);
  pinMode(pin12, OUTPUT);
  pinMode(pin13, OUTPUT);
}

void loop()
{
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pin13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, LOW);
  digitalWrite(pin13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin11, LOW);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, LOW);
  digitalWrite(pin13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin11, HIGH);
  digitalWrite(pin12, HIGH);
  digitalWrite(pin13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}
