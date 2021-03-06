/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

const sf::Color Peach = sf::Color{ 190,112,65,255 };

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void processMouse(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();
	void setupVertexArray();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game
	sf::VertexArray m_points;// vertext arry for ourt drawings
	sf::Color m_colour; // colour ofr next vertex
	sf::CircleShape m_circle;
	sf::RectangleShape m_box;
	sf::Texture m_petePic;
	sf::Vector2f m_photoCoOrd[4] = { {0.0f,0.0f}, {400.0f, 0.0f}, {400.0f, 400.0f}, {0.0f,400.0f} };
	int index=  0;
};


#endif // !GAME_HPP

