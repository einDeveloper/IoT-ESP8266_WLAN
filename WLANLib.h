class WLANLib {

    private:
        String SSID;
        String PASSWORD;
        String DEVICE_NAME;

        /*
         * Sets the WLAN-SSID
        */
        void setSSID(String ssid) {
            SSID = ssid;
        }

        /*
         * Sets the WLAN-Password
        */
        void setPassword(String password) {
            PASSWORD = password;
        }

        /*
         * Sets the Devicename
        */
        void setDevicename(String devicename) {
            DEVICE_NAME = devicename;
        }

    public:
        /*
         * WiFi client for all actions
        */
        WiFiClient client;

        /*
         * Class constructor with all informations to connect
        */
        WLANLib(String ssid, String password, String devicename) {
            ( setSSID(ssid) );
            ( setPassword(password) );
            ( setDevicename(devicename) );

            Serial.println("[WLANLib] I got new WLAN Information.");
        }

        /*
         * Connects the ESP9266 finally to the WLAN
        */
        void connect() {
            Serial.println("[WLANLib] I start to connect to the WLAN!");

            WiFi.begin(SSID, PASSWORD);
            WiFi.hostname(DEVICE_NAME);

            Serial.println("[WLANLib] I connected to the WLAN!");
        }

    /*
     * Returns the client for more actions
    */
    WiFiClient getClient() {
        return client;
    }

};