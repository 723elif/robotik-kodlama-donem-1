string =girilen""
int kirmizi=4
int sari=3
void setup(){
    Serial.begin(9600);
    pinMode(sari, OUTPUT);
    pinMode(kirmizi, OUTPUT);
    Serial.print("sari icin s kirmizi icin k ye bas = "); // EKRANA YAZ
}

void loop()
 {
   if (Serial.available()) // SERİ ADRESE GİRİŞ YAPILDI MI?
        girilen=Serial.readString(); // SERİ EKRANDAN BİLGİ OKU
        Serial.print("sari icin s kirmizi icin k ye bas = "); // EKRANA YAZ
        Serial.println(girilen); // EKRANA YAZ
        if (girilen =="s") // S YE BASILDI MI?
        Serial.println("SARI YANDI"); // EKRANA YAZ
        digitalWrite(sari,1); // 3 NUMARALI LEDİ YAK
        delay(3000); // 3 SN BEKLE
        digitalWrite(sari,0); // 3 NUMARALI LEDİ SÖNDÜR
}
   if (girilen =="k") // K YE BASILDI MI? 
   Serial.println("KIRMIZI YANDI"); // EKRANA YAZ
        digitalWrite(kirmizi,1); // 4 NUMARALI LEDİ YAK
        delay(3000); // 3 SN BEKLE
        digitalWrite(kirmizi,0); // 3 NUMARALI LEDİ SÖNDÜR