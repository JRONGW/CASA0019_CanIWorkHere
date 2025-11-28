#include "WiFi.h"

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect(true); 
  delay(1000);
}

void loop() {
  Serial.println("Scanning WiFi networks...");
  int n = WiFi.scanNetworks();
  
  if (n == 0) {
    Serial.println("No networks found.");
  } else {
    for (int i = 0; i < n; i++) {
      Serial.print("SSID: ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" | RSSI: ");
      Serial.print(WiFi.RSSI(i));
      Serial.println(" dBm");
    }
  }

  Serial.println("---------------------");
  delay(2000); // 
}

