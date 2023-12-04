#pragma once

#include<iostream>
#include<SFML/Graphics.hpp>

using namespace std;

class Ventana
{
public:
    int Window(int width, int height, const std::string& title) {
        window.create(sf::VideoMode(width, height), title);
    }

    bool isOpen() {
        return window.isOpen();
    }

    void close() {
        window.close();
    }

    void clear() {
        window.clear();
    }

    void display() {
        window.display();
    }

    void draw(sf::Shape& shape) {
        window.draw(shape);
    }

    bool pollEvent(sf::Event& event) {
        return window.pollEvent(event);
    }

    sf::Vector2u getSize() {
        return window.getSize();
    }

private:
    sf::RenderWindow window;
};