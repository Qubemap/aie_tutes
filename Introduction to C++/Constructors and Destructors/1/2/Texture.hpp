#ifndef TEXTURE_HPP
#define TEXTURE_HPP

class IntArray
{
    public:

		//constructor
		IntArray(int i)
		{
			len = i;
			array = new int[len];
		}

		//copy constructor
		IntArray(IntArray &og)
		{
			len = og.len;
			array = new int[len];
		}

		//destructor
		~IntArray()
		{
			delete[] array;
		}


        int*	array;
		int		len;


};

#endif