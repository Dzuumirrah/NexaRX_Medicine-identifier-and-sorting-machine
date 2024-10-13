#include "config.h"
#include "app.h"

void CheckWifiConnection () {
    WiFi.begin (wifi_ssid, wifi_pass);

    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Seriala.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected!");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}