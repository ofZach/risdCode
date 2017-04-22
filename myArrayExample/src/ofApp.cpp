#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    for (int i = 0; i < 5; i++){
        energies[i] = ofRandom(0,1);
    }
    
    
    ofSetCircleResolution(100);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    float total = 0;
    
    for (int i = 0; i < 5; i++){
        total += energies[i];
        //cout << "energy " << i << " = " << energies[i] << endl;
    }
    
    float pctx = 0;
    for (int i = 0; i < 5; i++){
        float pct = energies[i] / total;
        
        // from pctx to pctx + pct;
        ofDrawEllipse( (pctx + pct*0.5)*ofGetWidth(),ofGetHeight()*0.5, pct*ofGetWidth(), ofGetHeight());
        
        pctx += pct;
    }

    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    for (int i = 0; i < 5; i++){
        energies[i] = ofRandom(0,1);
    }

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
