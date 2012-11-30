#include "testApp.h"

struct Ball {
    ofPoint pos;
   
};

vector<Ball> balls;

//--------------------------------------------------------------
void testApp::setup(){
   
        ofBackground(0);
        ofEnableSmoothing();
        ofSetFrameRate(60);
//        ofEnableAlphaBlending();
    
        for (int i=0; i<NUM; i++) {
            ofColor tempColor;              // create a temporal ofColor object
            tempColor.r = ofRandom(255);    // assign values to red
            tempColor.g = ofRandom(255);    // assign values to green
            tempColor.b = ofRandom(255);    // assign values to blue
            myColor[i] = tempColor;// copy those values into myColor
        }
    
    for (int i=0; i<balls.size(); i++) {
    circleSize[i] = 1;
    }
}


//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
 ofNoFill();

    for (int i=0; i<balls.size(); i++) {
        ofSetColor(myColor[i%10].r, myColor[i%10].g, myColor[i%10].b);
        ofCircle( balls[i].pos.x, balls[i].pos.y, i/3);
    }
}


//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    Ball ball;
    ball.pos.x = x;
    ball.pos.y = y;
    balls.push_back(ball);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}