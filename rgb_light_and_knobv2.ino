
int sensorPin = 0;
int lP1 = 2;
int lP2 = 3; 
int lP3 = 4; 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(lP1, OUTPUT);
pinMode(lP2, OUTPUT);
pinMode(lP3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

 int sensorPin = analogRead(A1);
  Serial.println(sensorPin);
 if ((sensorPin <= 254) &&(sensorPin > 10)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,LOW);
  digitalWrite(lP3,LOW);
  
}

 else if ((sensorPin <= 511) &&(sensorPin > 255)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,HIGH);
  digitalWrite(lP3,LOW);
 
}

 else if ((sensorPin <=800 ) &&(sensorPin > 512)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,HIGH);
  digitalWrite(lP3,HIGH);
  
}

 else if ((sensorPin <=1023 ) &&(sensorPin > 801)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,HIGH);
  digitalWrite(lP3,HIGH);
 

}

else {
  digitalWrite(lP1,LOW);
  digitalWrite(lP2,LOW);
  digitalWrite(lP3,LOW);
  

  }
}

