// Modified from the Adafruit tutorial located here: 
// http://learn.adafruit.com/arduino-lesson-17-email-sending-movement-detector/overview

int pirPin = 7;
int led = 13;
int externalLed = 10;

void setup()
{ 
  pinMode(pirPin, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);   // turn the LED on 
  pinMode(externalLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  long now = millis();
  if (digitalRead(pirPin) == HIGH)
  {
    Serial.println("MOVEMENT");
    digitalWrite(externalLed, HIGH);   // turn the LED on 
    delay(60000);
    Serial.println("COUNTDOWN COMPLETE, SWITCHING OFF LED");
    digitalWrite(externalLed, LOW);    // turn the LED off
  }
} 
