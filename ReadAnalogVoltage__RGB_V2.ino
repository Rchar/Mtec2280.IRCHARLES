
char BLUE = 9;
char GREEN = 10;
char RED = 11;
int sensorValue = 0;
char spkr = 7;
int sensorPin = 0;
int lP1 = 2;
int lP2 = 3; 
int lP3 = 4; 
int lP4 = 5;  

void setup() {
  Serial.begin(9600);

  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);

  pinMode(lP1, OUTPUT);
  pinMode(lP2, OUTPUT);
  pinMode(lP3, OUTPUT);
  pinMode(lP4, OUTPUT);
  
}

void loop() {
//photocell rgb light code
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if ((sensorValue > 810)&&(sensorValue <= 860)) {
    Serial.println("far - RED");
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(RED, HIGH);
    tone(spkr, 392.00);
    }
    else if ((sensorValue > 749)&&(sensorValue <= 800)) {
      Serial.println("med near - GREEN");
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);
    digitalWrite(RED, LOW);
    tone(spkr,500.00);
    }
     else if ((sensorValue > 680)&&(sensorValue <= 748)) {
      Serial.println("near - BLUE");
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, HIGH);
    digitalWrite(RED, LOW);
    tone(spkr,329.63);
    }
     else if ((sensorValue <= 649)) {
      Serial.println("close - WHITE");
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, HIGH);
    digitalWrite(RED, HIGH);
    tone(spkr,207.65 );
    }
     else {
      Serial.println("ALL OFF");
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(RED, LOW);
    noTone(spkr);
    }
//knob and light code
    int sensorPin = analogRead(A1);
  Serial.println(sensorPin);
 if ((sensorPin <= 254) &&(sensorPin > 20)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,LOW);
  digitalWrite(lP3,LOW);
  digitalWrite(lP4,LOW);
}

 else if ((sensorPin <= 511) &&(sensorPin > 255)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,HIGH);
  digitalWrite(lP3,LOW);
  digitalWrite(lP4,LOW);
}

 else if ((sensorPin <=800 ) &&(sensorPin > 512)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,HIGH);
  digitalWrite(lP3,HIGH);
  digitalWrite(lP4,LOW);
}

 else if ((sensorPin <=1023 ) &&(sensorPin > 801)) {
  digitalWrite(lP1,HIGH);
  digitalWrite(lP2,HIGH);
  digitalWrite(lP3,HIGH);
  digitalWrite(lP4,HIGH);

}

else {
  digitalWrite(lP1,LOW);
  digitalWrite(lP2,LOW);
  digitalWrite(lP3,LOW);
  digitalWrite(lP4,LOW);

  }
}

