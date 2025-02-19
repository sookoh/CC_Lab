#pragma once

#include "ofMain.h"
#define NUM 10


class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void changeColor ();
        void changeSize (float pct);
        void randomizeSize(float min, float max);
    
    ofColor myColor [NUM];
    
    float   circleSize[70];
    
    vector <ofVec3f> pts;
   
};
