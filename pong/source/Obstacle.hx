package ;
import openfl.display.Sprite;

class Obstacle extends Sprite
{

	public function new() 
	{
		super();
		this.graphics.beginFill(0xffffff);
		this.graphics.drawRect(0, 0, 30,30);
		this.graphics.endFill();
	}
	
}
