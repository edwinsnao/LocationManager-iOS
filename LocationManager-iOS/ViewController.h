//
//  ViewController.h
//  LocationManager-iOS
//
//  Created by fazhao on 2017/1/16.
//  Copyright © 2017年 fazhao. All rights reserved.
//

//#import <UIKit/UIKit.h>
//
//@interface ViewController : UIViewController
//
//
//@end

#import <Foundation/Foundation.h>
#import <BaiduMapAPI_Map/BMKMapComponent.h>
#import <BaiduMapAPI_Location/BMKLocationComponent.h>

@interface ViewController :  UIViewController <BMKMapViewDelegate,BMKLocationServiceDelegate>{
    IBOutlet BMKMapView* _mapView;
    IBOutlet UIButton* startBtn;
    IBOutlet UIButton* stopBtn;
    IBOutlet UIButton* followingBtn;
    IBOutlet UIButton* followHeadBtn;
    BMKLocationService* _locService;
}
-(IBAction)startLocation:(id)sender;
-(IBAction)stopLocation:(id)sender;
-(IBAction)startFollowing:(id)sender;
-(IBAction)startFollowHeading:(id)sender;
@end
