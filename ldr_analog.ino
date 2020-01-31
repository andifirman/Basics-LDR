/*
  Andi Firmansyah
  Unikom CodeLabs 
*/

int ldr = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
}

void loop() {
  int val = analogRead(ldr);
  float hasil = 5.0 * val/1024;

  Serial.print("Kecerahan yang masuk : ");
  Serial.println(hasil);    
  delay(1000);
}
