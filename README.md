#so_long

42Curriculum project

This project is a 2D game made in C where we use the [MiniLibX](https://harm-smits.github.io/42docs/libs/minilibx) graphical library. 
##Project Rules
  * Ther player must be able to move in the X & Y axis.
  * When running the program we must add a map file as an argument
  * The map can only be composed of 5 characters
  * The map must contain 1 exit, at least 1 collectible, and 1 starting position to be valid.
  * If the map contains duplicate characters (exit/start), an error message should be displayed.
  * The map must be rectangular.
  * The map must be enclosed/surrounded by walls. If it is not, the program must return an error.
##My implementation
  As a 2D game the projects gives a lot of room for creativity so I decided to have some fun with it.
  I have an "object" structure where I keep all the relevant information for every element in the game: 
    ```
    typedef struct s_objt
    {
	    int				x;
	    int				y;
      char			type;
	    t_img			img;
	    struct s_objt	*next;
    }				t_objt;```
  The structure acts as a linked list, with every node being an object in the game (walls, player, collectibles, exits and enemies)
  Further more as I added the option to switch into sprites of a width/height of 64 48 32 and 16 pixels the method I used to call the list was the following:
   
```
t_objt	**objects(int n)
{
	static t_objt	*obj;
	static t_objt	*obj2;
	static t_objt	*obj3;
        static t_objt	*obj4;

	if (n == 64)
		return (&obj);
	if (n == 48)
		return (&obj2);
	if (n == 32)
		return (&obj3);
	if (n == 16)
		return (&obj4);
	else
		return (NULL);
}```
