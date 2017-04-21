#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.initGrabber(640, 480);
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    grabber.draw(0,0);
    
    for (int i = 0; i < 640; i += 10){
        for (int j = 0; j < 480; j+= 10){
            // get the brightness of the pixels
            int brightness = grabber.getPixels().getColor(i, j).getBrightness();
            
            
            //ofDrawCircle(640 + i, j, ofMap(brightness, 0, 255, 3.3, 4.3));
            
            ofPushMatrix();
            ofTranslate(640 + i, j);
            ofRotate( ofMap(brightness, 0, 255, 100, 200));
            ofDrawRectangle(0-5, 0-1, 10, 2);
            
            ofPopMatrix();
            
            
        }
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
