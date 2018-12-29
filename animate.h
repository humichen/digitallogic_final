//face矩陣名：0.angry1  1.angry2  2.blink2  3.blink3  4.happy1  5.happy2  6.normal1  7.normal2  8.normal3  9.unhappy1   10.unhappy2  11.unhappy3  12.hungry1  13.hungry2  14.wakeup1  15.wakeup2  16.wakeup3  17.happy_11  18.happy_12  19.shark1  20.shark2
//函式名稱：Wakeup()  Angry()  Blink()  Happy()  Happy1()  Unhappy()  Normal()  Hungry()  Left()  Right()  Shark()
#include"picture.h"
void Wakeup(){
    display.clear();
    display.drawXbm(0,0, 128, 64, face[14]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[15]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[16]);
    display.display();
    delay(500);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[15]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[14]);
    display.display();
    delay(200);
    display.clear();
    display.drawXbm(0,0, 128, 64, face[7]);
    display.display();
    delay(200);
} //開機醒來

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
    display.drawXbm(0,0, 128, 64, face[7]);
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
    display.drawXbm(0,0, 128, 64, face[7]);
    display.display();
}//待機札眨眨眼

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

void Happy1(){
    for (int i=0; i<=3; i++) {
        display.clear();
        display.drawXbm(0,0, 128, 64, face[17]);
        display.display();
        delay(300);
        display.clear();
        display.drawXbm(0,0, 128, 64, face[18]);
        display.display();
        delay(300);
    }
}//新增的笑臉

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
    display.drawXbm(0,0, 128, 64, face[7]);
    display.display();
}//正常情況表情

void Left(){
    display.clear();
    display.drawXbm(0,0, 128, 64, face[8]);
    display.display();
}//左轉

void Right(){
    display.clear();
    display.drawXbm(0,0, 128, 64, face[6]);
    display.display();
}//右轉

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
 } //肚子餓不開心

void Shark(){
    for (int i=0; i<=3; i++) {
        display.clear();
        display.drawXbm(0,0, 128, 64, face[19]);
        display.display();
        delay(300);
        display.clear();
        display.drawXbm(0,0, 128, 64, face[20]);
        display.display();
        delay(300);
    }
    } //驚嘆號表情
