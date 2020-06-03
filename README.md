# State_Machine_DoorCtrl
### This is program for control automation door use state machine
##### State machine figure [Figure](./Demo/DoorControl.PNG)
##### Demo [Youtube](https://youtu.be/u2lHTKop-7U)
### Requirements
<p>
_> When detect motion, System controll the door by setup OPENDOOR to 1 <br>
_> After don't detect motion about 10s, Close the door by setup OPENDOOR to 0 <br>
_> For alert, In the time detect motion, System show LED with frequency 1 Hz at alert RED. When no motion this port will equal 0<br>
_> The system is considered to have motion if the signal from the sensor is constant for 50 ms, and is considered to be motionless if the signal is constant for 50 ms.
</p>
<strong>KIT</strong>
<p>
> Tiva C TM4C123G H6PM<br>
> For easy : <br>
> Motion Sensor: use Button SW1 on kit Tiva <br>
> Door Control port : Use LED BLUE on board <br>
> LED alert motion: Use LED RED on board <br>
> Use CCS to compile this source
</p>