int sensorPin = A0;    
int ledPin = 8;      
int sensorValue = 0; 

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
   
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.println(voltage);
  if(voltage>1){
    digitalWrite(ledPin, HIGH);
    delay(1000);
    }
    else{
      digitalWrite(ledPin, LOW);
      delay(1000);
      }
}
