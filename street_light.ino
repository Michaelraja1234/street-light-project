static int ldr=A0;
static int led=7;
int light_intensity=0;
int threshold=100;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  light_intensity=analogRead(ldr);
  Serial.print("ldr value: ");
  Serial.println(light_intensity);

  if(light_intensity>=threshold)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }
}




