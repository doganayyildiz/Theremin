#define echo 9
#define trig 8
#define buzzer 10

long sure,mesafe;

//oktav4
int Do = 262;
int Dodiyez = 277;
int Re = 294;
int Rediyez = 311;
int Mi = 330;
int Fa = 349;
int Fadiyez = 370;
int Sol = 392;
int Soldiyez = 415;
int La = 440;
int Ladiyez = 466;
int Si = 494;
int Do_ = 523;

void setup() {
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
pinMode(buzzer,OUTPUT);

Serial.begin(9600);
}

void loop() {
olcum();

if(mesafe >=0 && mesafe <=5){
  tone(buzzer,Do);
  Serial.println("Do");
}
else if(mesafe >=6 && mesafe <=10){
  tone(buzzer,Re);
  Serial.println("Re");
}
else if(mesafe >=11 && mesafe <=15){
  tone(buzzer,Mi);
  Serial.println("Mi");
}
else if(mesafe >=16 && mesafe <=20){
  tone(buzzer,Fa);
  Serial.println("Fa");
}
else if(mesafe >=21 && mesafe <=25){
  tone(buzzer,Sol);
  Serial.println("Sol");
}
else if(mesafe >=26 && mesafe <=30){
  tone(buzzer,La);
  Serial.println("La");
}
else if(mesafe >=31 && mesafe <=35){
  tone(buzzer,Si);
  Serial.println("Si");
}
else if(mesafe >=36 && mesafe <=40){
  tone(buzzer,Do_);
  Serial.println("Do");
}
else{
  noTone(buzzer);
}
delay(50);
}









void olcum(){
  digitalWrite(trig, LOW);
  delayMicroseconds(3);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  sure = pulseIn(echo, HIGH);
  mesafe = (sure/2) * 0.0343;
  delay(100);
  return mesafe;
}
