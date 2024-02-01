#ifndef TILEMAP_HPP
#define TILEMAP_HPP

class Tilemap
{
    public:

        //structs
        struct Tile
        {
            int x;
            int y;
            int tile_value;
        };

        //constructors
        Tilemap(int a_width, int a_height)
        {
            width = a_width;
            height = a_height;

            tiles = new Tile*[height];

            for (int row_index = 0; row_index < height; ++row_index)
            {
                tiles[row_index] = new Tile[width];
            }
        }

        //destructors
        ~Tilemap()
        {
            for (int row_index; row_index < height; ++row_index)
            {
                delete[] tiles[row_index];
            }

            delete[] tiles;
        }

        int width;
        int height;
        Tile** tiles;
};

#endif