Sterowanie z�o�onymi uk�adami mechanicznymi

Sprawozdanie 2
Klaudia Kr�l
Agnieszka Opa�ka
AiR, 2018/2019

1. Otworzy� plik arduinoCode w aplikacji arduino i wgra� kod na p�ytk� (u�yta p�ytka Arduino Uno)
2. Uruchomi� system ROS
3. W nowym terminalu za pomoc� komendy
rosrun rosserial_arduino serial_node.py _port:=/dev/ttyUSB0 (w naszym przypadku akurat USB0)
��czymy si� z modu�em Arduino.
4. W��czamy program Matlab i uruchamiamy plik matlabCode.
5. Poruszaj�c joystickiem mo�emy zaobserwowa� zmienianie si� warto�ci sygna�u na wykresie.

U�yty zosta� modu� wyposa�ony w joystick posiadaj�cy mo�liwo�� wykrywania ruch�w w dw�ch kierunkach oraz przycisk, za��czany poprzez naci�ni�cie ga�ki. 