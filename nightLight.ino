int lightPin = A5;
int lightVal;
int dt = 250;
int LEDpin = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPin, INPUT);
pinMode(LEDpin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(dt);

if(lightVal <= 300){
  digitalWrite(LEDpin, HIGH);
}
else{ 
digitalWrite(LEDpin, LOW);
}
}
