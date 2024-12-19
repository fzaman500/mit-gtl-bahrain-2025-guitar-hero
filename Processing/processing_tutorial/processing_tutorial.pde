import processing.serial.*;

import controlP5.*; // import ControlP5 library

Serial myPort;  // Create object from Serial class
String val;     // Data received from the serial port


//ControlP5 cp5; // create ControlP5 object

void setup(){
  size(300, 400); //window size, (width, height)
  String portName = Serial.list()[3]; //change the 0 to a 1 or 2 etc. to match your port
  println(Serial.list());
  print(portName);
  myPort = new Serial(this, portName, 9600);
}

void draw(){
  background(50, 70, 100); //background color of window (r, g, b) from 0-255
  //let's give title to our window
  fill(0, 0, 0); // text color (r, g, b)
  text("GUITAR HERO", 100, 30); // ("text", x coord, y coord)
  if ( myPort.available() > 0) 
  {  // If data is available,
    val = myPort.readStringUntil('\n');         // read it and store it in val
  } 
  println(val); //print it out in the console
  if (mousePressed == true) 
  {                           //if we clicked in the window
   myPort.write('1');         //send a 1
   println("1");   
  } else 
  {                           //otherwise
  myPort.write('0');          //send a 0
  }
}
