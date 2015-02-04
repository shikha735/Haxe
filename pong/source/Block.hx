package ;
import openfl.display.Sprite;

class Block extends Sprite
{

	public function new() 
	{
		super();
		this.graphics.beginFill(0xffffff);
		this.graphics.drawRect(0, 0, 50, 20);
		this.graphics.endFill();
	}
	
}
