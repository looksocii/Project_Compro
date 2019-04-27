/*  Computer Programming Project
    Project : Coin Counting Machine
    Team : Space X
    Code Language : C
*/

#include <Wire.h>              //include library ของจอ LCD
#include <LiquidCrystal_I2C.h> //include library ของจอ LCD

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); //address ของจอ LCD

int total = 0, Count1 = 0, Count2 = 0, Count3 = 0; //ตัวแปรเอาไว้ใช้นับจำนวนเหรียญ

int CounterSensor_Pin1 = 8;  //สร้างตัวแปรชื่อ CounterSensor_Pin1, 2, 3 ชนิด int เพื่อเก็บตำแหน่งขอขาที่รับข้อมูลจาก Counter Sensor
int CounterSensor_Pin2 = 9;
int CounterSensor_Pin3 = 10;

void setup() {
  lcd.begin(20,4); // กำหนดขนาดจอ LCD มี 4 บรรทัด บรรทัดละ 20 ตัวอักษร
  
  lcd.setCursor(6,0);
  lcd.print("WELCOME");
  lcd.setCursor(0,1);
  lcd.print("CoinCountingMachine!");
  lcd.setCursor(5,2);
  lcd.print("LOADING...");
  lcd.setCursor(0,3);
  
  for(int i = 0; i < 20; i++) { //แสดงผลจอ LCD ให้เหมือนโหลดโปรแกรมก่อนเข้าหน้าจอนับเหรียญ
    lcd.print("#");
    delay(300);
  }
  
  lcd.clear();
  
  pinMode(CounterSensor_Pin1, INPUT);  //กำหนดโหมดของขาให้กับ CounterSensor_Pin1, 2, 3 ว่าเป็น INPUT
  pinMode(CounterSensor_Pin2, INPUT);
  pinMode(CounterSensor_Pin3, INPUT);

  delay(500);
  lcd.setCursor(0,0);
  lcd.print("Coin  1 Baht : ");
  lcd.print(Count1);
    
  lcd.setCursor(0,1);
  lcd.print("Coin  5 Baht : ");
  lcd.print(Count2);
    
  lcd.setCursor(0,2);
  lcd.print("Coin 10 Baht : ");
  lcd.print(Count3);
    
  lcd.setCursor(0,3);
  lcd.print("Total = ");
  lcd.print(total);
  lcd.print(" Baht");
}

void loop() {
  int sensor_Value1 = digitalRead(CounterSensor_Pin1);  //สร้างตัวแปรชื่อ sensor_Value1, 2, 3 ชนิด int ให้เก็บค่าดิจิตอลที่รับได้จาก CounterSensor_Pin1, 2, 3
  int sensor_Value2 = digitalRead(CounterSensor_Pin2);
  int sensor_Value3 = digitalRead(CounterSensor_Pin3);
  
  if (sensor_Value1 == HIGH) {  //ถ้าหหากค่าใน sensor_Va มีค่าเท่ากับ HIG
    Count3 ++;  //ให้เพิ่มค่าใน Count3 ขึ้น 1 ค่า หรือ Count3 = Count3 + 1
    total += 10; // ตัวแปร total บวกค่าเพิ่ม 10 ค่า หรือ total = taotal + 10
    delay(300);
    
    lcd.setCursor(0,0);
    lcd.print("Coin  1 Baht : ");
    lcd.print(Count1);
      
    lcd.setCursor(0,1);
    lcd.print("Coin  5 Baht : ");
    lcd.print(Count2);
      
    lcd.setCursor(0,2);
    lcd.print("Coin 10 Baht : ");
    lcd.print(Count3);
      
    lcd.setCursor(0,3);
    lcd.print("Total = ");
    lcd.print(total);
    lcd.print(" Baht");
  }
  
  if (sensor_Value2 == HIGH) {  //ถ้าหหากค่าใน sensor_Va มีค่าเท่ากับ HIG
    Count2 ++;  //ให้เพิ่มค่าใน Coun2 ขึ้น 1 ค่า หรือ Count2 = Count2 + 1
    total += 5; //ตัวแปร total บวกค่าเพิ่ม 5 ค่า หรือ total = taotal + 5
    delay(300);
    
    lcd.setCursor(0,0);
    lcd.print("Coin  1 Baht : ");
    lcd.print(Count1);
      
    lcd.setCursor(0,1);
    lcd.print("Coin  5 Baht : ");
    lcd.print(Count2);
      
    lcd.setCursor(0,2);
    lcd.print("Coin 10 Baht : ");
    lcd.print(Count3);
      
    lcd.setCursor(0,3);
    lcd.print("Total = ");
    lcd.print(total);
    lcd.print(" Baht");
  }

  if (sensor_Value3 == HIGH) {  //ถ้าหหากค่าใน sensor_Va มีค่าเท่ากับ HIG
    Count1 ++;  //ให้เพิ่มค่าใน Count1 ขึ้น 1 ค่า หรือ Count1 = Count1 + 1
    total += 1; //ตัวแปร total บวกค่าเพิ่ม 1 ค่า หรือ total = taotal + 1
    delay(300);
    
    lcd.setCursor(0,0);
    lcd.print("Coin  1 Baht : ");
    lcd.print(Count1);
      
    lcd.setCursor(0,1);
    lcd.print("Coin  5 Baht : ");
    lcd.print(Count2);
      
    lcd.setCursor(0,2);
    lcd.print("Coin 10 Baht : ");
    lcd.print(Count3);
      
    lcd.setCursor(0,3);
    lcd.print("Total = ");
    lcd.print(total);
    lcd.print(" Baht");
  }
}
