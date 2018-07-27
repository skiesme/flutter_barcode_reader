//
// Created by Matthew Smith on 11/7/17.
//

#import <UIKit/UIKit.h>
#import "BarcodeScannerViewControllerDelegate.h"


@interface BarcodeScannerViewController : UIViewController
@property(nonatomic, weak) id<BarcodeScannerViewControllerDelegate> delegate;

@end
