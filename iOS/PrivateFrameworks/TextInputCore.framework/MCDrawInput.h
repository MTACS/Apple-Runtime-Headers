//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/MCKeyboardInput.h>

@interface MCDrawInput : MCKeyboardInput
{
    int _drawHand;
    RefPtr_54d74a7c _keyboardLayout;
    struct CGRect _currentLayoutCharacterKeysFrame;
    struct PathResampler _resampler;
}

@property(nonatomic) int drawHand; // @synthesize drawHand=_drawHand;
@property(readonly, nonatomic) struct PathResampler *resampler; // @synthesize resampler=_resampler;
@property(readonly, nonatomic) struct CGRect currentLayoutCharacterKeysFrame; // @synthesize currentLayoutCharacterKeysFrame=_currentLayoutCharacterKeysFrame;
@property(readonly, nonatomic) RefPtr_54d74a7c keyboardLayout; // @synthesize keyboardLayout=_keyboardLayout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateSampledInputsWithResampler:(const struct PathResampler *)arg1 permanentlyFinalized:(_Bool)arg2;
- (void)_updateSampledInputs;
@property(readonly, nonatomic) _Bool isDrawing;
@property(readonly, nonatomic) _Bool isCompleting;
@property(readonly, nonatomic) _Bool isComplete;
- (void)_appendAndResampleWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 force:(double)arg3 radius:(double)arg4 shouldFinalize:(_Bool)arg5;
- (void)composeWith:(id)arg1;
- (void)composeNew:(id)arg1;
- (_Bool)canComposeNew:(id)arg1;
- (_Bool)_canCompose;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKeyboardLayout:(const RefPtr_54d74a7c *)arg1 currentLayoutCharacterKeysFrame:(struct CGRect)arg2;
- (id)initWithKeyboardLayout:(const RefPtr_54d74a7c *)arg1;
- (id)init;

@end

