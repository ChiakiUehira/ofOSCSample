#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetCircleResolution(128);
  ofBackground(0,0,0);
  oscReceiver.setup(8000);
}

//--------------------------------------------------------------
void ofApp::update(){
  while (oscReceiver.hasWaitingMessages()) {
    ofxOscMessage message;
    oscReceiver.getNextMessage(&message);
    if (message.getAddress() == "/button") {
      isTouchd = !!message.getArgAsBool(0);
      ofLogNotice() << isTouchd;
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  int radius = isTouchd ? 200 : 100;
  ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
  ofDrawCircle(0, 0, radius);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
