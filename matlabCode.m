t = 1; % zadeklarowanie początkowej zmiennej czasu

while(1)
    joystick = rossubscriber('/chatter'); % odczytuje dane z joysticka
    joystickData = receive(joystick,1); % otrzymane pozycje joysticka zapisuje jako dane joystickData (co 1 s.)
    v = []; 
    v = [v joystickData.Data]; % przypisanie do wektora wartości z odczytaną pozycją joysticka
    plot(t, v, 'b*') % rysowanie zmian położenia w osi X joysticka w czasie
    axis([0 100 -1 1050])
    t = t + 1; % zwiększanie zmiennej czasu
    hold on
end
