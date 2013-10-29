#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    nu = new Nu(0,0,ofGetWidth(),ofGetHeight());
}

//--------------------------------------------------------------
void testApp::update(){
    nu->update();
}

//--------------------------------------------------------------
void testApp::draw(){
    nu->draw();
}

void testApp::exit(){
    nu->exit();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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
