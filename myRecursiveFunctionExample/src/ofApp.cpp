#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}


void ofApp::drawRectangle(float x, float y, float w, float h){
    
    
    ofFill();
    
    ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
    ofDrawRectangle(x, y, w, h);
    
    if (w > 10){
        
        
        if (ofRandom(1) > .2) drawRectangle(x,y,w*0.5, h*.5);
        if (ofRandom(1) > .2) drawRectangle(x + w*0.5,y,w*0.5, h*.5);
        if (ofRandom(1) > .2) drawRectangle(x + w*0.5,y + h*0.5,w*0.5, h*.5);
        if (ofRandom(1) > .2) drawRectangle(x,y + h*.5,w*0.5, h*.5);
    }
    
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    ofSeedRandom(mouseX);
    drawRectangle(0,0,ofGetWidth(), ofGetHeight());
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
