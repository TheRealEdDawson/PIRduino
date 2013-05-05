// Modified from the Adafruit tutorial located here: 
// http://learn.adafruit.com/arduino-lesson-17-email-sending-movement-detector/overview

int pirPin = 7;
int led = 13;
int externalLed = 10;

void setup()
{ 
  pinMode(pirPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(externalLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  long now = millis();
  if (digitalRead(pirPin) == HIGH)
  {
    Serial.println("MOVEMENT");
    digitalWrite(led, HIGH);   // turn the LED on 
    digitalWrite(externalLed, HIGH);   // turn the LED on 
    delay(30000);
    digitalWrite(led, LOW);    // turn the LED off 
    digitalWrite(externalLed, LOW);    // turn the LED off
  }
} 