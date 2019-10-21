int button = 7;
int status = false;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  }
void loop()
{
int d=analogRead(A0);
Serial.println(d);
if(d>600)
{
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
  digitalWrite(12,HIGH);
   delay(100);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(11,HIGH);
   delay(100);
  digitalWrite(11,LOW);
  delay(100);
  digitalWrite(10,HIGH);
   delay(100);
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(9,HIGH);
   delay(100);
  digitalWrite(9,LOW);
  delay(100);
  digitalWrite(8,HIGH);
   delay(100);
  digitalWrite(8,LOW);
  }
  else
  {
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  }
  delay(100);
  }
