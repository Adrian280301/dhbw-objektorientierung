#include <Gosu/Gosu.hpp>
#include <Gosu/AutoLink.hpp>
using namespace std;

class GameWindow : public Gosu::Window
{
public:
	Gosu::Image bild;
	GameWindow()
		: Window(1100, 600, true)
		, bild("raumschiff21.png")
	{
		set_caption("Gosu Tutorial mit Git");
	}

	// Wird bis zu 60x pro Sekunde aufgerufen.
	// Wenn die Grafikkarte oder der Prozessor nicht mehr hinterherkommen,
	// dann werden `draw` Aufrufe ausgelassen und die Framerate sinkt
	void draw() override
	{
		bild.draw_rot(x, y, 0.0, 0.0, 0.5, 0.5);

	}
	double x;
	double y;
	double rot;

	// Wird 60x pro Sekunde aufgerufen
	void update() override
	{
		x = input().mouse_x();
		y = input().mouse_y();
	}
};

// C++ Hauptprogramm
int main()
{
	GameWindow window;
	window.show();
}
