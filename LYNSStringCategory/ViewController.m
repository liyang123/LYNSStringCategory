//
//  ViewController.m
//  LYNSStringCategory
//
//  Created by liyang on 16/3/29.
//  Copyright © 2016年 liyang. All rights reserved.
//

#import "ViewController.h"
#import "NSString+LYNSStringCategory.h"

#define kUrl1 @"wxf707ade9f9ff3ebb://oauth?code=0311e31372c6e9c86440eb7b4616501L&state=Weixinauth"
@interface ViewController ()
@property (nonatomic, strong) NSString *length;
/** ceshi */
@property (nonatomic, strong) UIView *testView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    

}
- (IBAction)btn1:(id)sender {
    NSString *url = [NSString stringWithFormat:@"%@", kUrl1];
    NSString *key = @"state";
    NSString *value = [NSString stringResolutionUrlStr:url WithKey:key];
    NSLog(@"value = %@", value); // value = Weixinauth
}







@end
