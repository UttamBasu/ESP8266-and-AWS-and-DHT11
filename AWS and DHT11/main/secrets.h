#include <pgmspace.h>
 
#define SECRET
 
const char WIFI_SSID[] = "Uttam";               
const char WIFI_PASSWORD[] = "12345678";                     
 
#define THINGNAME "esp8266"
 
int8_t TIME_ZONE = +5;                                           //India: +5:30 UTC
 
//AWS MQTT host from AWS Settings.........................................................................
const char MQTT_HOST[] = "......................amazonaws.com";      //Your host ID here. Get it from AWS settings
 
 

// Root CA1 Certificate will be here ▼.......................................................................
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----


-----END CERTIFICATE-----
)EOF";
 

//Device Certificate will be here..................................................................................
// Copy contents from XXXXXXXX-certificate.pem.crt here ▼
static const char client_cert[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----


-----END CERTIFICATE-----
)KEY";
 
// Private Key Certificate will be here......................................................................
// Copy contents from  XXXXXXXX-private.pem.key here ▼
static const char privkey[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----


-----END RSA PRIVATE KEY-----
)KEY";
