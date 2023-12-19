// C++ code
//
void setup()
{
  //güç çıkışlarıdır kendi kartınızda nereleri yaptıysanız ona göre yapın
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() 
{

  //renk geçişi
  //ister digitalWrite(5,1); yaparsınız uzun olmasını isterseniz Low = kapalı High = Açık demektir.
  digitalWrite(5,1);
  delay(300);
  digitalWrite(6,1);
  delay(300);
  digitalWrite(7,1);
  delay(300);
  digitalWrite(8,1);
  delay(300);
  digitalWrite(9,1);
  delay(3000);


//kapanma noktası
  digitalWrite(5,0);
     delay(500);
    digitalWrite(6,0);
         delay(500);
  digitalWrite(7,0);
     delay(500);
       digitalWrite(8,0);
     delay(500);
       digitalWrite(9,0);
     delay(500);
  //Delaylar bekleme süresidir örn: delay(500) = 0.5 salise demektir.
}
