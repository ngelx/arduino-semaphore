arduino-semaphore
=================

Basic semaphore library for arduino


Instalation
-----------

Copy the Semaphore directory inside of the libraries sub-directory of your sketchbook directory. Now launch the Arduino environment. If you open the Sketch > Import Library menu, you should see Semaphore inside. The library will be compiled with sketches that use it. If the library doesn't seem to build, make sure that the files really end in .cpp and .h (with no extra .pde or .txt extension, for example).

Quick reference
---------------



```arduino

/* Include the library in your code */

#include <Semaphore.h>

/* .... */

/* Declare your semaphore */

/* pin 10: red led */
/* pin 11: yellow led */
/* pin 12: gren led */

Semaphore my_semaphore(10,11,12);

void setup(){
  /* no setup is needed */
}

void loop()
{
  /* switch on red ligth */
  my_semaphore.red();
  delay(3000);

  /* switch on yellow ligth */
  my_semaphore.yellow();
  delay(3000);

  /* switch on green ligth */
  my_semaphore.green();
  delay(3000);

  /* switch on red and yellow ligth togheter */
  my_semaphore.red_yellow();
  delay(3000);

  /* turn off all ligth */
  my_semaphore.off();
}

``

Author
======


**Angel Arancibia**

+ [http://twitter.com/arancibia_angel](http://twitter.com/arancibia_angel)


License
=====================

This library is released under the [GPL v3](LICENSE).
