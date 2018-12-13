

int Rayon = 123;
char charVal[20];
char octetReception;
char caractereReception;
char octetReceptionProc;
char caractereReceptionProc;
String chaineReception, Tram;
String chaineReceptionProc, TramProc;

#define ETX     03

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);

}

void loop() {
  //Serial.print("Poids pont sud ");
  Lecture();
  delay(5000);

}

void Lecture() {

  Tram = "Poids pont sud ";

  dtostrf( Rayon, 3, 0, charVal);
  Tram = Tram  +  charVal;
  Tram = Tram + char(03);;

  Serial.print(Tram);
}
