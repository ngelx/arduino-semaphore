/*
  Semaphore.cpp - Library for basic red-yellow-green semaphore.
  Created by Angel Arancibia, July 23, 2013.
  Released into the public domain.
*/

#include "Semaphore.h"

void Semaphore::Semaphore(int red_pin, int yellow_pin, int green_pin){
  _red_pin = red_pin;
  _yellow_pin = yellow_pin;
  _green_pin = green_pin;
  
  pinMode(_red_pin, OUTPUT);
  pinMode(_yellow_pin, OUTPUT);
  pinMode(_green_pin, OUTPUT);
}

void Semaphore::red(){
  off();
  digitalWrite(_red_pin,HIGH);
}

void Semaphore::green(){
  off();
  digitalWrite(_green_pin,HIGH);
}

void Semaphore::yellow(){
  off();
  digitalWrite(_yellow_pin,HIGH);
}

void Semaphore::red_yellow(){
  off();
  digitalWrite(_yellow_pin,HIGH);
  digitalWrite(_red_pin,HIGH);
}

void Semaphore::off(){
  digitalWrite(_red_pin,LOW);
  digitalWrite(_yellow_pin,LOW);
  digitalWrite(_green_pin,LOW);
}