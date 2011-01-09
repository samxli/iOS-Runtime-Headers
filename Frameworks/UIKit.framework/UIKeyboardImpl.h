/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, UIDelayedAction, UIKeyboardInputManager, CandWord, <UIKeyboardInput>, UITextInputTraits, NSArray, NSString, NSObject<UIKeyboardRecording><UIApplicationEventRecording>, UIKeyboardLanguageIndicator, <UIKeyboardCandidateList>, UIAutocorrectInlinePrompt, UIKeyboardLayout, NSTimer;



@interface UIKeyboardImpl : UIView 
{
    <UIKeyboardInput> *m_delegate;
    UIKeyboardLanguageIndicator *m_languageIndicator;
    NSString *m_previousInputString;
    UIKeyboardInputManager *m_inputManager;
    CandWord *m_autocorrection;
    UIAutocorrectInlinePrompt *m_autocorrectPrompt;
    UIDelayedAction *m_autocorrectPromptAction;
    NSArray *m_candidates;
    <UIKeyboardCandidateList> *m_candidateList;
    NSObject<UIKeyboardRecording><UIApplicationEventRecording> *m_recorder;
    UIKeyboardLayout *m_layout;
    NSMutableDictionary *m_keyedLayouts;
    NSString *m_inputModeLastChosen;
    UIDelayedAction *m_synchronizePreferencesAction;
    NSTimer *m_autoDeleteTimer;
    NSUInteger m_autoDeleteCount;
    double m_autoDeleteLastDelete;
    double m_autoDeleteInterval;
    unsigned short m_autoDeleteShiftCharacter;
    UIDelayedAction *m_longPressAction;
    NSInteger m_orientation;
    struct CGPoint { 
        float x; 
        float y; 
    } m_inputPoint;
    NSInteger m_changeCount;
    double m_changeTime;
    struct __CFRunLoopObserver { } *m_observer;
    UITextInputTraits *m_defaultTraits;
    UITextInputTraits *m_traits;
    NSInteger m_returnKeyState;
    NSInteger m_currentDirection;
    BOOL m_autocorrectionPreference;
    BOOL m_autocapitalizationPreference;
    BOOL m_doubleSpacePeriodPreference;
    BOOL m_autoDeleteOK;
    BOOL m_autoshift;
    BOOL m_initializationDone;
    BOOL m_preferencesNeedSynchronization;
    BOOL m_shift;
    BOOL m_shiftLockedEnabled;
    BOOL m_shiftLocked;
    BOOL m_changed;
    BOOL m_selecting;
    BOOL m_inDealloc;
    BOOL m_caretVisible;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_updatingPreferences;
    BOOL m_anotherTouchWaiting;
    BOOL m_performDecomposingDelete;
    BOOL m_delegateIsSMSTextView;
    BOOL m_performanceLoggingEnabled;
    BOOL m_shouldSkipCandidateSelection;
    BOOL m_autocorrectPromptTimerFired;
    BOOL m_changeNotificationDisabled;
    BOOL m_userChangedSelection;
    BOOL m_shouldChargeKeys;
    BOOL m_longPress;
    BOOL m_syntheticInput;
    BOOL m_shiftNeedsUpdate;
    BOOL m_shiftPreventAutoshift;
    BOOL m_shiftHeldDownNeedsUpdated;
}

@property BOOL shouldSkipCandidateSelection;
@property(retain) <UIKeyboardRecording><UIApplicationEventRecording> *recorder;

