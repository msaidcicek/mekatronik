int seviye1=A0;
int seviye2=A1;
int kirmizi=9;
int yesil=8;
int role = 3;

void setup(){
pinMode(kirmizi,OUTPUT);
pinMode(yesil,OUTPUT);
pinMode(role, OUTPUT);
Serial.begin(9600);
Serial.begin(9600);}

void loop() 
{
seviye1=analogRead(A0);
Serial.println(seviye1);
seviye2=analogRead(A1);
Serial.println(seviye2);

if(seviye1 > 0 && seviye2 == 0){
digitalWrite(yesil,HIGH);
digitalWrite(role, HIGH);
digitalWrite(kirmizi,LOW);}

delay(100); 

if (seviye1==0 || seviye2 >= 1){ 
digitalWrite(role, LOW);
digitalWrite(kirmizi,HIGH);
digitalWrite(yesil,LOW);}



delay(100); 
}
