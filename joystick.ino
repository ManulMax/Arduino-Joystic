#define joyx A2
#define joyy A1
#define joys A0
int ledy=5;
int ledb=4;
int ledw=3;
int ledr=2;

void setup() {
Serial.begin(9600);
pinMode(ledy , OUTPUT);
pinMode(ledb , OUTPUT);
pinMode(ledw , OUTPUT);
pinMode(ledr , OUTPUT);
}

void loop() {
int svalue=analogRead(joys);  
int xvalue=analogRead(joyx);
int yvalue=analogRead(joyy);
Serial.print(xvalue);
Serial.print("\n");
Serial.print(yvalue);
Serial.print("\n");
Serial.print(svalue);
Serial.print("\n");
  
  if(xvalue==0 && yvalue>500)
  {digitalWrite(ledy, HIGH); digitalWrite(ledb,LOW); digitalWrite(ledw,LOW); digitalWrite(ledr,LOW);}
 else if(xvalue>500 && yvalue==0){digitalWrite(ledr,HIGH); digitalWrite(ledw, LOW); digitalWrite(ledb, LOW); digitalWrite(ledy, LOW);}
 else if(xvalue>500 && yvalue>1000){digitalWrite(ledb,HIGH); digitalWrite(ledw, LOW); digitalWrite(ledr, LOW); digitalWrite(ledy, LOW);}
 else if(xvalue>1000 && yvalue>500){digitalWrite(ledw,HIGH); digitalWrite(ledy, LOW); digitalWrite(ledr, LOW); digitalWrite(ledb, LOW);}
 else{digitalWrite(ledy, LOW); digitalWrite(ledb, LOW); digitalWrite(ledw, LOW); digitalWrite(ledr, LOW);}

 //if(svalue==0){digitalWrite(ledb, HIGH); digitalWrite(ledw, HIGH); digitalWrite(ledr, HIGH); digitalWrite(ledy, HIGH);}
  //else{digitalWrite(ledy, LOW); digitalWrite(ledb, LOW); digitalWrite(ledw, LOW); digitalWrite(ledr, LOW);}
delay(500);
}
