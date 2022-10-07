// C++ code
//
bool btnState = false;
int ledPinArrays[5] = {4,5,6,7,8};
int sensorPin = A0;
int buzzerPin = 3;

const int buzzer = 3; 

void setup()
{
 pinMode(buzzerPin, OUTPUT);
   for (int i = 0; i < 5; i++) {
    pinMode(ledPinArrays[i], OUTPUT);
  }
}

void loop()
{
   int humedad = analogRead(sensorPin);
  
  if(humedad = 1023){
   
    for (int i = 0; i < 5; i++) {
    digitalWrite(ledPinArray[i], HIGH);
    }else{
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPinArray[i], LOW);
  }}
    if(humedad < 204){
       tone(buzzer, 1000);
    delay(1000);
    noTone(buzzer);   
  delay(1000);  
    }
    delay(1000);
 
}
