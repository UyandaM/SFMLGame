#include "gyruss.h"

gyruss::gyruss(int windowBreadth, int windowLength)
{
    this->windowLength = windowLength;
    this->windowBreadth = windowBreadth;
    this->xOrigin = xOrigin;
    this->yOrigin = yOrigin;
    /*
    this->xOrigin = (float)windowBreadth * 0.5;
    this->yOrigin = (float)windowLength * 0.3;
    */
}

void gyruss::run()
{
  sf::RenderWindow window(sf::VideoMode(this->windowBreadth , this->windowLength), "Gyrus");
  //sf::CircleShape shape(100.f);
  //shape.setFillColor(sf::Color::Green);
  sf::Texture texture;
  if (!texture.loadFromFile("./sprites/ship.jpeg"))
  {
      // error...
  }
  sf::Sprite sprite;
  sprite.setTexture(texture);
  sprite.setPosition(this->xOrigin, this->yOrigin) ;
  sprite.setRotation(0.f);
  //sprite.rotate(90.f);
  while (window.isOpen())
  {
      sf::Event event;
      while (window.pollEvent(event))
      {
          if (event.type == sf::Event::Closed)
              window.close();
      }
      window.clear();
      window.draw(sprite);
      window.display();
      //window.clear();
      //window.draw(shape);
      //window.display();
  }
}
