#include "WLANLib.h"

#define WLAN_SSID ""
#define WLAN_PASSWORD ""

WLANLib wlanLib(WLAN_SSID, WLAN_PASSWORD, "IoT_ESP8266");

void wlan_setup() {
    wlanLib.connect();
}