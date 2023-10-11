#include<WiFi.h>
#include<PubSubClient.h>

const char* ssid="fuxiao";  //WiFi名称
const char* password="987987987";  //WiFi密码

const char* mqtt_server="192.168.1.105";  //输入你的无线局域网适配器IPv4地址

const char* client_id="mqttx_e284e058";
const char* PubTopic ="077";
const char* SubTopic ="077";

WiFiClient espClient;
PubSubClient client(espClient);

long lastMsg=0;
char msg[50];
int value=0;

void callback(char* topic,byte* payload,unsigned int length)
{
  Serial.print("Message arrived[");
  Serial.print(topic);
  Serial.print("]");
  for(int i=0;i<length;i++)
  {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

void reconnected(){
  while(!client.connected())
  {
    Serial.print("Attempting MQTT connection...");
    if(client.connect(client_id)){
      Serial.println("connected");
      client.subscribe(SubTopic);
     
    }else{
      Serial.print("failed,rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      delay(5000);
    }
  }
}




void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.begin(ssid,password);
  while(WiFi.status()!=WL_CONNECTED)
  {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  client.setServer(mqtt_server,1883);
  client.setCallback(callback);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(!client.connected()){
    reconnected();
  }
  client.loop();
 long now=millis();
  if(now-lastMsg>2000)
  {
    lastMsg=now;
    ++value;
    snprintf(msg,50,"hello 77 #%d",value);
    Serial.print("Publish message:");
    Serial.println(msg);
    client.publish(PubTopic,msg);
  }
 
}
