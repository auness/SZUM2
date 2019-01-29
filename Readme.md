Sterowanie z³o¿onymi uk³adami mechanicznymi

Sprawozdanie 2
Klaudia Król
Agnieszka Opa³ka
AiR, 2018/2019

1. Otworzyæ plik arduinoCode w aplikacji arduino i wgraæ kod na p³ytkê (u¿yta p³ytka Arduino Uno)
2. Uruchomiæ system ROS
3. W nowym terminalu za pomoc¹ komendy
rosrun rosserial_arduino serial_node.py _port:=/dev/ttyUSB0 (w naszym przypadku akurat USB0)
³¹czymy siê z modu³em Arduino.
4. W³¹czamy program Matlab i uruchamiamy plik matlabCode.
5. Poruszaj¹c joystickiem mo¿emy zaobserwowaæ zmienianie siê wartoœci sygna³u na wykresie.

U¿yty zosta³ modu³ wyposa¿ony w joystick posiadaj¹cy mo¿liwoœæ wykrywania ruchów w dwóch kierunkach oraz przycisk, za³¹czany poprzez naciœniêcie ga³ki. 