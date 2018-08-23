#include<iostream>
#include<jni.h>
#include "CalculatorJNI.h"

using namespace std;

double addition(double num1, double num2) {
  return (num1 + num2);
}

double substraction(double num1, double num2) {
  return (num1 - num2);
}
double multiplication(double num1, double num2) {
  return (num1 * num2);
}

double division(double num1, double num2) {
  return (num1 / num2);
}

// Implementation of native method sayHello() of HelloJNI class
JNIEXPORT jdouble JNICALL Java_CalculatorJNI_addition (JNIEnv *, jobject, double jdouble1, double jdouble2) {
  return addition(jdouble1, jdouble2);
}

JNIEXPORT jdouble JNICALL Java_CalculatorJNI_substraction (JNIEnv *, jobject, double jdouble1, double jdouble2) {
  return substraction(jdouble1, jdouble2);
}

JNIEXPORT jdouble JNICALL Java_CalculatorJNI_multiplication (JNIEnv *, jobject, double jdouble1, double jdouble2) {
  return multiplication(jdouble1, jdouble2);
}

JNIEXPORT jdouble JNICALL Java_CalculatorJNI_division (JNIEnv *, jobject, double jdouble1, double jdouble2) {
  return division(jdouble1, jdouble2);
}
