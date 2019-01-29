// Nagłówki niezbędne dla komunikacji z systemem ROS
#include <ros.h>
#include <std_msgs/UInt16.h>

// Uchwyt do modułu pozwalający na tworzenie Subscriber'ów oraz Puslisher'ów
ros::NodeHandle nh;

// Tworzymy Publisher'a z nazwą kanału "chatter" oraz zmienną wykorzystywaną do wysyłania wiadomości
std_msgs::UInt16 msg;
ros::Publisher chatter("chatter", &msg);


void setup()
{
// Inicjalizacja modułu
  nh.initNode();
  nh.advertise(chatter);
}

void loop()
{
// Wpisanie danych do zmiennej oraz wysłanie komunikatu do systemu ROS
  msg.data = analogRead(A0);
  chatter.publish(&msg);
  nh.spinOnce();
  delay(1000);
}
