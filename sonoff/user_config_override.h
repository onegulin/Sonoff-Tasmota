/*****************************************************************************************************\
 * User specific configuration parameters to override user_config.h
 * 
 * ATTENTION: - Changes to most PARAMETER defines will only override flash settings if you change
 *              define CFG_HOLDER. 
 *            - Expect compiler warnings when no ifdef/undef/endif sequence is used.
 *            - You still need to update user_config.h for major defines MODULE and USE_MQTT_TLS.
 *            - Changing MODULE defines are not being tested for validity as they are in user_config.h.
 *            - Most parameters can be changed online using commands via MQTT, WebConsole or serial.
 *            - So I see no use in this but anyway, your on your own.
\*****************************************************************************************************/

// Examples
#ifdef CFG_HOLDER
#undef CFG_HOLDER
#endif
#define CFG_HOLDER             0x20170303

#ifdef STA_SSID1
#undef STA_SSID1
#endif
#define STA_SSID1              "XXXX"           // [Ssid1] Wifi SSID
#define STA_PASS1              "XXXXX"          // [Password1] Wifi password

#define MQTT_HOST            "m13.cloudmqtt.com" // [MqttHost]
#define MQTT_PORT            111               // [MqttPort] MQTT port (10123 on CloudMQTT)
#define MQTT_USER            "xxx"              // [MqttUser] Optional user
#define MQTT_PASS            "xxxxx"          // [MqttPassword] Optional password

#define APP_TIMEZONE           -6                // [Timezone] +1 hour (Amsterdam) (-12 .. 12 = hours from UTC, 99 = use TIME_DST/TIME_STD)

#define APP_POWERON_STATE      3                 // [PowerOnState] Power On Relay state (0 = Off, 1 = On, 2 = Toggle Saved state, 3 = Saved state)
#define APP_BLINKTIME          3                 // [BlinkTime] Time in 0.1 Sec to blink/toggle power for relay 1
#define APP_BLINKCOUNT         1                 // [BlinkCount] Number of blinks (0 = 32000)

//#define USE_DOMOTICZ                             // Enable Domoticz (+7k code, +0.3k mem) - Disable by //
//#define USE_I2C                                  // I2C using library wire (+10k code, 0.2k mem) - Disable by //
//#define USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k code, 0.3k mem)
//#define USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+8k code, +1k mem) - Disable by //
