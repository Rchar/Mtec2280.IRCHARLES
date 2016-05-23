int ledPin = 8;
int ledPin2 = 9;
int switchPin= 2;
int switchPin2= 3;
int buttonRead = 0;
int buttonRead2 = 0;


void setup() {
  pinMode(switchPin,INPUT);
  pinMode(ledPin,OUTPUT);
  pinMode(switchPin2,INPUT);
  pinMode(ledPin2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //digitalWrite(ledPin,HIGH);

    buttonRead = digitalRead(switchPin);
  Serial.println(buttonRead);
  
  if(buttonRead == 1){
    digitalWrite(ledPin,HIGH);
  }
  if (buttonRead == 0) {
    digitalWrite(ledPin,LOW);
    
  }
  
  buttonRead2 = digitalRead(switchPin2);
  Serial.println(buttonRead2);
  
  if(buttonRead == 1){
    digitalWrite(ledPin2,HIGH);
  }
  if (buttonRead == 0) {
    digitalWrite(ledPin2,LOW);
    
  }
  
}
