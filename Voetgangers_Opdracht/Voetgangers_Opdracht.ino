void setup(){
  void setup() {
  pinMode(13,OUTPUT);   //stoplicht1 groen boven
  pinMode(12,OUTPUT);   //stoplicht1 rood onder 
  pinMode(11,OUTPUT);   //stoplicht2 groen boven
  pinMode(10,OUTPUT);   //stoplicht2 rood onder
  pinMode(9, OUTPUT);   //stoplicht3 groen boven
  pinMode(8, OUTPUT);   //stoplicht3 rood onder
  pinMode(7, OUTPUT);   //stoplicht4 groen boven
  pinMode(6, OUTPUT);   //stoplicht4 rood onder
  pinMode(5, OUTPUT);   // voetgangers1 groen links
  pinMode(4, OUTPUT);   // voetgangers1 rood rechts
  pinMode(knopPin, INPUT);     //knop
}
void loop(){
  toestandKnop= digitalRead(knopPin);
  if (toestandKnop == HIGH) {  // knop ingedrukt
  digitalWrite(13, LOW);
  digitalWrite(12,HIGH);   //ST1.ROOD AAN
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);  //ST2.ROOD AAN
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);   //ST3.ROOD AAN
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);   //ST4.ROOD AAN
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);    //VT.GROEN AAN
    delay (5000);

}
else {  
  digitalWrite(13, HIGH);
  digitalWrite(12,LOW); //ST.1 GROEN AAN
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH); //ST.2 ROOD AAN
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH); //ST.3 ROOD AAN
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH); //ST.4 ROOD AAN
  digitalWrite(5,LOW); 
  digitalWrite(4,HIGH); //VT. ROOD AAN

    delay (2000);

  digitalWrite(13, LOW);
  digitalWrite(12,HIGH); //ST.1 ROOD AAN
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW); //ST.2 GROEN AAN
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH); //ST.3 ROOD AAN
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH); //ST.4 ROOD AAN
  digitalWrite(5,LOW); 
  digitalWrite(4,HIGH); //VT. ROOD AAN

    delay (2000);

  digitalWrite(13, LOW);
  digitalWrite(12,HIGH); //ST.1 ROOD AAN
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH); //ST.2 ROOD AAN
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW); //ST.3 GROEN AAN
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH); //ST.4 ROOD AAN
  digitalWrite(5,LOW); 
  digitalWrite(4,HIGH); //VT. ROOD AAN

    delay (2000);

  digitalWrite(13, LOW);
  digitalWrite(12,HIGH); //ST.1 ROOD AAN
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH); //ST.2 ROOD AAN
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH); //ST.3 ROOD AAN
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW); //ST.4 GROEN AAN
  digitalWrite(5,LOW); 
  digitalWrite(4,HIGH); //VT. ROOD AAN

    delay (2000);
}}
