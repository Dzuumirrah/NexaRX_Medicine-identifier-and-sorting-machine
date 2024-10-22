#ifndef CONFIG_H
#define CONFIG_H

#include <WiFi.h>
#include "U8glib.h"
#include "src\data\epd_bitmap_data.h"
//Pin used in ESP32
#define up_button = 34;
#define down_button = 32;
#define yes_button = 12;
#define no_button = 5;

// Define Menus
const int NUM_MENUS = 3;
const int MAX_MENU_LENGTH = 20;
extern char feature_items[NUM_MENUS][MAX_MENU_LENGTH];

// Define container max room
const int MAX_ROOM_OF_CONTAINER = 3;


// WiFi credential
#define wifi_ssid "eduraom"                         // Change to current actived WiFi
#define wifi_pass "aingmaung"


#endif
