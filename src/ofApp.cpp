#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofBackground(0, 0, 0);


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 255, 255);
    ofDrawBitmapString("Type a message all in lower case with no numbers or symbols", ofGetWidth()/2, 20);
    
    ofFill();
    ofSetColor(45, 72, 51);
    ofSetCircleResolution(100);
    ofDrawCircle(a1, a2, 30);
    ofSetColor(0, 223, 32);
    ofDrawLine(x, y, p, l);
    

    ofSetColor(123, 91, 14);
    ofDrawEllipse(g1, g2, g3, g4);
    
    ofSetColor(220, 19, 12);
    ofDrawCircle(i1, i2, 70);
    
    ofSetColor(82, 12, 189);
    ofDrawLine(n1, n2, n3, n4);
    
    ofSetColor(255, 255, 0);
    ofSetCircleResolution(6);
    ofDrawCircle(r1, r2, 48);
    
    ofSetColor(0, 51, 51);
    ofSetCircleResolution(8);
    ofDrawCircle(u1, u2, 76);
    
    ofSetColor(204, 255, 209);
    ofSetCircleResolution(12);
    ofDrawCircle(y1, y2, 41);
    
    ofSetColor(255, 204, 204);
    ofDrawLine(z1, z2, z3, z4);
    
    
    
    
    ofNoFill();

    
    ofSetColor(197, 21, 72);
    ofDrawCone(d1, d2, d3, 42, d4);
    
    ofSetColor(21, 97, 210);
    ofDrawSphere(e1, e2, e3);
    
    ofSetColor(82, 215, 10);
    ofDrawPlane(f1, f2, f3, f4);
    
    ofSetColor(87, 3, 78);
    ofDrawTriangle(b1, b2, b3, b4, b5, b6);
    
    ofSetColor(187, 92, 202);
    ofDrawCone(c1, c2, c3, c4, c5);
    
    ofSetColor(222, 129, 41);
    ofDrawBox(h1, h2, h3, h4, h5, h6);
    
    ofSetColor(91, 134, 73);
    ofDrawCylinder(j1, j2, j3, j4);

    ofSetColor(156, 182, 123);
    ofDrawRectangle(k1, k2, k3, k4);
    
    ofSetColor(9, 15, 14);
    ofDrawRectRounded(l1, l2, l3, l4, l5);
    
    ofSetColor(123, 89, 200);
    ofDrawCurve(m1, m2, m3, m4, m5, m6, m7, m8);
    
    ofSetColor(220, 100, 1);
    ofDrawSphere(o1, o2, o3);
    
    ofSetColor(255, 255, 255);
    ofDrawTriangle(p1, p2, p3, p4, p5, p6);
    
    ofSetColor(102, 0,  204);
    ofDrawIcoSphere(q1, q2, q3, 45);
    
    ofSetColor(255, 153, 255);
    ofDrawBox(s1, s2, s3, s4, s5, s6);
    
    ofSetColor(51, 102, 0);
    ofDrawRectangle(t1, t2, t3, t4, t5);
    
    ofSetColor(153, 255, 51);
    ofDrawEllipse(v1, v2, v3, v4);
    
    ofSetColor(102, 255, 255);
    ofDrawCone(w1, w2, w3, w4, w5);
    
    ofSetColor(51, 0, 102);
    ofDrawEllipse(x1, x2, x3, x4);

    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case ' ':
            x = ofRandom(0, ofGetHeight());
            y = ofRandom(0, ofGetHeight());
            p = ofRandom(0, ofGetHeight());
            l = ofRandom(0, ofGetHeight());
            break;
        case 'a':
            a1 = ofRandom(0, ofGetHeight());
            a2 = ofRandom(0, ofGetHeight());
            break;
        case 'b':
            b1 = ofRandom(0, ofGetHeight());
            b2 = ofRandom(0, ofGetHeight());
            b3 = ofRandom(0, ofGetHeight());
            b4 = ofRandom(0, ofGetHeight());
            b5 = ofRandom(0, ofGetHeight());
            b6 = ofRandom(0, ofGetHeight());
            break;
        case 'c':
            c1 = ofRandom(0, ofGetHeight());
            c2 = ofRandom(0, ofGetHeight());
            c3 = ofRandom(0, ofGetHeight());
            c4 = ofRandom(0, ofGetHeight());
            c5 = ofRandom(0, ofGetHeight());
        break;
        case 'd':
            d1 = ofRandom(0, ofGetHeight());
            d2 = ofRandom(0, ofGetHeight());
            d3 = ofRandom(0, ofGetHeight());
            d4 = ofRandom(0, ofGetHeight());
        break;
        case 'e':
            e1 = ofRandom(0, ofGetHeight());
            e2 = ofRandom(0, ofGetHeight());
            e3 = ofRandom(0, ofGetHeight());
        break;
        case 'f':
            f1 = ofRandom(0, ofGetHeight());
            f2 = ofRandom(0, ofGetHeight());
            f3 = ofRandom(0, ofGetHeight());
            f4 = ofRandom(0, ofGetHeight());
        break;
        case 'g':
            g1 = ofRandom(0, ofGetHeight());
            g2 = ofRandom(0, ofGetHeight());
            g3 = ofRandom(0, ofGetHeight());
            g4 = ofRandom(0, ofGetHeight());
        break;
        case 'h':
            h1 = ofRandom(0, ofGetHeight());
            h2 = ofRandom(0, ofGetHeight());
            h3 = ofRandom(0, ofGetHeight());
            h4 = ofRandom(0, ofGetHeight());
            h5 = ofRandom(0, ofGetHeight());
            h6 = ofRandom(0, ofGetHeight());
        break;
        case 'i':
            i1 = ofRandom(0, ofGetHeight());
            i2 = ofRandom(0, ofGetHeight());
        break;
        case 'j':
            j1 = ofRandom(0, ofGetHeight());
            j2 = ofRandom(0, ofGetHeight());
            j3 = ofRandom(0, ofGetHeight());
            j4 = ofRandom(0, ofGetHeight());
        break;
        case 'k':
            k1 = ofRandom(0, ofGetHeight());
            k2 = ofRandom(0, ofGetHeight());
            k3 = ofRandom(0, ofGetHeight());
            k4 = ofRandom(0, ofGetHeight());
        break;
        case 'l':
            l1 = ofRandom(0, ofGetHeight());
            l2 = ofRandom(0, ofGetHeight());
            l3 = ofRandom(0, ofGetHeight());
            l4 = ofRandom(0, ofGetHeight());
            l5 = ofRandom(0, ofGetHeight());
        break;
        case 'm':
            m1 = ofRandom(0, ofGetHeight());
            m2 = ofRandom(0, ofGetHeight());
            m3 = ofRandom(0, ofGetHeight());
            m4 = ofRandom(0, ofGetHeight());
            m5 = ofRandom(0, ofGetHeight());
            m6 = ofRandom(0, ofGetHeight());
            m7 = ofRandom(0, ofGetHeight());
            m8 = ofRandom(0, ofGetHeight());
        break;
        case 'n':
            n1 = ofRandom(0, ofGetHeight());
            n2 = ofRandom(0, ofGetHeight());
            n3 = ofRandom(0, ofGetHeight());
            n4 = ofRandom(0, ofGetHeight());
        break;
        case 'o':
            o1 = ofRandom(0, ofGetHeight());
            o2 = ofRandom(0, ofGetHeight());
            o3 = ofRandom(0, ofGetHeight());
        break;
        case 'p':
            p1 = ofRandom(0, ofGetHeight());
            p2 = ofRandom(0, ofGetHeight());
            p3 = ofRandom(0, ofGetHeight());
            p4 = ofRandom(0, ofGetHeight());
            p5 = ofRandom(0, ofGetHeight());
            p6 = ofRandom(0, ofGetHeight());
        break;
        case 'q':
            q1 = ofRandom(0, ofGetHeight());
            q2 = ofRandom(0, ofGetHeight());
            q3 = ofRandom(0, ofGetHeight());
        break;
        case 'r':
            r1 = ofRandom(0, ofGetHeight());
            r2 = ofRandom(0, ofGetHeight());
        break;
        case 's':
            s1 = ofRandom(0, ofGetHeight());
            s2 = ofRandom(0, ofGetHeight());
            s3 = ofRandom(0, ofGetHeight());
            s4 = ofRandom(0, ofGetHeight());
            s5 = ofRandom(0, ofGetHeight());
            s6 = ofRandom(0, ofGetHeight());
        break;
        case 't':
            t1 = ofRandom(0, ofGetHeight());
            t2 = ofRandom(0, ofGetHeight());
            t3 = ofRandom(0, ofGetHeight());
            t4 = ofRandom(0, ofGetHeight());
            t5 = ofRandom(0, ofGetHeight());
        break;
        case 'u':
            u1 = ofRandom(0, ofGetHeight());
            u2 = ofRandom(0, ofGetHeight());
        break;
        case 'v':
            v1 = ofRandom(0, ofGetHeight());
            v2 = ofRandom(0, ofGetHeight());
            v3 = ofRandom(0, ofGetHeight());
            v4 = ofRandom(0, ofGetHeight());
        break;
        case 'w':
            w1 = ofRandom(0, ofGetHeight());
            w2 = ofRandom(0, ofGetHeight());
            w3 = ofRandom(0, ofGetHeight());
            w4 = ofRandom(0, ofGetHeight());
            w5 = ofRandom(0, ofGetHeight());
        break;
        case 'x':
            x1 = ofRandom(0, ofGetHeight());
            x2 = ofRandom(0, ofGetHeight());
            x3 = ofRandom(0, ofGetHeight());
            x4 = ofRandom(0, ofGetHeight());
        break;
        case 'y':
            y1 = ofRandom(0, ofGetHeight());
            y2 = ofRandom(0, ofGetHeight());
        break;
        case 'z':
            z1 = ofRandom(0, ofGetHeight());
            z2 = ofRandom(0, ofGetHeight());
            z3 = ofRandom(0, ofGetHeight());
            z4 = ofRandom(0, ofGetHeight());
        
        default:
            break;
    }
    
//    if (key == ' ') {
//        x = ofRandom(0, ofGetWidth());
//        y = ofRandom(0, ofGetHeight());
//    }

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
