/*
 *  NodeViewer.cpp
 *  ofApp
 *
 *  Created by Brian Eschrich on 04/12/14
 *  Copyright 2014 __MyCompanyName__. All rights reserved.
 *
 */

#include "NodeViewer.h"


//------------------------------------------------------------------
void NodeViewer::setup() {
	
	
}


//------------------------------------------------------------------
void NodeViewer::draw() {
    //draw lines
    for (int i=0; i<elements.size(); ++i) {
        elements[i]->draw();
    }
	
}
