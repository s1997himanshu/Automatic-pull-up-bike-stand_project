int M11=12,M12=13,S1=5;
int a=0;
void setup()
{
  // put your setup code here, to run once:
pinMode(M11,OUTPUT);
pinMode(M12,OUTPUT);
pinMode(S1,INPUT);
digitalWrite(M11,LOW);
digitalWrite(M12,LOW);
delay(1000);
// put your main code here, to run repeatedly:
  a=digitalRead(S1);
  delay(20000);
  if(a==LOW);
  {

digitalWrite(M11,LOW);
digitalWrite(M12,HIGH);
//digitalWrite(M21,LOW);
//digitalWrite(M22,LOW);
delay(50);

  } 
  if(a==LOW);
 {
  digitalWrite(M11,LOW);
  digitalWrite(M12,LOW);
  delay(20000);
 
 if(a==HIGH);

digitalWrite(M11,HIGH);
digitalWrite(M12,LOW);
delay(50);
if(a==HIGH);

digitalWrite(M11,LOW);
digitalWrite(M12,LOW);
}
}

 

void loop() {
}

