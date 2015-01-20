/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UICollectionViewLayout, UIPercentDrivenInteractiveTransition;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _operation;
    UICollectionViewLayout *_toLayout;
    bool_crossFadeBottomBars;
    bool_crossFadeNavigationBar;
    bool_interactionAborted;
}

@property bool crossFadeBottomBars;
@property bool crossFadeNavigationBar;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool interactionAborted;
@property UIPercentDrivenInteractiveTransition * interactionController;
@property long long operation;
@property(readonly) Class superclass;
@property(retain) UICollectionViewLayout * toLayout;

+ (id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;

- (bool)_shouldCrossFadeBottomBars;
- (bool)_shouldCrossFadeNavigationBar;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (bool)crossFadeBottomBars;
- (bool)crossFadeNavigationBar;
- (void)dealloc;
- (bool)interactionAborted;
- (id)interactionController;
- (long long)operation;
- (void)setCrossFadeBottomBars:(bool)arg1;
- (void)setCrossFadeNavigationBar:(bool)arg1;
- (void)setInteractionAborted:(bool)arg1;
- (void)setInteractionController:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setToLayout:(id)arg1;
- (id)toLayout;
- (double)transitionDuration:(id)arg1;

@end