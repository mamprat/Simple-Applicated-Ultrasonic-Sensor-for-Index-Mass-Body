const int trig = 4;
const int echo = 3;

long durasi;
int jarak;

void setup () {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  durasi = pulseIn(echo, HIGH);
  jarak = durasi * 0.034 / 2;
  Serial.print("jarak = ");
  Serial.print(jarak);
  Serial.println(" cm ");
  delay(200);
}
