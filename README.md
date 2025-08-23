# RC-Car
A prototype for a remote controlled car.


## The idea

In this repository, I'm exploring the idea of making a remote controllable car. 

Ideas that come to mind:
* mecanum wheels for driving, steering and stafing
* compass based steering
* "platform" based, allow other computers/chips to steer the car (like a raspberry pi for instance)


for now:
I'm using 
* 4 geared dc motors (N20 motor with some reduction gear on it. according to amazon reviews it's about 100rpm@3V).
* 2 DRV8833 drivers
* STM32F103c8t (blue pill)

## I2C

I've set the `I2C slave address` to `23` in the MXCube configuration.
The I2C device is configured to receive 4 signed bytes:
```
[0] front left
[1] front right
[2] rear left
[3] rear right
```
sending a 0 will stop the motor, negative values will put the specific motor in reverse. each motor can have it's own speed and direction.