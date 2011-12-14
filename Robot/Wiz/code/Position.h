
#ifndef POSITION_H
#define POSITION_H

#include <string>

class Position
{
public:

    // Constructors/Destructors
    //  


    /**
     * Empty Constructor
     */
    Position ( );

    /**
     * Empty Destructor
     */
    virtual ~Position ( );

    // Public attributes
    //  

    int x;
    int y;

    // Public attribute accessor methods
    //  


    /**
     * Set the value of x
     * @param new_var the new value of x
     */
    void setX ( int new_var )     {
            x = new_var;
    }

    /**
     * Get the value of x
     * @return the value of x
     */
    int getX ( )     {
        return x;
    }

    /**
     * Set the value of y
     * @param new_var the new value of y
     */
    void setY ( int new_var )     {
            y = new_var;
    }

    /**
     * Get the value of y
     * @return the value of y
     */
    int getY ( )     {
        return y;
    }
protected:

public:

protected:

public:

protected:


private:

public:

private:

public:

private:


    void initAttributes ( ) ;

};

#endif // POSITION_H
