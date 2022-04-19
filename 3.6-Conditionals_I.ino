int analogPin =A0;
int val=0;
int led=LED_BUILTIN;

void setup()
{
  Serial.begin(9600);
  pinMode(analogPin,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{val = analogRead(analogPin);
  Serial.println(val);
  delay(50);
  if (val<512 ){
     digitalWrite(led, HIGH);
  }
    else {
      digitalWrite(led, LOW);
    }
}
