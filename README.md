# Bargraph-Class-Arduino
A bargraph class using arduino framework to light up led of a bargraph using a shift register.
It was made to be used with ESP32 but should be working with others microcontrollers.

The class has :
  • The value it is showing and its maximum value it can be shown on your bargraph (default at 8).
  • Only one pin for the shift register with AND logic GATE (default at 12).
  • A Clock pin (default at 13).
  • A mode of showing, either COLUMN (lighting up every LED to the value) either DASH (ligthing only the nth LED).
  
  • A 'Clear' method in order to switch off the bargraph.
  • A 'SetValue' method to switch up a certain amount the bargraph, depending on the mode of the bargraph. 
  • An Incrementation and Decrementation methods (Inc and Dec).
  • A method to dynamically switch mode.
