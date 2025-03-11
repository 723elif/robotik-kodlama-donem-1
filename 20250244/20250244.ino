  int r=6;
  int b=5;
  int g=3;


void setup() {
 
    pinMode(r, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(g, OUTPUT);


}

void loop()
{
 analogWrite(r,random(0,200));
 analogWrite(b,random(0,200));
 analogWrite(g,random(0,150));
 delay(500);

}
