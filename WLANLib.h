
class WLANLib {

    private:
        String SSID;
        String PASSWORD;
        String DEVICE_NAME;

        void setSSID(String ssid) {
            SSID = ssid;
        }

        void setPassword(String password) {
            PASSWORD = password;
        }

        void setDevicename(String devicename) {
            DEVICE_NAME = devicename;
        }

    public:
        WiFiClient client;

        WLANLib(String ssid, String password, String devicename) {
            ( setSSID(ssid) );
            ( setPassword(password) );
            ( setDevicename(devicename) );

            Serial.println("[WLANLib] I got new WLAN Information.");
        }

        void connect() {
            Serial.println("[WLANLib] I start to connect to the WLAN!");

            WiFi.begin(SSID, PASSWORD);
            WiFi.hostname(DEVICE_NAME);

            Serial.println("[WLANLib] I connected to the WLAN!");
        }

    WiFiClient getClient() {
        return client;
    }

};