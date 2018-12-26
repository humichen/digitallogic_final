//face矩陣名：0.angry1  1.angry2  2.blink2  3.blink3  4.happy1  5.happy2  6.normal1  7.normal2  8.normal3  9.unhappy1   10.unhappy2  11.unhappy3  12.hungry1  13.hungry2
//函式名稱：Angry()  Blink()  Happy()  Unhappy()  Normal()  Standby()
#include"picture.h"
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

/*while(1) {
    display.clear();
    display.drawXbm(0,0, 128, 64, face[12]);
    display.display();
    delay(300);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[13]);
    display.display();
    delay(300);
    //接讀rfid部分
    }*/ //肚子餓不開心，放在主程式

/*void Hungry(){
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
 } */ //肚子餓不開心，如果上面的版本不好用就用這個吧
