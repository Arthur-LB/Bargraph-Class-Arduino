# Bargraph Class Arduino
A bargraph class using arduino framework to light up led of a bargraph using a shift register.<br>
It was made to be used with ESP32 but should be working with others microcontrollers.<br>

The class has :<br>
<ul>
  <li>The value it is showing and its maximum value it can be shown on your bargraph (default at 8).</li>
  <li>Only one pin for the shift register with AND logic GATE (default at 12).</li>
  <li>A Clock pin (default at 13).</li>
  <li>A mode of showing, either COLUMN (lighting up every LED to the value) either DASH (ligthing only the nth LED).</li>
  <br>
  <li>A 'Clear' method in order to switch off the bargraph.</li>
  <li>A 'SetValue' method to switch up a certain amount the bargraph, depending on the mode of the bargraph.</li>
  <li>An Incrementation and Decrementation methods (Inc and Dec).</li>
  <li>A method to dynamically switch mode.</li>
</ul>
