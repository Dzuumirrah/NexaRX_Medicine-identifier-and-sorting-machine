#ifndef CONFIG_H
#define CONFIG_H

#include <WiFi.h>
#include <HTTPClient.h>

//Pin used in ESP32
const int up_button = 34;
const int down_button = 34;
const int yes_button = 34;
const int no_button = 34;


// WiFi credential
#define wifi_ssid "eduraom"                         // Change to current actived WiFi
#define wifi_pass "aingmaung"

// HTTP global variable
extern HTTPClient http;

#endif
