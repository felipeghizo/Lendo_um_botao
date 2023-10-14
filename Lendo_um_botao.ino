// C++ code
//
int EstadoBotao = 0;

void setup()
{
  pinMode(12, INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  EstadoBotao = digitalRead(12);
  Serial.println(EstadoBotao);
  if (EstadoBotao == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
