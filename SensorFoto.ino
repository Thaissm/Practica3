void setup() {
  Serial.begin(9600);
  pinMode (A0,INPUT);
  pinMode (13,OUTPUT);

}

void loop() {
  float v, rl, il;
  delay (1000);
  v = analogRead (A0);
  v = v*(5.0/1023.0);
  rl = 613.49*((5/v)-1);
  il = pow((rl/126951),-1.1655);
  Serial.println();
  Serial.print("Resistencia LDR: ");
  Serial.print(rl);
  Serial.println(" ohms");
  Serial.print("Intensidad Luminosa: ");
  Serial.print(il);
  Serial.print(" LUX ");
  

  if(il<=2000)
  {
    digitalWrite(13,HIGH);
  }else
  {
    digitalWrite(13,LOW);
  }

}
