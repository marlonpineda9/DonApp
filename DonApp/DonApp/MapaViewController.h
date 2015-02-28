//
//  MapaViewController.h
//  DonApp
//
//  Created by Marlon Pineda on 28/02/15.
//  Copyright (c) 2015 Marlon Pineda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface MapaViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *mapa;

@property CLLocationManager * locationManager;

@end
