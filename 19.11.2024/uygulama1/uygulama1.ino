// C++ code
//
// GLOBAL (HERYERDE GEÇERLİ) DEĞİŞKEN
int kirmizi=2;
int beyaz=3;
void setup()// AYAR BÖLÜMÜ SADECE 1 KEZ ÇALIŞIR
{
  pinMode (kirmizi, OUTPUT);// 2 NUMARALI UÇ ÇIKIŞI
  pinMode (beyaz, OUTPUT);// 3 NUMARALI UÇ ÇIKIŞI
}

void loop()// SONSUZ DÖNGÜ
{
  digitalWrite (kirmizi, 1);
  digitalWrite (beyaz, 0);
  delay(2000); 
  digitalWrite (kirmizi, 0);
  digitalWrite (beyaz, 1);
  delay(1000); 
}
