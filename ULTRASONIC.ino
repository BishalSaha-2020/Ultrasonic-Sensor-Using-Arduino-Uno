int t=10;
int e=11;
int l=13;


long duration;
int distance;
int safetyDistance;
void setup() {
  // put your setup code here, to run once:
 
  pinMode(l,OUTPUT);
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
   Serial.begin(9600);
}

void loop() {

  digitalWrite(t,LOW);
  delayMicroseconds(2);
 digitalWrite(t,HIGH);
 delayMicroseconds(10);
 digitalWrite(t,LOW);


 duration=pulseIn(e,HIGH);
 distance=duration*0.034/2;
 Serial.println(distance);

 safetyDistance=distance;
 if(safetyDistance<=30){
  digitalWrite(l,HIGH);
  }
  else{
    digitalWrite(l,LOW);
    }
 
 
  
}
