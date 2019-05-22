#ifndef LoaderParams_h
#define LoaderParams_h
#include <string>


class LoaderParams
{
public:
    
    LoaderParams(int x, int y, int width, int height, std::string textureID) : go_x(x), go_y(y), go_width(width), go_height(height), go_textureID(textureID)
    {
        
    }
    
    int getX() const { return go_x; }
    int getY() const { return go_y; }
    int getWidth() const { return go_width; }
    int getHeight() const { return go_height; }
    std::string getTextureID() const { return go_textureID; }
    
private:
    
    int go_x;
    int go_y;
    
    int go_width;
    int go_height;
    
    std::string go_textureID;
};

#endif /* LoaderParams_h */
