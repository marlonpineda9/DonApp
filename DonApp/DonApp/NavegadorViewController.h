//
//  NavegadorViewController.h
//  DonApp
//
//  Created by Marlon Pineda on 28/02/15.
//  Copyright (c) 2015 Marlon Pineda. All rights reserved.
//

#import "ViewController.h"

@interface NavegadorViewController : UIViewController <UIWebViewDelegate>
@property (strong, nonatomic) IBOutlet UIWebView *navegador;

@end
