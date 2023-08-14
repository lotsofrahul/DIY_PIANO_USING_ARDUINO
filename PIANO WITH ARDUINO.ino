const int push1 = A0;
const int push2 = A1;
const int push3 = A2;
const int push4 = A3;
const int push5 = A4;
const int push6 = A5;
const int push7 = 10;
const int push8 = 11;
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int speaker = 12;
// int frequency[ ] = {262, 294, 330, 349, 392, 440, 493, 523}; //saregamapa1
// int frequency[ ] = {440, 466, 494, 523, 554, 587, 662, 659}; //jingle bell
int frequency[ ] = {240, 270, 300, 337.5, 360, 400, 450, 490}; //saregamapa2

void setup()
{
  Serial.begin(9600);
pinMode (push1, INPUT);
pinMode (push2, INPUT);
pinMode (push3, INPUT);
pinMode (push4, INPUT);
pinMode (push5, INPUT);
pinMode (push6, INPUT);
pinMode (push7, INPUT);
pinMode (push8, INPUT);
pinMode (speaker, OUTPUT);
pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);
pinMode (led6, OUTPUT);
pinMode (led7, OUTPUT);
pinMode (led8, OUTPUT);
tone (speaker, 2000);
}
void loop()
{
 
if (digitalRead(push1) == LOW)
{tone(speaker,frequency[0],50);
digitalWrite(led1,HIGH);
delay (50);
digitalWrite(led1,LOW);
noTone (speaker);}
  
else if (digitalRead(push2) == LOW)
{tone(speaker,frequency[1],50);
digitalWrite(led2,HIGH);
delay (50);
digitalWrite(led2,LOW);
noTone (speaker);}

else if (digitalRead(push3) == LOW)

{tone(speaker,frequency[2],50);

digitalWrite(led3,HIGH);
delay (50);
digitalWrite(led3,LOW);

noTone (speaker);}

else if (digitalRead(push4) == LOW)

{tone(speaker,frequency[3],50);
digitalWrite(led4,HIGH);
delay (50);
digitalWrite(led4,LOW);
noTone (speaker);}

else if (digitalRead(push5) == LOW)

{tone(speaker,frequency[4],50);

digitalWrite(led5,HIGH);
delay (50);
digitalWrite(led5,LOW);
noTone (speaker);}

else if (digitalRead(push6) == LOW)
{tone(speaker,frequency[5],50);
digitalWrite(led6,HIGH);
delay (50);
digitalWrite(led6,LOW);
noTone (speaker);}

else if (digitalRead(push7) == LOW)
{tone(speaker,frequency[6],50);
digitalWrite(led7,HIGH);
delay (50);
digitalWrite(led7,LOW);
noTone (speaker);}

else if (digitalRead(push8) == LOW)
{tone(speaker,frequency[7],50);
digitalWrite(led8,HIGH);
delay (50);
digitalWrite(led8,LOW);
noTone (speaker);}


else
noTone (speaker);
}
