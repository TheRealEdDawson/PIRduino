// Modified from the Adafruit tutorial located here: 
// http://learn.adafruit.com/arduino-lesson-17-email-sending-movement-detector/overview

int pirPin = 7;

int minSecsBetweenEmails = 60; //1 min

long lastSend = -minSecsBetweenEmails * 100l;

void setup()
{ 
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  long now = millis();
  if (digitalRead(pirPin) == HIGH)
  {
    if (now > (lastSend + minSecsBetweenEmails * 10001))
    {
      Serial.println("MOVEMENT");
      lastSend = now;
    }
    else
    {
      Serial.println("Too soon");
    }
  }
  delay(500);
} 