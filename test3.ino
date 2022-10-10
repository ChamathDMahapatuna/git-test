int timer1 =100;
int timer2 =500;
int timer3 =600;
int timer4 =50;
int timer5= 100;
int timer6 =500;
int timer7 =300;
int timer8 =250;
int timer9 =200;
int timer10 =250;
int lol =2;
int lol1 =1;

void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}
void loop()
{
  if (Serial.available()) {
    int data = Serial.read() - '0';
    if (data == 1 ){
       for(int i=0; i<=lol; i++) {
       pat1();}
    }
    if (data == 2 ){
        p2();
    
    }
    if (data == 3 ){
        for(int i=0; i<=lol; i++) {
        p3();
        }
    
    }
    if (data == 4 ){
       for(int i=0; i<=lol; i++){ 
       p4();
       }
    }
    if (data == 5 ){
        p5();
    
    }
    if (data == 6 ){
      for(int i=0; i<=lol; i++) {
       p6();
       }
    
    }
    if (data == 7 ){
       p7();
    
    }
    if (data == 8 ){
       for(int i=0; i<=lol; i++) {
        p8();
        }
    
    }
     if (data == 10 ){
      for(int i=0; i<=lol; i++){ 
        p10();}
    
    }
    if (data == 9 ){
      for(int i=0; i<=lol1; i++){ 
       p9();
       }
    
    }
    
  }

}





void pat1(){
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(timer1);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(timer1);
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    delay(timer1);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    delay(timer1);
    digitalWrite(4,HIGH);
    digitalWrite(9,HIGH);
    delay(timer1);
    digitalWrite(4,LOW);
    digitalWrite(9,LOW);
    delay(timer1); 
    digitalWrite(3,HIGH);
    digitalWrite(10,HIGH);
    delay(timer1);
    digitalWrite(3,LOW);
    digitalWrite(10,LOW);
    delay(timer1);
    digitalWrite(2,HIGH);
    digitalWrite(11,HIGH);
    delay(timer1);
    digitalWrite(2,LOW);
    digitalWrite(11,LOW);
    delay(timer1);
    digitalWrite(3,HIGH);
    digitalWrite(10,HIGH);
    delay(timer1);
    digitalWrite(3,LOW);
    digitalWrite(10,LOW);
    delay(timer1);
    digitalWrite(4,HIGH);
    digitalWrite(9,HIGH);
    delay(timer1);
    digitalWrite(4,LOW);
    digitalWrite(9,LOW);
    delay(timer1);
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    delay(timer1);
    digitalWrite(5,LOW);
    digitalWrite(8,LOW);
    delay(timer1);     
  }
void p2(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  delay(timer2);


  
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(timer2);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  delay(timer2);

  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(timer2);

  }
 void p3(){
     
      for(int i=2; i<=12; i++) {
      digitalWrite(i,HIGH);
      delay(100);
    }
    
    for(int i=12; i>=1; i--) {
      digitalWrite(i,HIGH);
      delay(100);
      digitalWrite(i,LOW);
    }

  }
  void p4(){
   for(int i=2; i<=12; i++) {
      digitalWrite(i,HIGH);
      digitalWrite(i-1,HIGH);
      digitalWrite(i+1,HIGH);
      delay(100);
      digitalWrite(i,LOW);
      digitalWrite(i-1,LOW);
      digitalWrite(i+1,LOW);
    }

  }

  void p5(){

  delay(timer5);
  digitalWrite(1, HIGH);
  delay(timer5);
  digitalWrite(1, LOW);
  delay(timer5);
  digitalWrite(2, HIGH);
  delay(timer5);
  digitalWrite(2, LOW);
  delay(timer5);
  digitalWrite(3, HIGH);
  delay(timer5);
  digitalWrite(3, LOW);
  delay(timer5);
  digitalWrite(4, HIGH);
  delay(timer5);
  digitalWrite(4, LOW);
  delay(timer5);
  digitalWrite(5, HIGH);
  delay(timer5);
  digitalWrite(5, LOW);
  delay(timer5);
  digitalWrite(6, HIGH);
  delay(timer5);
  digitalWrite(6, LOW);
  delay(timer5);
  digitalWrite(7, HIGH);
  delay(timer5);
  digitalWrite(7, LOW);
  delay(timer5);
  digitalWrite(8, HIGH);
  delay(timer5);
  digitalWrite(8, LOW);
  delay(timer5);
  digitalWrite(9, HIGH);
  delay(timer5);
  digitalWrite(9, LOW);
  delay(timer5);
  digitalWrite(10, HIGH);
  delay(timer5);
  digitalWrite(10, LOW);
  delay(timer5);
  digitalWrite(11, HIGH);
  delay(timer5);
  digitalWrite(11, LOW);
  delay(timer5);
  

  }
  void p6(){
   for(int i=2; i<=8; i++) {
      digitalWrite(i,HIGH);
      }
    for(int i=8; i<=12; i++) {
      digitalWrite(i,LOW);
      }
    delay(200);
    for(int i=2; i<=8; i++) {
      digitalWrite(i,LOW);
      }
    for(int i=8; i<=12; i++) {
      digitalWrite(i,HIGH);
      }
    delay(200);
  
  }
  void p7(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(timer7);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(timer7);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(timer7);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  delay(timer7);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(timer7);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(timer7);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  delay(timer7);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  delay(timer7);
  }
  void p8(){
   for(int i=1; i<=9; i++) {
      digitalWrite(i,HIGH);
    }
     for(int i=1; i<=9; i++) {
      digitalWrite(i,LOW);
      delay(100);
      digitalWrite(i,HIGH);
    }
    for(int i=11; i>=1; i--) {
      digitalWrite(i,LOW);
      delay(100);
      digitalWrite(i,HIGH);
    }
  }
  
  void p9(){
    for(int i=1; i<=12; i++) {
      digitalWrite(i,HIGH);
      }
    delay(100);
    for(int i=1; i<=12; i++) {
      digitalWrite(i,LOW);
      }
    delay(100);  

  }
  void p10(){
     for(int i=2; i<=12; i++) {
      digitalWrite(i,HIGH);
      }
    delay(100);
    for(int i=2; i<=12; i++) {
      digitalWrite(i,LOW);
      }
    delay(100);  
  }
  
