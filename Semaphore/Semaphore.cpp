/*
  Semaphore.cpp - Library for basic red-yellow-green semaphore.
  Created by Angel Arancibia, July 23, 2013.
  Released into the public domain.
*/

#include "Semaphore.h"

Semaphore::Semaphore(int red_pin, int yellow_pin, int green_pin){
  _red_pin = red_pin;
  _yellow_pin = yellow_pin;
  _green_pin = green_pin;

  if (_red_pin != DISABLE) {
    pinMode(_red_pin, OUTPUT);
  }
  if (_yellow_pin != DISABLE) {
    pinMode(_yellow_pin, OUTPUT);
  }
  if (_green_pin != DISABLE) {
    pinMode(_green_pin, OUTPUT);
  }
}

void Semaphore::red(){
  if (_red_pin != DISABLE) {
    off();
    digitalWrite(_red_pin,HIGH);
  }
}

void Semaphore::green(){
  if (_green_pin != DISABLE) {
    off();
    digitalWrite(_green_pin,HIGH);
  }
}

void Semaphore::yellow(){
  if (_yellow_pin != DISABLE) {
    off();
    digitalWrite(_yellow_pin,HIGH);
  }
}

void Semaphore::red_yellow(){
  if (_yellow_pin != DISABLE and _red_pin != DISABLE) {
    off();
    digitalWrite(_yellow_pin,HIGH);
    digitalWrite(_red_pin,HIGH);
  }
}

void Semaphore::off(){
  if (_red_pin != DISABLE) {
    digitalWrite(_red_pin,LOW);
  }
  if (_yellow_pin != DISABLE) {
    digitalWrite(_yellow_pin,LOW);
  }
  if (_green_pin != DISABLE) {
    digitalWrite(_green_pin,LOW);
  }
}