/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {
    NSAttributedString *_attributedText;
    double _capOffsetFromBoundsTop;
    double _lastLineBaselineOffsetFromBoundsTop;
    bool_singleLine;
}

@property(copy) NSAttributedString * attributedText;
@property double capOffsetFromBoundsTop;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property double lastLineBaselineOffsetFromBoundsTop;
@property(getter=isSingleLine) bool singleLine;
@property(readonly) Class superclass;

- (id)attributedText;
- (bool)canBecomeFirstResponder;
- (double)capOffsetFromBoundsTop;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (bool)isSingleLine;
- (double)lastLineBaselineOffsetFromBoundsTop;
- (void)setAttributedText:(id)arg1;
- (void)setCapOffsetFromBoundsTop:(double)arg1;
- (void)setLastLineBaselineOffsetFromBoundsTop:(double)arg1;
- (void)setSingleLine:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(bool*)arg3;

@end