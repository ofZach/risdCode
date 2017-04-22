#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    
    ofSetColor(255);
    
    float x = 10;
    float y = 10;
    float w = mouseX;
    float h = mouseY;
    
    ofDrawLine( x, y, x + w, y);
    ofDrawLine( x + w, y, x, y+h);
    ofDrawLine( x, y + h, x+w, y+h);
    
    
//    // init ; check ; iterate
//    for (int i = 0; i < 10; i++){
//        
//        ofDrawRectangle(i * 10, 20, 5,5);
//    }
//    
//    
//    for (int i = 0; i < 100; i++){
//        
//        x = 100 + i * 5;
//        y = 100;
//        w = i + 10;
//        h = 100;
//        ofDrawLine( x, y, x + w, y);
//        ofDrawLine( x + w, y, x, y+h);
//        ofDrawLine( x, y + h, x+w, y+h);
//        
//    }
    
    
    
    
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
