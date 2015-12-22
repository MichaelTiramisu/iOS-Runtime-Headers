/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO {
    id /* block */ _emissionHandler;
    UIBezierPath *_path;
    NSMutableArray *_prevPoints;
}

@property (copy) id /* block */ emissionHandler;
@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic, retain) NSMutableArray *prevPoints;

- (void)addPoint:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1;
- (void)clear;
- (void)dealloc;
- (id /* block */)emissionHandler;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (id)path;
- (id)prevPoints;
- (void)setEmissionHandler:(id /* block */)arg1;
- (void)setPath:(id)arg1;
- (void)setPrevPoints:(id)arg1;

@end