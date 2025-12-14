#include <SFML/Graphics.hpp>

#include <cmath>
#include <cstdlib>

int main() {

  sf::RenderWindow window(sf::VideoMode(500, 500),
                          "Приложение для вывода матрицы",
                          sf::Style::Titlebar | sf::Style::Close);

  const int cellSize = 50;
  const int gridSize = 10;

  sf::RectangleShape cells[gridSize][gridSize];

  for (int i = 0; i < gridSize; i++) {
    for (int j = 0; j < gridSize; j++) {
      cells[i][j].setSize(sf::Vector2f(cellSize - 2, cellSize - 2));
      cells[i][j].setPosition(i * cellSize, j * cellSize);
      cells[i][j].setFillColor(sf::Color::White);
      cells[i][j].setOutlineColor(sf::Color::Black);
      cells[i][j].setOutlineThickness(1);
    }
  }


  while (window.isOpen()) {

    window.clear(sf::Color::White);

    int size = gridSize / 3;
    for (int i = 0; i < gridSize; i++) {
      for (int j = 0; j < gridSize; j++) {
        if (i >= size && j >= size && (i < gridSize - size && j < gridSize - size)) {
            cells[i][j].setFillColor(sf::Color::Green);
        }
        window.draw(cells[i][j]);
      }
    }

    window.display();
  }

  return 0;
}
