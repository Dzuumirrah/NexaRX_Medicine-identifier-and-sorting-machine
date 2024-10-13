#ifndef APP_H
#define APP_H

#include <WiFi.h>
#include <HTTPClient.h>
#include <stdint.h>

// From connection.c
void CheckWifiConnection();

// From action-and-feature
void up_select();
void down_select();
void yes_select();
void no_select();



#endif
