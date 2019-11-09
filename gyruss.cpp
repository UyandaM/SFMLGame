#include "gyruss.h"

gyruss::gyruss(int windowBreadth, int windowLength,shared_ptr<logicalship> &battleship)
{
  //battleship = make_shared<logicalship>(windowBreadth,windowLength);
  this->battleship = battleship;
  this->windowLength = windowLength;
  this->windowBreadth = windowBreadth;
  /*
  this->xOrigin = xOrigin;
  this->yOrigin = yOrigin;
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
  sprite.setPosition(battleship->xposition(), battleship->yposition());
  //sprite.setPosition(battleship->xposition(), 100.f);
  sprite.setRotation(battleship->angle());
  //sprite.rotate(90.f);

  while (window.isOpen())
  {
      sf::Event event;
      while (window.pollEvent(event))
      {

          if (event.type == sf::Event::Closed)
          {
            window.close();
          }else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            battleship->clockwise();
            sprite.setRotation(battleship->angle());
            sprite.setPosition(battleship->xposition(), battleship->yposition());
            cout << battleship->xposition() <<"," << endl;
          }else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            battleship->anticlockwise();
            sprite.setRotation(battleship->angle());
            sprite.setPosition(battleship->xposition(), battleship->yposition());
          }

          /*
          switch (event.type)
          {
            case sf::Event::Closed:
              window.close();
              break;

            case sf::Keyboard::isKeyPressed(sf::Keyboard::Left):
              battleship->anticlockwise();
              sprite.setRotation(battleship->angle());
              sprite.setPosition(battleship->xposition(), battleship->yposition());
            break;
          }
          */


      }
      window.clear();
      window.draw(sprite);
      window.display();
      //window.clear();
      //window.draw(shape);
      //window.display();
  }

}
