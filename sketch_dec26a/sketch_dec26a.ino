#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Wire.h" // legacy include: `#include "SSD1306.h"
#include "picture.h"

#include <SPI.h>
#include <MFRC522.h>     // 引用程式庫
#define RST_PIN      A0        // 讀卡機的重置腳位
#define SS_PIN       10        // 晶片選擇腳位
 
MFRC522 mfrc522(SS_PIN, RST_PIN);  // 建立MFRC522物件

SSD1306Wire  display(0x3c, 21, 22);
void Angry(){
    for (int i=0; i<=3; i++) {
        display.clear();
        display.drawXbm(0,0, 128, 64, face[0]);
        display.display();
        delay(300);
        display.clear();
        display.drawXbm(0,0, 128, 64, face[1]);
        display.display();
        delay(300);
    }
}//生氣表情

void Blink(){
    display.clear();
    display.drawXbm(0,0, 128, 64, face[6]);
    display.display();
    delay(300);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[2]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[3]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[2]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[6]);
    display.display();
}//待機札眨眨眼（可能要試一下眨眼速度）

void Happy(){
    for (int i=0; i<=3; i++) {
        display.clear();
        display.drawXbm(0,0, 128, 64, face[4]);
        display.display();
        delay(300);
        display.clear();
        display.drawXbm(0,0, 128, 64, face[5]);
        display.display();
        delay(300);
    }
}//餵食後開心的表情＆撫摸後開心

void Unhappy(){
    display.clear();
    display.drawXbm(0,0, 128, 64, face[9]);
    display.display();
    delay(300);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[10]);
    display.display();
    delay(300);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[11]);
    display.display();
    delay(300);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[10]);
    display.display();
    delay(300);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[9]);
    display.display();
}//不開心（效果：不爽眼神從左到右來回1次）

void Normal(){
    display.clear();
    display.drawXbm(0,0, 128, 64, face[6]);
    display.display();
}//正常情況表情

void Standby(){
    display.clear();
    display.drawXbm(0,0, 128, 64, face[6]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[7]);
    display.display();
    delay(100);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[8]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[7]);
    display.display();
    delay(100);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[6]);
    display.display();
}//（效果：正常眼神從左到右來回1次）用途未知

void Hungry(){
    for (int i=0; i<=5; i++) {
        display.clear();
        display.drawXbm(0,0, 128, 64, face[12]);
        display.display();
        delay(300);
        display.clear();
        display.drawXbm(0,0, 128, 64, face[13]);
        display.display();
        delay(300);
    }
 }
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println();
  Serial.println();
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  
  Serial.println("RFID reader is ready!");
  SPI.begin();
  mfrc522.PCD_Init();   // 初始化MFRC522讀卡機模組
}

void loop() {
  // put your main code here, to run repeatedly:
 // display.clear();
  //Angry();
  //delay(500);
 // Blink();
//  delay(500);  
 // Happy();
 // delay(500);  
 // Unhappy();
 // delay(500);  
 // Normal();
 // delay(500);  
 // Standby();
 // delay(500); 
//  Hungry();
 // delay(500);
   
   if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
      byte *id = mfrc522.uid.uidByte;   // 取得卡片的UID
      byte idSize = mfrc522.uid.size;   // 取得UID的長度
 
      Serial.print("PICC type: ");      // 顯示卡片類型
      // 根據卡片回應的SAK值（mfrc522.uid.sak）判斷卡片類型
      MFRC522::PICC_Type piccType = mfrc522.PICC_GetType(mfrc522.uid.sak);
      Serial.println(mfrc522.PICC_GetTypeName(piccType));
 
      Serial.print("UID Size: ");       // 顯示卡片的UID長度值
      Serial.println(idSize);
 
      for (byte i = 0; i < idSize; i++) {  // 逐一顯示UID碼
        Serial.print("id[");
        Serial.print(i);
        Serial.print("]: ");
        Serial.println(id[i], HEX);       // 以16進位顯示UID值
      }
      Serial.println();
 
      mfrc522.PICC_HaltA();  // 讓卡片進入停止模式
    } 
}
