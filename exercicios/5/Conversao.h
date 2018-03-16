#ifndef Conversao_H
#define Conversao_H

class Conversao {
  float x;
  float celcius;
  float fahrenheit;
public:
  Conversao();
  Conversao(float x, float c, float f);
  Conversao(Conversao const &c);
  float getX();
  void consoleValues();
  /**
    Calculates the value of the celcius member in Farenheit.

    @param no parameter.
    @return float in Farenheit.
  */
  float f2C();

  /**
    Calculates the value of the celcius member in Farenheit.

    @param no parameter.
    @return float in Farenheit.
  */
  float c2F();

  /**
    Increments the value of X in 1 integer.

    @param no parameter.
    @return nothing
  */
  void incrementX();
};

#endif
