#include <WiFi.h>
#include <HttpClient.h>

String URL = "http:/192.168.216.73/templog/test_data.php";

const char* ssid = "";
const char* pass = "";
int temperature = 50;
int humidity = 50;

void setup(){
Serial.begin(115200);
connectWiFi();

}

void loop (){
  if(WiFi.status() != WL_CONNECTED){

    connectWiFi();
  }

  String postData = "temperature=" + String(temperature) + " humidity=" + String(humidity);
  
  HTTPClient http;
  http.begin(URL);

  int httpCode = http.POST(postData); // if the data is successfuly posted on the server we recieve 200 code
  String payload = http.getString();

  http.addHeader("Content-Type", "Application/x-www-form-urlencoded");

  Serial.print("URL: "); Serial.println(URL);
  Serial.print("Data: "); Serial.println(postData);
  Serial.print("httpCode: "); Serial.println(httpCode);
  Serial.print("payload: "); Serial.println(payload);
}

void connectWiFi(){
  WiFi.mode(WIFI_OFF);
  delay(1000);
  WiFi.mode(WIFI_STA);

  WiFi.begin(ssid, pass);
  Serial.println("Connecting to WiFi");

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }

  Serial.print("connected to : "); Serial.println(ssid);
  Serial.print("IP address : "); Serial.println(WiFi.localIP());

}