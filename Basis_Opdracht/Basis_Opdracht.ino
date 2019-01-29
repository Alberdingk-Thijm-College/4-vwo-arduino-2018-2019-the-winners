void setup() {
  pinMode(13,OUTPUT);   //stoplicht1 groen
  pinMode(12,OUTPUT);   //stoplicht1 rood
  pinMode(11,OUTPUT);   //stoplicht2 groen
  pinMode(10,OUTPUT);    //stoplicht2 rood
  pinMode(9, OUTPUT);   //stoplicht3 groen
  pinMode(8, OUTPUT);   //stoplicht3 rood
  pinMode(7, OUTPUT);   //stoplicht4 groen
  pinMode(6, OUTPUT);   //stoplicht4 rood
  
}
void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH); // STOPLICHT 1 GROEN REST ROOD
  
  delay(2000);

  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH); // STOPLICHT 2 GROEN REST ROOD

  delay(2000);

   digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH); // STOPLICHT 3 GROEN REST ROOD

  delay(2000);

   digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW); // STOPLICHT 4 GROEN REST ROOD

  delay(2000);
 
}
