#include "ofMain.h"
#include "ofApp.h"

int main( ){
#ifdef TARGET_OPENGLES
    ofGLESWindowSettings settings;
    settings.glesVersion = 2;
#else
    ofGLWindowSettings settings;
    settings.setGLVersion(3,3);
#endif
    settings.width = 1024;
    settings.height = 768;
    settings.windowMode = OF_WINDOW;
    
    ofCreateWindow(settings);
    
    // this kicks off the running of my app
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofRunApp(new ofApp());
    
}

