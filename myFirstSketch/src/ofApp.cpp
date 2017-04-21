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
    // ofBackground(0,255,0);
    
//    ofSetColor(255,255,255);
//    ofDrawLine(100,100,300,300);
//    ofDrawRectangle(80,200, 10, 10);
//    ofDrawCircle(100,100,20);
    
    
//    ofDrawLine( ofRandom(0,1000),
//                ofRandom(0,1000),
//               500,500);
    
    ofSeedRandom(mouseX);
    for (int i = 0; i < 1000; i++){
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
        ofDrawRectangle(i, i, 100, 100);
    }
    
    
    
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
