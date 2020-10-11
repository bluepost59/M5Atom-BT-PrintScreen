#include <M5Atom.h>
#include <BleKeyboard.h>

BleKeyboard bleKeyboard("M5AtomPrintScreen");

void setup() {
  M5.begin(true,false,true);
  bleKeyboard.begin();
}

void loop() {
  M5.Btn.read();

  if(bleKeyboard.isConnected()){
    M5.dis.drawpix(0,0x0000ff);
    if(M5.Btn.isPressed()){
      bleKeyboard.write(0xCE);     
      Serial.println("presed");
      delay(500);
    }
  }else{
    M5.dis.drawpix(0,0x00ff00);
  }
  delay(10);
}