+ (id)sharedInstance;
+ (id)activeInstance;
+ (void)releaseSharedInstance;
+ (void)applicationWillSuspend:(id)arg1;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(NSInteger)arg1;
+ (NSInteger)orientationForSize:(struct CGSize { float x1; float x2; })arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)delayedInit;
- (void)dealloc;
- (void)clearLayouts;
- (void)removeFromSuperview;
- (void)applicationSuspendedEventsOnly:(id)arg1;
- (void)applicationResumedEventsOnly:(id)arg1;
- (void)defaultsDidChange;
- (void)defaultsDidChange:(id)arg1;
- (void)synchronizePreferencesIfNeeded;
- (void)synchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (void)clearSynchronizePreferencesTimer;
- (BOOL)performanceLoggingPreference;
- (BOOL)autocorrectionPreference;
- (BOOL)autocorrectionPreferenceForTraits;
- (BOOL)autocapitalizationPreference;
- (BOOL)doubleSpacePeriodPreference;
- (id)UILanguagePreference;
- (BOOL)keyboardsExpandedPreference;
- (void)setKeyboardsExpandedPreference;
- (BOOL)canWriteKeyboardsExpandedPreferences;
- (id)inputModePreference;
- (id)localePreference;
- (void)setInputModePreference;
- (id)inputModeFirstPreference;
- (id)inputModeLastChosenPreference;
- (void)setInputModeLastChosenPreference;
- (id)inputModeLastUsedPreference;
- (void)setInputModeLastUsedPreference;
- (void)setKeyboardDefault:(id)arg1 forKey:(id)arg2;
- (id)keyboardDefaultForKey:(id)arg1;
- (BOOL)shiftLockPreference;
- (void)setInputMode:(id)arg1;
- (void)setInputModeIfDifferentThanCurrent:(id)arg1;
- (void)setInputModeFromPreferences;
- (void)showInputModeIndicator;
- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)isDesiredInputMode:(id)arg1;
- (BOOL)isAllowedInputMode:(id)arg1;
- (void)setInputModeToNextInPreferredList;
- (void)setInputModeToNextASCIICapableInPreferredList;
- (id)inputModeLastChosen;
- (void)setOrientationForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateLayoutForInterfaceOrientation:(NSInteger)arg1;
- (void)takeTextInputTraitsFrom:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 force:(BOOL)arg2;
- (void)postEmptyDelegateNotificationIfNeeded;
- (BOOL)delegateIsSMSTextView;
- (void)setInitialDirection;
- (void)textChanged:(id)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (id)textInputTraits;
- (void)enable;
- (BOOL)callShouldInsertText:(id)arg1;
- (BOOL)callShouldDelete;
- (void)callChangedSelection;
- (NSInteger)callPositionForAutocorrection:(id)arg1;
- (void)callChanged;
- (void)setChanged;
- (void)clearChangedDelegate;
- (BOOL)changeNotificationDisabled;
- (void)setChangeNotificationDisabled:(BOOL)arg1;
- (void)clearInputManager;
- (void)updateObserverState;
- (void)handleObserverCallback;
- (void)prepareForGeometryChange;
- (void)geometryChangeDone:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subtractKeyboardFrameFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)updateLayout;
- (NSInteger)orientation;
- (void)setMarkedText;
- (BOOL)hasMarkedText;
- (BOOL)hasEditableMarkedText;
- (id)searchStringForMarkedText;
- (void)prepareForSelectionChange;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateForChangedSelection;
- (void)updateInputManagerAutoShiftFlag;
- (BOOL)shouldSwitchInputMode:(id)arg1;
- (void)recomputeActiveInputModes;
- (void)notifyShiftState;
- (void)updateShiftState;
- (void)setShiftOffIfNeeded;
- (void)toggleShift;
- (void)setShift:(BOOL)arg1;
- (void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2;
- (void)setShiftPreventAutoshift:(BOOL)arg1;
- (void)setShiftNeedsUpdate;
- (void)setShiftLocked;
- (BOOL)isShifted;
- (BOOL)isAutoShifted;
- (BOOL)isShiftLocked;
- (BOOL)shiftLockedEnabled;
- (void)clearShiftState;
- (void)forceShiftUpdate;
- (void)forceShiftUpdateIfKeyboardStateChanged;
- (BOOL)shouldSkipCandidateSelection;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (BOOL)suppliesCompletions;
- (void)keyActivated;
- (void)keyDeactivated;
- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)handleDeleteAsRepeat:(BOOL)arg1;
- (void)handleDelete;
- (void)handleStringInput:(id)arg1 fromVariantKey:(BOOL)arg2;
- (BOOL)acceptInputString:(id)arg1;
- (void)setPreviousInputString:(id)arg1;
- (void)addInputString:(id)arg1;
- (void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2;
- (void)setPhraseBoundary:(NSUInteger)arg1;
- (NSUInteger)phraseBoundary;
- (void)setInputString:(id)arg1;
- (BOOL)shouldEnableShiftForDeletedCharacter:(unsigned short)arg1;
- (void)updateLayoutAndSetShift;
- (void)handleDeleteWithZeroInputCount;
- (void)handleDeleteWithNonZeroInputCount;
- (void)deleteFromInput;
- (void)acceptAutocorrection;
- (void)acceptCandidate:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)acceptCurrentCandidate;
- (void)acceptCurrentCandidateIfSelected;
- (void)showNextCandidates;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (id)candidateList;
- (void)clearInput;
- (void)setInputObject:(id)arg1;
- (void)addInputObject:(id)arg1;
- (void)clearTransientState;
- (void)clearAnimations;
- (void)acceptWord:(id)arg1 firstDelete:(NSUInteger)arg2 addString:(id)arg3;
- (BOOL)displaysCandidates;
- (void)updateCandidateDisplayAsyncWithCandidates:(id)arg1 forInputManager:(id)arg2;
- (BOOL)needsToDeferUpdateTextCandidateView;
- (void)updateCandidateDisplay;
- (void)setAutocorrection:(id)arg1;
- (id)autocorrectPrompt;
- (void)removeAutocorrectPrompt;
- (void)setCandidates:(id)arg1;
- (NSInteger)returnKeyType;
- (BOOL)returnKeyEnabled;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)updateReturnKey;
- (void)updateReturnKey:(BOOL)arg1;
- (id)automaticallySelectedOverlay;
- (id)inputOverlayContainer;
- (void)updateTextCandidateView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectToAutocorrectRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegateView:(id)arg2 container:(id)arg3;
- (void)touchAutocorrectPromptTimer;
- (void)clearAutocorrectPromptTimer;
- (void)updateAutocorrectPromptAction;
- (void)updateAutocorrectPrompt:(id)arg1;
- (void)animateAutocorrection;
- (void)fadeAutocorrectPrompt;
- (void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)delegateSuggestionsForCurrentInput;
- (void)generateCandidates:(BOOL)arg1;
- (BOOL)shouldChargeKeys;
- (struct __CFDictionary { }*)chargedKeyProbabilities;
- (void)touchAutoDeleteTimerWithThreshold:(double)arg1;
- (void)autoDeleteTimerFired:(id)arg1;
- (void)startAutoDeleteTimer;
- (void)stopAutoDelete;
- (void)touchLongPressTimerWithDelay:(double)arg1;
- (void)touchLongPressTimer;
- (void)clearLongPressTimer;
- (void)longPressAction;
- (BOOL)isLongPress;
- (void)clearTimers;
- (void)clearChangeTimeAndCount;
- (void)updateChangeTimeAndIncrementCount;
- (NSInteger)changeCount;
- (void)setAnotherTouchWaiting:(BOOL)arg1;
- (void)handleHardwareKeyDownFromSimulator:(struct __GSEvent { }*)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (BOOL)caretBlinks;
- (BOOL)caretVisible;
- (void)clearSelection;
- (void)timeMark:(NSUInteger)arg1 message:(id)arg2;
- (void)timeMark:(NSUInteger)arg1;
- (void)timeElapsed:(NSUInteger)arg1 message:(id)arg2;
- (BOOL)canHandleKeyHitTest;
- (void)clearKeyAreas;
- (void)registerKeyArea:(struct CGPoint { float x1; float x2; })arg1 withRadii:(struct CGPoint { float x1; float x2; })arg2 forKeyCode:(unsigned short)arg3 forLowerKey:(id)arg4 forUpperKey:(id)arg5;
- (NSInteger)keyHitTest:(struct CGPoint { float x1; float x2; })arg1 touchStage:(NSInteger)arg2 atTime:(double)arg3 withPathInfo:(struct { unsigned char x1; unsigned char x2; unsigned char x3; float x4; float x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; void *x7; }*)arg4 forceShift:(BOOL)arg5;
- (BOOL)keySlidIntoSwipe;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)isAutoFillMode;
- (void)setRecorder:(id)arg1;
- (id)recorder;
- (void)callLayoutUpdateReturnKey;
- (BOOL)callLayoutUsesAutoShift;
- (BOOL)callLayoutIsShiftKeyPlaneChooser;
- (BOOL)callLayoutShiftKeyRequiresImmediateUpdate;
- (BOOL)callLayoutIsShiftKeyBeingHeld;
- (void)callLayoutSetShift:(BOOL)arg1;
- (void)callLayoutLongPressAction;
- (void)callLayoutUpdateLocalizedKeys;
- (BOOL)keyboardRecordingEnabled;
- (void)installRecorder;
- (void)startKeyboardRecording;
- (void)stopKeyboardRecording;

@end
