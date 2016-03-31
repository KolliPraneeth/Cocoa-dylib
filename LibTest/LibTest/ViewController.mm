//
//  ViewController.m
//  LibTest
//
//  Created by Praneeth Kolli on 3/31/16.
//  Copyright © 2016 commvault. All rights reserved.
//

#import "ViewController.h"
#include "LibGen.hpp"
@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    LibGen *genObj = new LibGen();
    genObj->HelloWorld(@"if see this in log then it is working !!!".UTF8String);
    
    // Do any additional setup after loading the view.
}

- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}

@end
