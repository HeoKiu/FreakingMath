#ifndef DRAWER_H
#define DRAWER_H
#include <SDL2/SDL.h>
#include <bits/stdc++.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include "equation.h"
using namespace std;

const int SCREEN_WIDTH = 400;
const int SCREEN_HEIGHT = 600;
const string gameName = "Quick Maths";

class drawer
{
    SDL_Window* gWindow_;
    SDL_Renderer* gRenderer_;
public:
    drawer(SDL_Window* gWindow, SDL_Renderer* gRenderer);
    void initWindow();
    void getImage( string const path);
    void getButton( string const path, int x, int y, int w, int h);
    void printEquation( string const eq);
    void drawTimeLeft(int beginningWidth);
    void printScore( string const point);
    void clearRender();
    void resetAfterARound();
    void playMusic( string const path);
protected:
private:
};

#endif // DRAWER_H
