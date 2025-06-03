// C++ code
//
int pir = 2;
int bulb = 5;

void setup()
{
 pinMode(pir, INPUT);
  pinMode(bulb, OUTPUT);
}

void loop()
{
  if (digitalRead(pir) == HIGH){
    digitalWrite(bulb, HIGH);
    delay(200);
  } else{
    digitalWrite(bulb, LOW);
  }
}