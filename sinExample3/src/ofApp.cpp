#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    
    
    for (int i = 0; i < 1000; i++){
        
        ofSetColor(  ofMap(sin(i*0.01), -1, 1, 0, 255),
                   ofMap(sin(i*0.011), -1, 1, 0, 255),
                   ofMap(sin(i*0.012), -1, 1, 0, 255) );
                   
        
        ofDrawCircle( 400 + sin(i*0.05 + ofGetElapsedTimef())*100, i,
                     
                     ofMap(sin(i*0.02), -1, 1, 10, 100));
        
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
